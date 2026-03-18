/*
 * XREFs of std::map__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x1800CC094
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180084D50 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180085C30 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800CC130 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800CC130.c)
 */

__int64 __fastcall std::map__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // r8
  __int64 *v6; // r11
  __int64 *v7; // r9
  _QWORD *v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = *(__int64 **)(a1 + 8);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( (unsigned __int64)v7[4] >= *(_QWORD *)a3 || *((_DWORD *)v7 + 10) >= *(_DWORD *)(a3 + 8) )
    {
      v5 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v5 == v6 || *(_QWORD *)a3 < (unsigned __int64)v5[4] && *(_DWORD *)(a3 + 8) < *((_DWORD *)v5 + 10) )
  {
    v10 = a3;
    v9 = (_QWORD *)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const___std::tuple__anonymous_namespace_::AnimationId_const____std::tuple____(
                     a1,
                     (unsigned int)&v11,
                     (_DWORD)v5,
                     (_DWORD)v7,
                     (__int64)&v10);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v9;
  }
  else
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
