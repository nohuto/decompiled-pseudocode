/*
 * XREFs of MmProcessWorkingSetControl @ 0x1406BD464
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x14092F854 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiLogWsEmptyControl @ 0x14029EC00 (MiLogWsEmptyControl.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14029F008 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x14053070C (MiEmptyWorkingSet.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStop @ 0x1406BD690 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406BD78C (SmStoreCompressionStart.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSwapProcessWorkingSet @ 0x140907B40 (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  unsigned int v6; // edi
  __int64 result; // rax
  _KPROCESS *v8; // r14
  int v9; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char v12; // dl
  __int64 v13; // [rsp+40h] [rbp-98h]
  int v14; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  v6 = 0;
  Object[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( a3 < 0xC )
    return 3221225476LL;
  v13 = *a2;
  v14 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v13) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v13) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x73576D4Du, (__int64)Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = (_KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      KiStackAttachProcess(v8, 0, (__int64)v16);
    }
    if ( HIDWORD(v13) )
    {
      if ( (v14 & 0xFFFFFFC0) == 0 )
      {
        if ( ((v14 & 0x20) == 0 || !a4)
          && (v14 & 1) != ((v14 & 2) == 0)
          && ((v14 & 8) == 0 || (v14 & 2) != 0)
          && ((v14 & 0x10) == 0 || (v14 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v8[1].ActiveProcessorsPadding[6]);
          v9 = (v14 & 0x20) != 0 ? 4 : 0;
          if ( (v14 & 1) != 0 )
          {
            if ( (v14 & 8) != 0 )
              SmStoreCompressionStart();
            v10 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v8[1].ActiveProcessorsPadding[6], v9);
            if ( (v14 & 8) != 0 )
            {
              LOBYTE(v6) = (v14 & 0x10) != 0;
              SmStoreCompressionStop(v6);
            }
            goto LABEL_20;
          }
          v12 = v9 | 1;
          if ( (v14 & 4) == 0 )
            v12 = (v14 & 0x20) != 0 ? 4 : 0;
          v11 = MiEmptyWorkingSet((__int64)&v8[1].ActiveProcessorsPadding[6], v12);
          goto LABEL_40;
        }
        v10 = -1073741637;
LABEL_20:
        if ( LODWORD(Object[0]) == 1 )
          KiUnstackDetachProcess((__int64)v16, 0LL);
        ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
        return v10;
      }
    }
    else if ( (v14 & 0xFFFFFFFE) == 0 )
    {
      v11 = PsSwapProcessWorkingSet(v8);
LABEL_40:
      v10 = v11;
      goto LABEL_20;
    }
    v10 = -1073741811;
    goto LABEL_20;
  }
  return result;
}
