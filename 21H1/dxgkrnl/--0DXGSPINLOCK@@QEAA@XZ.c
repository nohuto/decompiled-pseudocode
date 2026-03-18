/*
 * XREFs of ??0DXGSPINLOCK@@QEAA@XZ @ 0x1C0035138
 * Callers:
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C017DF54 (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

DXGSPINLOCK *__fastcall DXGSPINLOCK::DXGSPINLOCK(DXGSPINLOCK *this)
{
  *((_QWORD *)this + 1) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this);
  return this;
}
