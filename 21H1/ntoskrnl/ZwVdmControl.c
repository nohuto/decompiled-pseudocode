/*
 * XREFs of ZwVdmControl @ 0x1403F5D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwVdmControl(VDMSERVICECLASS Service, PVOID ServiceData)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Service);
}
