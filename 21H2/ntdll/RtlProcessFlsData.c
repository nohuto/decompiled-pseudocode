/*
 * XREFs of RtlProcessFlsData @ 0x18005F2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlProcessFlsData(struct _RTLP_FLS_DATA *a1, unsigned int a2)
{
  RtlpFlsDataCleanup(a1, a1, a2);
}
