/*
 * XREFs of ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@Z @ 0x1800B12C0
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEAU?$pair@$$CB_KI@1@1@Z @ 0x1800B11BC (--$_Insert_at@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@V-$_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Lrotate(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = *v2;
  if ( !*(_BYTE *)(*v2 + 25LL) )
    *(_QWORD *)(*v2 + 8LL) = a2;
  v2[1] = *(_QWORD *)(a2 + 8);
  result = *(_QWORD **)a1;
  if ( a2 == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    result[1] = v2;
  }
  else
  {
    result = *(_QWORD **)(a2 + 8);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
  }
  *v2 = a2;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
