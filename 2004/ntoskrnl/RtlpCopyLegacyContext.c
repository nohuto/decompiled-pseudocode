/*
 * XREFs of RtlpCopyLegacyContext @ 0x14034E42C
 * Callers:
 *     RtlCopyContext @ 0x1406AD83C (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x1408BAF1C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1408BB33C (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BB5BC (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x1402EA550 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x14034A9A4 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x14058A104 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14058A264 (RtlpCopyLegacyContextArm64.c)
 */

void __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64(a1, a2, a3, a4);
  }
}
