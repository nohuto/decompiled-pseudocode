/*
 * XREFs of sub_18000E6B0 @ 0x18000E6B0
 * Callers:
 *     sub_180002B74 @ 0x180002B74 (sub_180002B74.c)
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_180026CA0 @ 0x180026CA0 (sub_180026CA0.c)
 *     sub_180033820 @ 0x180033820 (sub_180033820.c)
 *     sub_18008532C @ 0x18008532C (sub_18008532C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000E6B0(PSID Sid, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( a2 < 0xC )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    v4 = 0;
    if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) != a2 )
      return (unsigned int)-1073741585;
  }
  return v4;
}
