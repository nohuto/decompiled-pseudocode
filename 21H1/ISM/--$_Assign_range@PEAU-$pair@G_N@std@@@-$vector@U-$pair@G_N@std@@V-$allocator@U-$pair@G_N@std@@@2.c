/*
 * XREFs of ??$_Assign_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180124544
 * Callers:
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x180124C48 (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x180124FFC (-_Clear_and_reserve_geometric@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@A.c)
 */

char __fastcall std::vector<std::pair<unsigned short,bool>>::_Assign_range<std::pair<unsigned short,bool> *>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _WORD *v3; // r9
  __int64 v4; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _DWORD *v11; // rcx
  _BYTE *v12; // rdx
  char *v13; // r9
  _DWORD *v14; // rdx
  unsigned __int64 v15; // r8

  v3 = *(_WORD **)a1;
  v4 = a2;
  v6 = (__int64)(a3 - a2) >> 2;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( v6 <= v7 )
  {
    v14 = &v3[2 * v6];
    while ( v4 != a3 )
    {
      *v3 = *(_WORD *)v4;
      v3 += 2;
      LOBYTE(v10) = *(_BYTE *)(v4 + 2);
      v4 += 4LL;
      *((_BYTE *)v3 - 2) = v10;
    }
  }
  else
  {
    v9 = 0LL;
    v10 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 2;
    if ( v6 > v10 )
    {
      LOBYTE(v10) = std::vector<std::pair<unsigned short,bool>>::_Clear_and_reserve_geometric(a1);
      v3 = *(_WORD **)a1;
      v7 = 0LL;
    }
    v11 = (_DWORD *)(v4 + 4 * v7);
    if ( (_DWORD *)v4 != v11 )
    {
      v12 = (_BYTE *)(v4 + 2);
      v13 = (char *)v3 - v4;
      do
      {
        *(_WORD *)&v12[(_QWORD)v13 - 2] = *((_WORD *)v12 - 1);
        v13[(_QWORD)v12] = *v12;
        v12 += 4;
        LOBYTE(v10) = (_BYTE)v12 - 2;
      }
      while ( v12 - 2 != (_BYTE *)v11 );
    }
    v14 = *(_DWORD **)(a1 + 8);
    v15 = (a3 - (unsigned __int64)v11 + 3) >> 2;
    if ( (unsigned __int64)v11 > a3 )
      v15 = 0LL;
    if ( v15 )
    {
      do
      {
        LODWORD(v10) = *v11;
        ++v9;
        *v14++ = *v11++;
      }
      while ( v9 != v15 );
    }
  }
  *(_QWORD *)(a1 + 8) = v14;
  return v10;
}
