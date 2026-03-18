/*
 * XREFs of MmProcessWorkingSetControl @ 0x1407F5540
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x1409DA178 (VmpPauseResumeNotify.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140373BAC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x140373DA0 (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x140583D44 (MiEmptyWorkingSet.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SmStoreCompressionStop @ 0x1407F575C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1407F584C (SmStoreCompressionStart.c)
 *     PsSwapProcessWorkingSet @ 0x1409AD76C (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  _DWORD *v7; // r9
  _KPROCESS *v8; // rsi
  int v9; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char v12; // dl
  __int64 v13; // [rsp+40h] [rbp-98h]
  unsigned int v14; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
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
      KiStackAttachProcess(v8, 0LL, (__int64)v16, v7);
    }
    if ( HIDWORD(v13) )
    {
      if ( (v14 & 0xFFFFFFC0) == 0 )
      {
        if ( (v14 & 1) != ((v14 & 2) == 0)
          && ((v14 & 8) == 0 || (v14 & 2) != 0)
          && ((v14 & 0x10) == 0 || (v14 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v8[1].ActiveProcessors.StaticBitmap[26]);
          v9 = (v14 >> 3) & 4;
          if ( (v14 & 1) != 0 )
          {
            if ( (v14 & 8) != 0 )
              SmStoreCompressionStart();
            v10 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v8[1].ActiveProcessors.StaticBitmap[26], v9);
            if ( (v14 & 8) != 0 )
              SmStoreCompressionStop((v14 & 0x10) != 0);
            goto LABEL_19;
          }
          v12 = v9 | 1;
          if ( (v14 & 4) == 0 )
            v12 = (v14 >> 3) & 4;
          v11 = MiEmptyWorkingSet((__int64)&v8[1].ActiveProcessors.StaticBitmap[26], v12);
          goto LABEL_38;
        }
        v10 = -1073741637;
LABEL_19:
        if ( LODWORD(Object[0]) )
          KiUnstackDetachProcess((__int64)v16, 0LL);
        ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
        return v10;
      }
    }
    else if ( (v14 & 0xFFFFFFFE) == 0 )
    {
      v11 = PsSwapProcessWorkingSet((ULONG_PTR)v8);
LABEL_38:
      v10 = v11;
      goto LABEL_19;
    }
    v10 = -1073741811;
    goto LABEL_19;
  }
  return result;
}
