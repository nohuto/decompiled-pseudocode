/*
 * XREFs of ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x180084B68
 * Callers:
 *     _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x1800856E8 (_anonymous_namespace_--PackedStringArrayBuilder--Append.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18008599C (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     _anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder @ 0x1800875F0 (_anonymous_namespace_--PackedStringArrayBuilder--PackedStringArrayBuilder.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x18008305C (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x1800830C4 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E5CF0 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>(
        __int64 *a1,
        char *a2,
        char *a3)
{
  char *v3; // rdi
  __int64 v5; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  char *v11; // rcx
  char *v12; // r8
  _BYTE *v13; // rdx
  size_t v14; // r8

  v3 = &a2[-*a1];
  v5 = a1[1] - *a1;
  if ( v5 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
  v8 = v5 + 1;
  v9 = std::vector<unsigned char>::_Calculate_growth(a1, v5 + 1);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v3[v10] = *a3;
  v11 = (char *)v10;
  v12 = (char *)a1[1];
  v13 = (_BYTE *)*a1;
  if ( a2 == v12 )
  {
    v14 = v12 - v13;
  }
  else
  {
    memmove_0((void *)v10, v13, (size_t)&a2[-*a1]);
    v14 = a1[1] - (_QWORD)a2;
    v13 = a2;
    v11 = &v3[v10 + 1];
  }
  memmove_0(v11, v13, v14);
  std::vector<unsigned char>::_Change_array(a1, v10, v8, v9);
  return &v3[*a1];
}
