/*
 * XREFs of ??_EICompositorSchedulerTelemetry@@UEAAPEAXI@Z @ 0x1801ADE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

ICompositorSchedulerTelemetry *__fastcall ICompositorSchedulerTelemetry::`vector deleting destructor'(
        ICompositorSchedulerTelemetry *this,
        char a2)
{
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
