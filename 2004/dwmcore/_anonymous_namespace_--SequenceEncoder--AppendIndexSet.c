/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800857B0
 * Callers:
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180085C30 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180086470 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEB_K@Z @ 0x180086808 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@$0.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18008683C (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

void __fastcall anonymous_namespace_::SequenceEncoder::AppendIndexSet(Base853Encoder *this, __int64 a2)
{
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  _QWORD *v9; // r9
  __int64 j; // rax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  Base853Encoder::AppendVarInt(this, *(_DWORD *)(a2 + 8));
  v4 = *(_QWORD ***)a2;
  for ( i = **(_QWORD ***)a2; i != v4; i = (_QWORD *)j )
  {
    v6 = *((_QWORD *)this + 3);
    v11 = i[4];
    v7 = std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Lbound<unsigned __int64>(
           v6,
           &v11);
    if ( v7 == *v9 || v8 < *(_QWORD *)(v7 + 32) )
    {
      std::_Xout_of_range("invalid map<K, T> key");
      __debugbreak();
      JUMPOUT(0x180121CC4LL);
    }
    Base853Encoder::AppendVarInt(this, *(_DWORD *)(v7 + 40));
    if ( *(_BYTE *)(i[2] + 25LL) )
    {
      for ( j = i[1]; !*(_BYTE *)(j + 25) && i == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
        i = (_QWORD *)j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min();
    }
  }
}
