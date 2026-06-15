/*
 * XREFs of sub_18011E18C @ 0x18011E18C
 * Callers:
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 * Callees:
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 */

bool __fastcall sub_18011E18C(__int64 a1, int a2)
{
  char v4; // bl
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(int *)(sub_1800234A0((unsigned __int64 *)(a1 + 1752), a2) + 8) > 0 )
  {
    v6 = xmmword_18015B798;
    return (unsigned int)sub_1800229D0(a1, a2, &v6) != 0;
  }
  return v4;
}
