/*
 * XREFs of sub_1800062C8 @ 0x1800062C8
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_1800042EC @ 0x1800042EC (sub_1800042EC.c)
 *     sub_180004CA8 @ 0x180004CA8 (sub_180004CA8.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 */

__int64 __fastcall sub_1800062C8(__int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v8; // esi
  __int64 i; // rax
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax

  v8 = sub_1800067F0(a1);
  for ( i = sub_180006258(a1); ; i = sub_1800062A4(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( sub_180004CA8(i) && ((a4 & 1) == 0 || (*(_DWORD *)(v10 + 112) & 0x10000) != 0) )
    {
      sub_1800042EC(v12, a2);
      v13 = *(_QWORD *)(v10 + 72);
      if ( v13 && *(_BYTE *)(v13 + 40) == 2 )
        *(_QWORD *)(v10 + 512) = a3;
    }
  }
  return sub_1800066B0(a1, v8);
}
