/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800CFF48
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800CFEC0 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800CFEC0.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800D0008 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800D0008.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D8C0C (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x180151FC8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_180151FC8.c)
 */

_QWORD *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 *v5; // r11
  _QWORD *v6; // rsi
  _QWORD *v7; // r9
  _QWORD *v8; // rbx
  int v9; // edi
  unsigned __int64 v11; // r14
  unsigned int v12; // r10d
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v17; // ebp
  char v18; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v19; // [rsp+60h] [rbp+8h] BYREF

  v5 = a4;
  v6 = *(_QWORD **)(a1 + 8);
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 == (_QWORD *)*v6 )
    {
      if ( (unsigned __int64)*v5 < a3[4] && *((_DWORD *)v5 + 2) < *((_DWORD *)a3 + 10) )
        goto LABEL_3;
    }
    else if ( a3 == v6 )
    {
      v7 = (_QWORD *)v6[2];
      if ( v7[4] < (unsigned __int64)*v5 && *((_DWORD *)v7 + 10) < *((_DWORD *)v5 + 2) )
        goto LABEL_11;
    }
    else
    {
      v11 = *v5;
      if ( (unsigned __int64)*v5 < a3[4] )
      {
        v12 = *((_DWORD *)v5 + 2);
        if ( v12 < *((_DWORD *)a3 + 10) )
        {
          v13 = a3;
          if ( *((_BYTE *)a3 + 25) )
          {
            v13 = (_QWORD *)a3[2];
          }
          else
          {
            v14 = *a3;
            if ( *(_BYTE *)(*a3 + 25LL) )
            {
              v15 = a3[1];
              if ( !*(_BYTE *)(v15 + 25) )
              {
                v16 = a3;
                do
                {
                  LODWORD(a3) = v15;
                  if ( v16 != *(_QWORD **)v15 )
                    break;
                  v13 = (_QWORD *)v15;
                  v15 = *(_QWORD *)(v15 + 8);
                  v16 = v13;
                }
                while ( !*(_BYTE *)(v15 + 25) );
              }
              if ( !*((_BYTE *)v13 + 25) )
                v13 = (_QWORD *)v15;
            }
            else
            {
              do
              {
                v13 = (_QWORD *)v14;
                v14 = *(_QWORD *)(v14 + 16);
              }
              while ( !*(_BYTE *)(v14 + 25) );
            }
          }
          if ( v13[4] < v11 && *((_DWORD *)v13 + 10) < v12 )
          {
            LODWORD(a2) = (_DWORD)v8;
            if ( *(_BYTE *)(v13[2] + 25LL) )
            {
              LODWORD(v7) = (_DWORD)v13;
              LODWORD(a3) = 0;
            }
            else
            {
              LOBYTE(a3) = 1;
            }
            LODWORD(a1) = v9;
            goto LABEL_4;
          }
        }
      }
      if ( v7[4] < v11 )
      {
        v17 = *((_DWORD *)v5 + 2);
        if ( *((_DWORD *)v7 + 10) < v17 )
        {
          v19 = v7;
          std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(&v19);
          if ( v19 == v6 || v11 < v19[4] && v17 < *((_DWORD *)v19 + 10) )
          {
            LODWORD(a2) = (_DWORD)v8;
            LODWORD(a1) = v9;
            if ( !*(_BYTE *)(v7[2] + 25LL) )
            {
              LODWORD(v7) = (_DWORD)v19;
              goto LABEL_3;
            }
LABEL_11:
            LODWORD(a3) = 0;
            goto LABEL_4;
          }
        }
      }
    }
    *v8 = *(_QWORD *)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
                       v9,
                       (unsigned int)&v18,
                       (_DWORD)a3,
                       (_DWORD)v5,
                       a5);
    return v8;
  }
  v7 = *(_QWORD **)(a1 + 8);
LABEL_3:
  LOBYTE(a3) = 1;
LABEL_4:
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
    a1,
    (_DWORD)a2,
    (_DWORD)a3,
    (_DWORD)v7);
  return v8;
}
