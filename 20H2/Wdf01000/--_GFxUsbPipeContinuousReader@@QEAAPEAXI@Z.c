/*
 * XREFs of ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C006C070
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C006C2B0 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006CF8C (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C006BEB0 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 */

FxUsbPipeContinuousReader *__fastcall FxUsbPipeContinuousReader::`scalar deleting destructor'(
        FxUsbPipeContinuousReader *this)
{
  FxUsbPipeContinuousReader::~FxUsbPipeContinuousReader(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
