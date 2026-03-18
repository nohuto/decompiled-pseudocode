/*
 * XREFs of ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0004478
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0003140 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00044C4 (--1CFlipExBuffer@@MEAA@XZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C001A8D8 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::ReleasePendingPresentLimits(CFlipExBuffer *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 84);
  if ( v1 > 0 )
  {
    SignalPresentLimitSemaphore(*((struct _KSEMAPHORE **)this + 41), v1);
    *((_DWORD *)this + 84) = 0;
  }
}
