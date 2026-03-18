/*
 * XREFs of ??0DCVISRGNLOCK@@QAE@XZ @ 0x220CB7
 * Callers:
 *     ?pConvertDfbSurfaceToDibNKAPC@@YGXPAX00@Z @ 0x220CFB (-pConvertDfbSurfaceToDibNKAPC@@YGXPAX00@Z.c)
 * Callees:
 *     <none>
 */

DCVISRGNLOCK *__thiscall DCVISRGNLOCK::DCVISRGNLOCK(DCVISRGNLOCK *this)
{
  GreAcquireSemaphore(_ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", _ghsemDCVisRgn, 3);
  return this;
}
