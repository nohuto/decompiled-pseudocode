/*
 * XREFs of ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C005EFD4
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00093E0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(KIRQL *this)
{
  if ( this[8] == 254 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1864LL) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)this + 96LL));
  }
  else
  {
    if ( this[8] == 255 )
      return;
    *(_QWORD *)(*(_QWORD *)this + 1864LL) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)this + 96LL), this[8]);
  }
  this[8] = -1;
}
