/*
 * XREFs of sub_18006E194 @ 0x18006E194
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18006E194(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  if ( a2 != *(_BYTE *)(v2 + 60) )
  {
    *(_BYTE *)(v2 + 60) = a2;
    *(_BYTE *)(v2 + 61) = 1;
  }
}
