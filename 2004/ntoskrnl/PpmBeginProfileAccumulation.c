/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1407117C4
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140A680B4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5512) = a2;
}
