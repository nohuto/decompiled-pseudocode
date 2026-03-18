/*
 * XREFs of ??0Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C000BB68
 * Callers:
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C002B06C (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIrpPreprocessInfo::Info::Info(FxIrpPreprocessInfo::Info *this)
{
  this->EvtDevicePreprocess = 0LL;
  this->NumMinorFunctions = 0;
  this->MinorFunctions = 0LL;
}
