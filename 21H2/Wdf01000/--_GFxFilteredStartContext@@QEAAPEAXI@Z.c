/*
 * XREFs of ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C00899D8
 * Callers:
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C002F5F0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0089B80 (-_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxFilteredStartContext@@QEAA@XZ @ 0x1C00898C8 (--1FxFilteredStartContext@@QEAA@XZ.c)
 */

FxFilteredStartContext *__fastcall FxFilteredStartContext::`scalar deleting destructor'(FxFilteredStartContext *this)
{
  FxFilteredStartContext::~FxFilteredStartContext(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
