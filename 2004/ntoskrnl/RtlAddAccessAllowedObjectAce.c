/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x14090EEA0
 * Callers:
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090F5B0 (RtlpAddKnownObjectAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedObjectAce(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PSID Src)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a1, a2, a3, a4, a5, a6, Src, 5);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, (unsigned __int8 *)Src, 0);
}
