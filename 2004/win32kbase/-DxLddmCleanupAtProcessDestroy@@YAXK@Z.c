/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockSprite @ 0x1C00A5A70 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     hdevEnumerate @ 0x1C00A6690 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00A7D10 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00A7D50 (GreUnlockDisplayDevice.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00A7F20 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00A7F6C (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C014D4BC (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  struct PDEV *v7; // rdi
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void (__fastcall *v13)(__int64, __int64); // rsi
  __int64 v14; // rbx
  __int64 CurrentProcess; // rax
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct PDEV *v22; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+50h] [rbp+18h] BYREF

  v23 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v22, a2, a3);
  v7 = hdevEnumerate(0LL, v4, v5);
  if ( v7 )
  {
    do
    {
      v9 = *((_DWORD *)v7 + 10);
      v22 = v7;
      if ( (v9 & 0x20000) == 0 && (v9 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v22) )
      {
        GreLockVisRgn((__int64)v7, v6, v8);
        GreLockSprite();
        GreLockDisplayDevice(v7);
        DxLddmPrimaryLockProcessDestroy((HDEV)v7, a1, &v23);
        v13 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v7 + 332);
        if ( v13 )
        {
          v14 = *((_QWORD *)v7 + 225);
          CurrentProcess = PsGetCurrentProcess(v11, v10);
          v13(v14, CurrentProcess);
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v19 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v19);
        }
        GreUnlockDisplayDevice(v7);
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v16);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion(v20);
        }
        GreUnlockVisRgn((int)v7, v17, v18);
      }
      v7 = hdevEnumerate(v7, v6, v8);
    }
    while ( v7 );
    if ( v23 )
      DxLddmLogProcessPrimaryLockCount(v23);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v8);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v21);
  }
}
