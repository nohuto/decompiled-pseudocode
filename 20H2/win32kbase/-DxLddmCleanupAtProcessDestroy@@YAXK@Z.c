/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0011738
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0011A70 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockDisplayDevice @ 0x1C0011AC0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0011B00 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C0011B4C (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockSprite @ 0x1C005E870 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C014B06C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void (__fastcall *v7)(__int64, __int64); // rsi
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  HDEV v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
  v2 = (HDEV)hdevEnumerate(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10);
      v12 = v2;
      if ( (v3 & 0x20000) == 0 && (v3 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v12) )
      {
        GreLockVisRgn(v2);
        GreLockSprite(v2);
        GreLockDisplayDevice(v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v13);
        v7 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v2 + 332);
        if ( v7 )
        {
          v8 = *((_QWORD *)v2 + 225);
          CurrentProcess = PsGetCurrentProcess(v5, v4);
          v7(v8, CurrentProcess);
        }
        else
        {
          v10 = WdLogNewEntry5_WdError(v5, v4, v6);
          *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v10, v11);
        }
        GreUnlockDisplayDevice(v2);
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion();
        }
        GreUnlockVisRgn(v2);
      }
      v2 = (HDEV)hdevEnumerate(v2);
    }
    while ( v2 );
    if ( v13 )
      DxLddmLogProcessPrimaryLockCount(v13);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
