/*
 * XREFs of PiDrvDbUnloadNode @ 0x1406577B8
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x1406575F0 (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 */

__int64 __fastcall PiDrvDbUnloadNode(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v5 = *(_QWORD *)(a1 + 480);
    if ( v5 )
    {
      if ( v5 < 0 )
        KeSetCoalescableTimer((PKTIMER)(a1 + 264), *(LARGE_INTEGER *)(a1 + 480), 0, 0x3A98u, (PKDPC)(a1 + 328));
    }
    else
    {
      KiSetTimerEx(a1 + 264, 0LL, 0, 0, a1 + 328);
    }
    *(_BYTE *)(a1 + 488) = 1;
  }
  *a2 = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
