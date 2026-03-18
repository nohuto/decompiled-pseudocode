/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x1C000DDF0
 * Callers:
 *     ACPIThermalAssocaiteConstraint @ 0x1C000DD58 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalUpdateConstraints @ 0x1C00148C8 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0031420 (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiThermalDestroyContraints @ 0x1C0060360 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIThermalReevaluateConstraints(PVOID Context)
{
  bool v1; // zf

  v1 = *((_BYTE *)Context + 45) == 0;
  *((_BYTE *)Context + 44) = 1;
  if ( v1 )
  {
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 6), ACPIThermalReevaluateConstraintsWorker, DelayedWorkQueue, Context);
    *((_BYTE *)Context + 45) = 1;
  }
}
