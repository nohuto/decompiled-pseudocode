/*
 * XREFs of HalpPowerStateCallback @ 0x1403A3AB0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     HalpMcUpdateUnlock @ 0x14037FB70 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x140384674 (HalpMcUpdateLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmLockPagableSectionByHandle @ 0x140704530 (MmLockPagableSectionByHandle.c)
 *     HalpMapNvsArea @ 0x140994498 (HalpMapNvsArea.c)
 *     HalpFreeNvsBuffers @ 0x140994528 (HalpFreeNvsBuffers.c)
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
