/*
 * XREFs of CmpRmReDoPhase @ 0x140875980
 * Callers:
 *     CmpStartRMLog @ 0x14077D6A4 (CmpStartRMLog.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpVerifyLogRecord @ 0x1405CCE70 (CmpVerifyLogRecord.c)
 *     CmpTransSearchAddTransFromRm @ 0x140766F74 (CmpTransSearchAddTransFromRm.c)
 *     CmpDoReadTxRBigLogRecord @ 0x1408754D4 (CmpDoReadTxRBigLogRecord.c)
 *     CmpRealignLogBuffers @ 0x140875658 (CmpRealignLogBuffers.c)
 *     CmpDoReDoRecord @ 0x140882118 (CmpDoReDoRecord.c)
 */

int __fastcall CmpRmReDoPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rax
  ULONG v4; // edx
  struct _PRIVILEGE_SET *v5; // rdi
  int v6; // eax
  PVOID ppvReadBuffer; // [rsp+58h] [rbp-9h] BYREF
  PVOID pvReadContext; // [rsp+60h] [rbp-1h] BYREF
  __int64 v10; // [rsp+68h] [rbp+7h] BYREF
  struct _PRIVILEGE_SET *v11; // [rsp+70h] [rbp+Fh] BYREF
  CLFS_LSN plsnPrevious; // [rsp+78h] [rbp+17h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+80h] [rbp+1Fh] BYREF
  CLFS_LSN plsnRecord; // [rsp+88h] [rbp+27h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+C8h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+D0h] [rbp+6Fh] BYREF
  ULONG pcbBuffer; // [rsp+D8h] [rbp+77h] BYREF
  ULONG v18; // [rsp+E0h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  v2 = (_QWORD *)(a1 + 16);
  pvReadContext = 0LL;
  ppvReadBuffer = 0LL;
  pcbBuffer = 0;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  peRecordType = 0;
  v10 = 0LL;
  if ( (_QWORD *)*v2 != v2 )
  {
    LODWORD(v2) = ClfsReadLogRecord(
                    *(PVOID *)(a1 + 96),
                    &plsnFirst,
                    ClfsContextForward,
                    &ppvReadBuffer,
                    &pcbBuffer,
                    &peRecordType,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &pvReadContext);
    do
    {
      if ( (int)v2 < 0 )
        break;
      if ( (peRecordType & 1) != 0 )
      {
        LODWORD(v2) = CmpTransSearchAddTransFromRm((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 0, (__int64)&v10);
        if ( (int)v2 >= 0 )
        {
          v4 = pcbBuffer;
          v5 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
          v11 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
          v18 = pcbBuffer;
          if ( pcbBuffer < 0x30 )
            break;
          if ( *((int *)ppvReadBuffer + 3) < 0 )
          {
            LODWORD(v2) = CmpDoReadTxRBigLogRecord(pvReadContext, ppvReadBuffer, pcbBuffer, &v11, &v18);
            if ( (int)v2 < 0 )
              break;
            v5 = v11;
            v4 = v18;
          }
          v6 = CmpVerifyLogRecord((__int64)v5, v4);
          if ( v6 >= 0 )
          {
            CmpRealignLogBuffers((__int64)v5);
            v6 = CmpDoReDoRecord(v10, v5);
          }
          else if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            __debugbreak();
          }
          if ( v6 < 0 )
            *(_DWORD *)(v10 + 48) |= 2u;
          if ( *((int *)ppvReadBuffer + 3) < 0 )
            CmSiFreeMemory(v5);
        }
      }
      peRecordType = 1;
      LODWORD(v2) = ClfsReadNextLogRecord(
                      pvReadContext,
                      &ppvReadBuffer,
                      &pcbBuffer,
                      &peRecordType,
                      0LL,
                      &plsnUndoNext,
                      &plsnPrevious,
                      &plsnRecord);
    }
    while ( (_DWORD)v2 != -1073741807 );
    if ( pvReadContext )
      LODWORD(v2) = ClfsTerminateReadLog(pvReadContext);
  }
  return (int)v2;
}
