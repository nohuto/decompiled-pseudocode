/*
 * XREFs of HalpPowerStateCallback @ 0x1403A4210
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     HalpMcUpdateLock @ 0x1403855E4 (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x14038B3D8 (HalpMcUpdateUnlock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmLockPagableSectionByHandle @ 0x1406F6300 (MmLockPagableSectionByHandle.c)
 *     HalpMapNvsArea @ 0x140995AD8 (HalpMapNvsArea.c)
 *     HalpFreeNvsBuffers @ 0x140995B68 (HalpFreeNvsBuffers.c)
 */

void __fastcall HalpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ecx

  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        MiLockPagableImageSection((ULONG_PTR)HalpSleepPageLock, 0LL);
        HalpFreeNvsBuffers();
        HalpMcUpdateUnlock();
        v3 = HalpPerformanceCounter;
        SystemPowerPhase = 0;
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5
          && (*(_DWORD *)(HalpPerformanceCounter + 184) & 0x20) == 0
          && KeQueryActiveProcessorCountEx(0xFFFFu) > 1 )
        {
          v6 = -1;
          if ( HalpTscMaximumComputedSpread < 0xFFFFFFFF )
            v6 = HalpTscMaximumComputedSpread;
          KeBugCheckEx(0x5Cu, 0x110uLL, v3, 0x2AuLL, v6);
        }
      }
    }
    else
    {
      SystemPowerPhase = 1;
      ((void (__fastcall *)(_QWORD))off_140C00948[0])(0LL);
      MmLockPagableSectionByHandle(HalpSleepPageLock);
      HalpMapNvsArea();
      HalpMcUpdateLock(v5, v4);
    }
  }
}
