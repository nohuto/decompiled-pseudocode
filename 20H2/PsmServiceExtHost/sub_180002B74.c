/*
 * XREFs of sub_180002B74 @ 0x180002B74
 * Callers:
 *     sub_18000294C @ 0x18000294C (sub_18000294C.c)
 *     sub_180079C30 @ 0x180079C30 (sub_180079C30.c)
 * Callees:
 *     sub_18000E6B0 @ 0x18000E6B0 (sub_18000E6B0.c)
 */

NTSTATUS __fastcall sub_180002B74(PSID SourceSid, __int64 a2, void *a3)
{
  if ( (int)sub_18000E6B0(SourceSid) < 0 )
    return -1073741585;
  else
    return RtlCopySid(0x44u, a3, SourceSid);
}
