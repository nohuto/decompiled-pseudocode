/*
 * XREFs of RtlpCopyLegacyContext @ 0x140310D9C
 * Callers:
 *     RtlCopyContext @ 0x1406F26DC (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x1408B9BFC (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1408BA01C (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BA29C (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x14030D4C4 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x14032F690 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x140589A14 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x140589B74 (RtlpCopyLegacyContextArm64.c)
 */

void __fastcall RtlpCopyLegacyContext(char a1, __int64 a2, int a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64();
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm();
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64();
  }
}
