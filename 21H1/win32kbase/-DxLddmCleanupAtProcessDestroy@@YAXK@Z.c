/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreLockSprite @ 0x1C0075E70 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00B5120 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockDisplayDevice @ 0x1C00B5170 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00B51B0 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00B51FC (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C015380C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1, __int64 a2, int a3)
{
  HDEV v4; // rdi
  int v5; // r8d
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void (__fastcall *v12)(__int64, __int64); // rsi
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  HDEV v21; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+50h] [rbp+18h] BYREF

  v22 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21, a2, a3);
  v4 = (HDEV)hdevEnumerate(0LL);
  if ( v4 )
  {
    do
    {
      v6 = *((_DWORD *)v4 + 10);
      v21 = v4;
      if ( (v6 & 0x20000) == 0 && (v6 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v21) )
      {
        GreLockVisRgn((__int64)v4, v7, v8);
        GreLockSprite();
        GreLockDisplayDevice(v4);
        DxLddmPrimaryLockProcessDestroy(v4, a1, &v22);
        v12 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v4 + 332);
        if ( v12 )
        {
          v13 = *((_QWORD *)v4 + 225);
          CurrentProcess = PsGetCurrentProcess(v10, v9);
          v12(v13, CurrentProcess);
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v10, v9, v11);
          *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v18);
        }
        GreUnlockDisplayDevice(v4);
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v15);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion(v19);
        }
        GreUnlockVisRgn((int)v4, v16, v17);
      }
      v4 = (HDEV)hdevEnumerate(v4);
    }
    while ( v4 );
    if ( v22 )
      DxLddmLogProcessPrimaryLockCount(v22);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v5);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
}
