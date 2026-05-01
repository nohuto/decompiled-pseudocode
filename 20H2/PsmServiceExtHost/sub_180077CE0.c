/*
 * XREFs of sub_180077CE0 @ 0x180077CE0
 * Callers:
 *     sub_18006FAB0 @ 0x18006FAB0 (sub_18006FAB0.c)
 *     sub_18006FFD0 @ 0x18006FFD0 (sub_18006FFD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180077CE0(char a1)
{
  unsigned __int64 v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0xFFFFFFFF00000001uLL;
  if ( a1 )
    LODWORD(v2) = 3;
  return NtUpdateWnfStateData(&unk_1800A3998, &v2, 8LL, 0LL, 0LL, 0, 0);
}
