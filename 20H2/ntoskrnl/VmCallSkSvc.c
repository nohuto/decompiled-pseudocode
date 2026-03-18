/*
 * XREFs of VmCallSkSvc @ 0x1405A0D80
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x1404FBED8 (VslSvcEnterIumSecureMode.c)
 */

NTSTATUS __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
