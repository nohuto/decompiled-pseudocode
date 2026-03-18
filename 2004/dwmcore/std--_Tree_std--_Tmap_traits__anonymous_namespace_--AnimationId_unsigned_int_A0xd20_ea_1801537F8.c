/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1801537F8
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800CC1B8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800CC1B8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800CC278 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800CC278.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v8; // r9
  char v9; // dl
  __int64 v10; // r8
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *i; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD **)(a1 + 8);
  v8 = v5;
  v9 = 1;
  v10 = v5[1];
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v8 = (_QWORD *)v10;
    if ( *(_QWORD *)a4 >= *(_QWORD *)(v10 + 32) || *(_DWORD *)(a4 + 8) >= *(_DWORD *)(v10 + 40) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      v9 = 0;
    }
    else
    {
      v10 = *(_QWORD *)v10;
      v9 = 1;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == (_QWORD *)*v5 )
    {
      LOBYTE(v10) = 1;
      goto LABEL_10;
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
  if ( v11[4] >= *(_QWORD *)a4 || *((_DWORD *)v11 + 10) >= *(_DWORD *)(a4 + 8) )
  {
    std::_Deallocate<16,0>(a5, 0x38uLL);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  LOBYTE(v10) = v9;
LABEL_10:
  v12 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
          a1,
          &v17,
          v10,
          v8,
          v16,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
