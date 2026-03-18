/*
 * XREFs of MmProcessWorkingSetControl @ 0x1406D0FA0
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x14092AE44 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14030C194 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x14030C4DC (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x14052A9AC (MiEmptyWorkingSet.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     SmStoreCompressionStop @ 0x1406D11CC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406D12B0 (SmStoreCompressionStart.c)
 *     PsSwapProcessWorkingSet @ 0x140903330 (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(ULONG_PTR BugCheckParameter1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // r8
  _DWORD *v9; // r9
  _KPROCESS *v10; // r14
  int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // eax
  char v14; // dl
  _QWORD *Tag; // [rsp+20h] [rbp-B8h]
  __int64 v16; // [rsp+40h] [rbp-98h]
  int v17; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v19[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  v6 = 0;
  Object[0] = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( a3 < 0xC )
    return 3221225476LL;
  v16 = *a2;
  v17 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v16) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v16) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  LODWORD(Tag) = 1935109453;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x2000LL, PsProcessType, a4, Tag, Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = (_KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      KiStackAttachProcess(v10, 0LL, (__int64)v19, v9);
    }
    if ( HIDWORD(v16) )
    {
      if ( (v17 & 0xFFFFFFC0) == 0 )
      {
        if ( ((v17 & 0x20) == 0 || !a4)
          && (v17 & 1) != ((v17 & 2) == 0)
          && ((v17 & 8) == 0 || (v17 & 2) != 0)
          && ((v17 & 0x10) == 0 || (v17 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v10[1].ActiveProcessorsPadding[6]);
          v11 = (v17 & 0x20) != 0 ? 4 : 0;
          if ( (v17 & 1) != 0 )
          {
            if ( (v17 & 8) != 0 )
              SmStoreCompressionStart();
            v12 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v10[1].ActiveProcessorsPadding[6], v11);
            if ( (v17 & 8) != 0 )
            {
              LOBYTE(v6) = (v17 & 0x10) != 0;
              SmStoreCompressionStop(v6);
            }
            goto LABEL_20;
          }
          v14 = v11 | 1;
          if ( (v17 & 4) == 0 )
            v14 = (v17 & 0x20) != 0 ? 4 : 0;
          v13 = MiEmptyWorkingSet((__int64)&v10[1].ActiveProcessorsPadding[6], v14);
          goto LABEL_40;
        }
        v12 = -1073741637;
LABEL_20:
        if ( LODWORD(Object[0]) == 1 )
          KiUnstackDetachProcess((__int64)v19, 0LL, v8, v9);
        ObfDereferenceObjectWithTag(v10, 0x73576D4Du);
        return v12;
      }
    }
    else if ( (v17 & 0xFFFFFFFE) == 0 )
    {
      v13 = PsSwapProcessWorkingSet(v10);
LABEL_40:
      v12 = v13;
      goto LABEL_20;
    }
    v12 = -1073741811;
    goto LABEL_20;
  }
  return result;
}
