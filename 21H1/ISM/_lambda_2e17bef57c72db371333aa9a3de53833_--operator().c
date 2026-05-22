/*
 * XREFs of _lambda_2e17bef57c72db371333aa9a3de53833_::operator() @ 0x18019F800
 * Callers:
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_2e17bef57c72db371333aa9a3de53833___ @ 0x18019EB9C (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKeyIn.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Insert@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x18019DE58 (--$_Insert@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$alloc.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_e6b13cfb47d3ffa5cec02fcc449cf4aa___ @ 0x18019ECE4 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ea_18019ECE4.c)
 *     _lambda_116eb2b29a456c26711f063c826cbee8_::operator() @ 0x18019F610 (_lambda_116eb2b29a456c26711f063c826cbee8_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_2e17bef57c72db371333aa9a3de53833_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( (*(_WORD *)(v4 + 24) & 0x200) == 0 )
  {
LABEL_9:
    v8 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)v8 != *(_QWORD *)*v2 )
      goto LABEL_13;
    v7 = *(_DWORD *)(v8 + 8) == *(_DWORD *)(*v2 + 8LL);
    goto LABEL_11;
  }
  if ( (**(_DWORD **)a1 & 0x200) == 0 )
  {
    std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_e6b13cfb47d3ffa5cec02fcc449cf4aa___(
      &v19,
      **(_QWORD ***)(v4 + 48),
      *(_QWORD **)(v4 + 48),
      *(_QWORD *)(a1 + 8));
    if ( v19 == *(_QWORD *)(*v2 + 48LL) )
    {
      lambda_116eb2b29a456c26711f063c826cbee8_::operator()(*(_QWORD ***)(v3 + 32));
      try
      {
        std::list<std::shared_ptr<HotKeyInfo>>::_Insert<std::shared_ptr<HotKeyInfo> const &>(
          *v2 + 48LL,
          *(_QWORD *)(*v2 + 48LL),
          *(_QWORD **)(v3 + 40));
      }
      catch ( std::bad_alloc )
      {
        **(_DWORD **)(a1 + 48) = -2147024882;
        v11 = *(_DWORD **)(a1 + 48);
        v12 = (unsigned int)*v11;
        if ( (int)v12 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
            McTemplateU0sqq_EventWriteTransfer(
              v12,
              (__int64)&v13,
              "HotKeyProcessor::RegisterHotKey::<lambda_2e17bef57c72db371333aa9a3de53833>::operator ()",
              268LL,
              *v11);
          v3 = a1;
          v2 = a2;
          goto LABEL_9;
        }
        v2 = a2;
        goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  if ( (*(_WORD *)(v4 + 24) & 0x100) != 0 )
  {
    *(_WORD *)(v4 + 24) = **(_WORD **)a1 & 0x7A00;
    *(_OWORD *)*v2 = *(_OWORD *)*(_QWORD *)(a1 + 8);
    *(_DWORD *)(*v2 + 16LL) = **(_DWORD **)(a1 + 16);
    v5 = 1;
    **(_BYTE **)(a1 + 24) = 1;
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)v6 == *(_QWORD *)v4 )
  {
    v7 = *(_DWORD *)(v6 + 8) == *(_DWORD *)(v4 + 8);
LABEL_11:
    if ( v7 )
    {
LABEL_12:
      v5 = 1;
      goto LABEL_14;
    }
  }
LABEL_13:
  v5 = 0;
LABEL_14:
  v9 = (std::_Ref_count_base *)v2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v5;
}
