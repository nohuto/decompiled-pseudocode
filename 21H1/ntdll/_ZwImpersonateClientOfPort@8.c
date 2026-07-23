/*
 * XREFs of _ZwImpersonateClientOfPort@8 @ 0x4B2F2B70
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  return Wow64SystemServiceCall();
}
