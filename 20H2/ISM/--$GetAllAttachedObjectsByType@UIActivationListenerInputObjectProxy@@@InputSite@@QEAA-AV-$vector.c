/*
 * XREFs of ??$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180013F70
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180013E80 (std--_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800CD454 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall InputSite::GetAllAttachedObjectsByType<IActivationListenerInputObjectProxy>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 i; // rdi
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbp
  _QWORD *v10; // rdx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp+10h]

  v12 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  v5 = *(_QWORD *)(a1 + 408);
  for ( i = *(_QWORD *)(a1 + 400); i != v5; i += 16LL )
  {
    v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(i + 8);
    v9 = **v8;
    if ( v4 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( v9(v8, &GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3, &v11) >= 0 )
    {
      v10 = (_QWORD *)a2[1];
      if ( (_QWORD *)a2[2] != v10 )
      {
        *v10 = v11;
        v4 = v11;
        if ( v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          v4 = v11;
        }
        a2[1] += 8LL;
        continue;
      }
      std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
        a2,
        v10,
        &v11);
    }
    v4 = v11;
  }
  if ( v4 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a2;
}
