/*
 * XREFs of _NtOpenEvent@12 @ 0x4B2F2D80
 * Callers:
 *     _WaitForWerSvc@4 @ 0x4B33AD78 (_WaitForWerSvc@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return Wow64SystemServiceCall();
}
