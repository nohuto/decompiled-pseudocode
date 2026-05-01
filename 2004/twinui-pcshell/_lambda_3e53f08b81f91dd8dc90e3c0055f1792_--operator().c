/*
 * XREFs of _lambda_3e53f08b81f91dd8dc90e3c0055f1792_::operator() @ 0x180348588
 * Callers:
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z @ 0x180349D00 (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180078384 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800CCD68 (-_End@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$al.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034C938 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

char __fastcall lambda_3e53f08b81f91dd8dc90e3c0055f1792_::operator()(unsigned __int8 *a1, KBViewInfo **a2)
{
  bool IsValid; // al
  __int64 v5; // rcx
  char v6; // r11
  KBViewInfo *v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  IsValid = KBViewInfo::IsValid(*a2);
  v6 = 0;
  if ( IsValid )
  {
    v7 = *a2;
    v8 = *((_QWORD *)v7 + 11) & std::_Fnv1a_append_bytes(v5, a1, 4uLL);
    while ( 1 )
    {
      v9 = std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_End(
             (__int64)v7 + 40,
             &v12,
             v8);
      if ( v10 == *v9 )
        break;
      if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)a1 )
        goto LABEL_7;
    }
    v10 = *((_QWORD *)v7 + 6);
LABEL_7:
    if ( v10 != *((_QWORD *)v7 + 6) )
      return 1;
  }
  return v6;
}
