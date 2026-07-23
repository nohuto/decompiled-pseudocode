/*
 * XREFs of _NtVdmControl@8 @ 0x4B2F4670
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtVdmControl(VDMSERVICECLASS Service, PVOID ServiceData)
{
  return Wow64SystemServiceCall();
}
