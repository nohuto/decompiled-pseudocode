/*
 * XREFs of _RtlpCompareAces@16 @ 0x4B2D8505
 * Callers:
 *     _RtlpIsDuplicateAce@8 @ 0x4B2D840A (_RtlpIsDuplicateAce@8.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 * Callees:
 *     _RtlpCompareKnownAces@16 @ 0x4B2D8537 (_RtlpCompareKnownAces@16.c)
 *     _RtlpCompareKnownObjectAces@16 @ 0x4B3476F8 (_RtlpCompareKnownObjectAces@16.c)
 */

char __fastcall RtlpCompareAces(_BYTE *a1, _BYTE *a2, PSID Sid2, PSID a4)
{
  char v4; // bl

  v4 = 0;
  if ( *a1 >= 5u && *a1 <= 8u )
  {
    if ( (unsigned __int8)(*a2 - 5) > 3u )
      return v4;
    return RtlpCompareKnownObjectAces((int)Sid2, a4);
  }
  if ( *a2 < 5u || *a2 > 8u )
    return RtlpCompareKnownAces(Sid2, (int)a4);
  return v4;
}
