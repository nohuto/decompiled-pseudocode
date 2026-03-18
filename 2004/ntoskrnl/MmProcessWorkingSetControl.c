/*
 * XREFs of MmProcessWorkingSetControl @ 0x1406D2AE8
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x14092C0F4 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140311308 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x1403115C8 (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x14052AFFC (MiEmptyWorkingSet.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStart @ 0x1406D2974 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D2A04 (SmStoreCompressionStop.c)
 *     PsSwapProcessWorkingSet @ 0x140904610 (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  int v6; // edi
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
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0x2000,
             (__int64)PsProcessType,
             a4,
             0x73576D4Du,
             Object,
             0LL,
             0LL);
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
      KiStackAttachProcess(v8, 0LL, (__int64)v16);
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
