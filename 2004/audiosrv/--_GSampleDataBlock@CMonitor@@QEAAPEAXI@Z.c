/*
 * XREFs of ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100FEC
 * Callers:
 *     ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x180100D10 (--1-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180103600 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801044BC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104DC4 (-Stop@CMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall CMonitor::SampleDataBlock::`scalar deleting destructor'(void **this)
{
  free(this[4]);
  this[4] = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
