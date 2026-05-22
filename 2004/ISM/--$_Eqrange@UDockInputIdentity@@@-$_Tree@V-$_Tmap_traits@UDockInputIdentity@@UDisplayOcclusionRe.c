/*
 * XREFs of ??$_Eqrange@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@std@@V12@@1@AEBUDockInputIdentity@@@Z @ 0x180124DE0
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x180128680 (-erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIden_ea_180128680.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x1801471CC (-erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U-$less@UDockInputIden.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Eqrange<DockInputIdentity>(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned int v8; // r8d
  bool v9; // cf
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  bool v15; // cf
  unsigned __int64 v16; // rax
  __int64 *result; // rax

  v3 = *a1;
  v5 = *a1;
  v6 = *a1 + 8;
  v7 = *(_QWORD *)v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *(_DWORD *)(v7 + 32);
    v9 = v8 < *a3;
    if ( v8 == *a3 )
    {
      v10 = *((_QWORD *)a3 + 1);
      v9 = *(_QWORD *)(v7 + 40) < v10;
      if ( *(_QWORD *)(v7 + 40) == v10 )
        v9 = *(_WORD *)(v7 + 48) < *((_WORD *)a3 + 8);
    }
    if ( v9 )
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      if ( *(_BYTE *)(v5 + 25) )
      {
        v11 = *a3 < v8;
        if ( *a3 == v8 )
        {
          v12 = *(_QWORD *)(v7 + 40);
          v11 = *((_QWORD *)a3 + 1) < v12;
          if ( *((_QWORD *)a3 + 1) == v12 )
            v11 = *((_WORD *)a3 + 8) < *(_WORD *)(v7 + 48);
        }
        if ( v11 )
          v5 = v7;
      }
      v3 = v7;
      v7 = *(_QWORD *)v7;
    }
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = v5;
  v13 = *(_QWORD *)v6;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    v14 = *a3;
    do
    {
      v15 = v14 < *(_DWORD *)(v13 + 32);
      if ( v14 == *(_DWORD *)(v13 + 32) )
      {
        v16 = *(_QWORD *)(v13 + 40);
        v15 = *((_QWORD *)a3 + 1) < v16;
        if ( *((_QWORD *)a3 + 1) == v16 )
          v15 = *((_WORD *)a3 + 8) < *(_WORD *)(v13 + 48);
      }
      if ( v15 )
      {
        v5 = v13;
        v13 = *(_QWORD *)v13;
      }
      else
      {
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( !*(_BYTE *)(v13 + 25) );
  }
  *a2 = v3;
  result = a2;
  a2[1] = v5;
  return result;
}
