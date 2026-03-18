/*
 * XREFs of ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C0079560
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C0079700 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C007A47C (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C007939C (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 */

FxUsbPipeContinuousReader *__fastcall FxUsbPipeContinuousReader::`scalar deleting destructor'(
        FxUsbPipeContinuousReader *this)
{
  FxUsbPipeContinuousReader::~FxUsbPipeContinuousReader(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
