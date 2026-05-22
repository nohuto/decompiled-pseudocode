/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x180036608
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x18003656C (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180068E80 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800366EC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@@std@.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800697F4 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x180069AD0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x276276276276275LL )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Destroy_if_node(
      0x276276276276275LL,
      a6);
    std::_Xlength_error("map/set<T> too long");
  }
  v9 = a6;
  a1[1] = v6 + 1;
  *(_QWORD *)(a6 + 8) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = a6;
    *(_QWORD *)*a1 = a6;
    v10 = *a1;
LABEL_4:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_5;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_5;
  }
  a4[2] = a6;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_4;
LABEL_5:
  v11 = *(_QWORD *)(a6 + 8);
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v16 = *(_QWORD *)(v12 + 8);
    v17 = *(__int64 **)(v16 + 8);
    v18 = *v17;
    if ( v16 == *v17 )
    {
      v18 = v17[2];
      if ( !*(_BYTE *)(v18 + 24) )
      {
LABEL_24:
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_16;
      }
      if ( v12 == *(_QWORD *)(v16 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Lrotate(
          v7,
          *(_QWORD *)(v12 + 8),
          a3,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v18 + 24) )
        goto LABEL_24;
      if ( v12 == *(_QWORD *)v16 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
          v7,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL),
        a3,
        v12);
    }
LABEL_16:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v13 = *v7;
  *a2 = v9;
  v14 = *(_QWORD *)(v13 + 8);
  result = a2;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
