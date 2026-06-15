/*
 * XREFs of sub_180064E6C @ 0x180064E6C
 * Callers:
 *     sub_180064288 @ 0x180064288 (sub_180064288.c)
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 *     sub_1800EF878 @ 0x1800EF878 (sub_1800EF878.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF4E8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count.c)
 */

__int64 *__fastcall sub_180064E6C(__int64 a1)
{
  _QWORD *v2; // r10
  unsigned int v3; // r11d
  _DWORD *v4; // rax
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 *result; // rax
  _DWORD *v9; // rcx
  int v10; // edx
  char v11; // cl
  __int64 v12; // rax
  _DWORD *v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v18[1023]; // [rsp+74h] [rbp-8Ch] BYREF

  memset(v18, 0, sizeof(v18));
  v2 = *(_QWORD **)(a1 + 80);
  v17 = 2;
  v3 = 0;
  v4 = (_DWORD *)*v2;
  v5 = 8;
  v13 = (_DWORD *)*v2;
  while ( v4 != (_DWORD *)v2 )
  {
    if ( v4[8] )
    {
      if ( v3 >= 0x331 )
        break;
      v10 = v4[7];
      v11 = v4[9] != 0;
      if ( v4[10] )
        v11 |= 2u;
      v12 = v5;
      v5 += 5;
      *(_DWORD *)((char *)&v18[-1] + v12) = v10;
      *((_BYTE *)v18 + v12) = v11;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>,std::_Iterator_base0>::operator++(&v13);
    v4 = v13;
  }
  v18[0] = v3;
  v6 = RtlPublishWnfStateData(0x2821B2CA3BC4075LL, 0LL, &v17, 4096LL, 0LL);
  result = sub_180008448(v7, sub_1800B6240);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 4u )
  {
    LODWORD(v13) = v6;
    v15 = &v13;
    v16 = 4LL;
    return (__int64 *)sub_1800521E8((__int64)v9, byte_180168C91, 0LL, 0LL, 3, (__int64)v14);
  }
  return result;
}
