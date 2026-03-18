/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@1@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@1@@Z @ 0x18020B7B8
 * Callers:
 *     ??$emplace@AEAPEAVCD3DDevice@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDevice@@$$QEAUCache@CGradientSource@@@Z @ 0x18020B8CC (--$emplace@AEAPEAVCD3DDevice@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDevice@@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Insert_at@AEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@1@1@Z @ 0x18020B644 (--$_Insert_at@AEAU-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU-$_Tree_node@U-$pair@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CD3DDevice const *,CGradientSource::Cache,std::less<CD3DDevice const *>,std::allocator<std::pair<CD3DDevice const * const,CGradientSource::Cache>>,0>>::_Insert_nohint<std::pair<CD3DDevice const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDevice const * const,CGradientSource::Cache>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 *v6; // rbp
  _QWORD *v8; // r9
  char v9; // r8
  __int64 *v10; // rax
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rax
  _QWORD *i; // rax
  int v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = a5;
  v8 = (_QWORD *)*a1;
  v9 = 1;
  v10 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v10 + 25) )
  {
    v8 = v10;
    if ( *a4 >= (unsigned __int64)v10[4] )
    {
      v10 = (__int64 *)v10[2];
      v9 = 0;
    }
    else
    {
      v10 = (__int64 *)*v10;
      v9 = 1;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == *(_QWORD **)*a1 )
    {
      v9 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v11 = (_QWORD *)v8[2];
    }
    else
    {
      v13 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = (_QWORD *)v8[1]; !*((_BYTE *)i + 25) && v11 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v11 = i;
        if ( *((_BYTE *)v11 + 25) )
          i = v11;
        v11 = i;
      }
      else
      {
        do
        {
          v11 = (_QWORD *)v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( !*(_BYTE *)(v13 + 25) );
      }
    }
  }
  if ( v11[4] >= *a4 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a5 + 6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6 + 5);
    std::_Deallocate<16,0>(v6, 0x38uLL);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
LABEL_9:
  v12 = std::_Tree<std::_Tmap_traits<CD3DDevice const *,CGradientSource::Cache,std::less<CD3DDevice const *>,std::allocator<std::pair<CD3DDevice const * const,CGradientSource::Cache>>,0>>::_Insert_at<std::pair<CD3DDevice const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDevice const * const,CGradientSource::Cache>,void *> *>(
          a1,
          &v17,
          v9,
          v8,
          v16,
          (__int64)a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
