/*
 * XREFs of sub_1800380B0 @ 0x1800380B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 */

unsigned int __fastcall sub_1800380B0(__int64 *a1, __int64 a2, unsigned int a3)
{
  int v3; // eax

  v3 = sub_180021550(*a1, a2, a3);
  if ( v3 < 0 )
    return v3 & 0xEFFFFFFF;
  else
    return 0;
}
