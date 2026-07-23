/*
 * XREFs of PiDrvDbUnloadNode @ 0x140693F2C
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x140693FE0 (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall PiDrvDbUnloadNode(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  return 0LL;
}
