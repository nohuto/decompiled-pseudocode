/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x14053A228
 * Callers:
 *     KiTpWriteBreakpoint @ 0x140517FB8 (KiTpWriteBreakpoint.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     RtlLookupFunctionEntry @ 0x1402E9520 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MmReleaseLoadLock @ 0x1406A8DA0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8E00 (MmAcquireLoadLock.c)
 *     MiInitializeDriverPatchState @ 0x1408C1704 (MiInitializeDriverPatchState.c)
 *     MiPrepareDriverPatchState @ 0x1408C173C (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x1408C17C0 (MiUnlockDriverPages.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3)
{
  char v3; // di
  __int64 Lock; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  int v8; // ebx
  char v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  char *AnyMultiplexedVm; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  char v17; // r10
  __int64 v21; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v22[8]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v23[14]; // [rsp+80h] [rbp-59h] BYREF

  v3 = a2;
  memset(v22, 0, sizeof(v22));
  v21 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = MiLookupDataTableEntry(a1, 0);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(v6 + 48)) == 1 )
    {
      v8 = -1073741637;
    }
    else
    {
      v9 = 0;
      MiInitializeDriverPatchState(v7, v22);
      v8 = MiPrepareDriverPatchState(v22);
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          if ( v9 )
          {
            v10 = *(_DWORD *)(v7 + 64);
            v11 = 0;
          }
          else if ( v3 )
          {
            v12 = RtlLookupFunctionEntry(a1, &v21, 0LL);
            if ( !v12 )
              break;
            v11 = *v12;
            v10 = v12[1] - *v12;
          }
          else
          {
            v10 = 1;
            v11 = a1 - *(_DWORD *)(v7 + 48);
          }
          if ( !v10 )
            break;
          v13 = *(_DWORD *)(v7 + 64);
          if ( v11 >= v13 || v13 - v11 < v10 )
            break;
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
          v8 = MiLockDriverPageRange(v22, (__int64)AnyMultiplexedVm, v15, v16, v17, 0LL);
          if ( v8 < 0 )
            goto LABEL_22;
          memset(v23, 0, 0x68uLL);
          LOBYTE(v23[3]) = a3;
          v23[1] = a1;
          v23[2] = __PAIR64__(v10, v11);
          v8 = VslpEnterIumSecureMode(2u, 77, 0, (__int64)v23);
          if ( v8 != -1073741267 )
            goto LABEL_22;
          if ( v9 )
          {
            v8 = -1073741637;
            goto LABEL_22;
          }
          MiUnlockDriverPages(v22);
          v9 = 1;
          MiInitializeDriverPatchState(v7, v22);
          v8 = MiPrepareDriverPatchState(v22);
          if ( v8 < 0 )
            goto LABEL_22;
          v3 = a2;
        }
        v8 = -1073741811;
      }
LABEL_22:
      MiUnlockDriverPages(v22);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( Lock )
    MmReleaseLoadLock(Lock);
  return (unsigned int)v8;
}
