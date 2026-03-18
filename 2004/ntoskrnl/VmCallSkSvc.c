/*
 * XREFs of VmCallSkSvc @ 0x14059D2E0
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x1404F8648 (VslSvcEnterIumSecureMode.c)
 */

NTSTATUS __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
