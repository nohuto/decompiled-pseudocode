/*
 * XREFs of ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1800DA234
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800D9DF0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@_KPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180044B90 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  _QWORD *v5; // rdx
  __int64 **v6; // r8
  __int64 *i; // rcx
  __int64 result; // rax
  __int64 j; // rcx

  *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                           a1,
                           *(_QWORD *)(*a2 + 8LL),
                           *a1,
                           a3);
  v5 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v6 = (__int64 **)v5[1];
  if ( *((_BYTE *)v6 + 25) )
  {
    *v5 = v5;
    result = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    for ( i = *v6; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v6 = (__int64 **)i;
    *v5 = v6;
    result = *(_QWORD *)(*a1 + 8);
    for ( j = *(_QWORD *)(result + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      result = j;
    *(_QWORD *)(*a1 + 16) = result;
  }
  return result;
}
