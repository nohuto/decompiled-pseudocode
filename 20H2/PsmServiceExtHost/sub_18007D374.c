/*
 * XREFs of sub_18007D374 @ 0x18007D374
 * Callers:
 *     sub_180081288 @ 0x180081288 (sub_180081288.c)
 * Callees:
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 *     sub_18007F518 @ 0x18007F518 (sub_18007F518.c)
 */

void __fastcall sub_18007D374(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax

  if ( *(_DWORD *)(a1 + 560) == 2 )
  {
    v4 = sub_180004934(a1, 27LL, a3);
    sub_18007F518(*(_QWORD *)(a1 + 776), v4);
  }
}
