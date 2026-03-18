/*
 * XREFs of RtlpCopyLegacyContext @ 0x1402E55F8
 * Callers:
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x1408C0C7C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1408C109C (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408C131C (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x1402E6E70 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x1402E860C (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x14058DB34 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14058DC94 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86();
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64();
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm();
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64();
  return result;
}
