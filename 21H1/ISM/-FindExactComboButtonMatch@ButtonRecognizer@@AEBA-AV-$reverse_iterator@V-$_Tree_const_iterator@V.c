/*
 * XREFs of ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x180173848
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x180173448 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B2EC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801722A4 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x180172C6C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180172FCC (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x18017323C (--C-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ButtonRecognizer::FindExactComboButtonMatch(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 i; // rax
  int *v14; // [rsp+20h] [rbp-20h] BYREF
  int *v15; // [rsp+28h] [rbp-18h]
  __int64 *v16; // [rsp+60h] [rbp+20h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v14, (__int64)a3);
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v14, v15, v15 - v14, (char)v16);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)v6;
  *a2 = *(_QWORD *)v6;
  v8 = v7;
LABEL_2:
  v16 = (__int64 *)v6;
  while ( v6 != v8 )
  {
    v9 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator->(&v16);
    v10 = (__int64)(v9 + 2);
    if ( *((_BYTE *)v9 + 8) )
    {
      if ( std::operator==<enum _Button,std::allocator<enum _Button>>(v10, a3) )
      {
        *a2 = v6;
        break;
      }
    }
    else if ( std::operator==<enum _Button,std::allocator<enum _Button>>(v10, &v14) )
    {
      *a2 = v6;
    }
    if ( *(_BYTE *)(v6 + 25) )
    {
      v6 = *(_QWORD *)(v6 + 16);
      goto LABEL_2;
    }
    v12 = *(_QWORD *)v6;
    if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
    {
      do
      {
        v6 = v12;
        v12 = *(_QWORD *)(v12 + 16);
      }
      while ( !*(_BYTE *)(v12 + 25) );
      goto LABEL_2;
    }
    for ( i = *(_QWORD *)(v6 + 8); !*(_BYTE *)(i + 25) && v6 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
    {
      v6 = i;
      v16 = (__int64 *)i;
    }
    if ( !*(_BYTE *)(v6 + 25) )
    {
      v6 = i;
      v16 = (__int64 *)i;
    }
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v14);
  return a2;
}
