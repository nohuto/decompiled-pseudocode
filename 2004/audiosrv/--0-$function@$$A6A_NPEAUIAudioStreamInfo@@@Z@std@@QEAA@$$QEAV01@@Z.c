/*
 * XREFs of ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x18007035C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263__void_ @ 0x18006FCC0 (std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_Fu.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___ @ 0x180070214 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180070214.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388A8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
