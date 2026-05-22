/*
 * XREFs of ??$_Eqrange@USPATIAL_NODE_ID@@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x180151C5C
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1801629B8 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     memcmp_0 @ 0x18004B24F (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>,0>>::_Eqrange<SPATIAL_NODE_ID>(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rdi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = (__int64 **)(*a1 + 8LL);
  v8 = *v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( memcmp_0((char *)v8 + 28, a3, 0x10uLL) >= 0 )
    {
      if ( *((_BYTE *)v6 + 25) && memcmp_0(a3, (char *)v8 + 28, 0x10uLL) < 0 )
        v6 = v8;
      v3 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 **)v6;
  v9 = *v7;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( memcmp_0(a3, (char *)v9 + 28, 0x10uLL) >= 0 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v6 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
