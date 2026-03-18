/*
 * XREFs of ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C002B06C
 * Callers:
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C002AEA0 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065490 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 * Callees:
 *     ??0Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C000BB68 (--0Info@FxIrpPreprocessInfo@@QEAA@XZ.c)
 */

void __fastcall FxIrpPreprocessInfo::FxIrpPreprocessInfo(FxIrpPreprocessInfo *this)
{
  FxIrpPreprocessInfo::Info *Dispatch; // rdi
  __int64 v3; // rsi

  Dispatch = this->Dispatch;
  v3 = 28LL;
  do
  {
    FxIrpPreprocessInfo::Info::Info(Dispatch++);
    --v3;
  }
  while ( v3 );
  this->ClassExtension = 0;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
}
