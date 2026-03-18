/*
 * XREFs of HalpPowerStateCallback @ 0x1403A6630
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 *     HalpMcUpdateUnlock @ 0x14038661C (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x140387784 (HalpMcUpdateLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmLockPagableSectionByHandle @ 0x1405D6560 (MmLockPagableSectionByHandle.c)
 *     HalpMapNvsArea @ 0x14099BC38 (HalpMapNvsArea.c)
 *     HalpFreeNvsBuffers @ 0x14099BCC8 (HalpFreeNvsBuffers.c)
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
