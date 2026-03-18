/*
 * XREFs of RIMRevokeConfigurationChange @ 0x1C0162340
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C016156C (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMRevokeConfigurationChange(__int64 a1, unsigned __int16 a2)
{
  return RIMDeliverConfigRequest((struct RIMDEV *)a1, *(_QWORD *)(a1 + 464), a2, 0);
}
