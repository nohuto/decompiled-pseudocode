/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___ @ 0x180070114
 * Callers:
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800708F0 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388B8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263__void_ @ 0x18006FBC0 (std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_Fu.c)
 *     ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x18007025C (--0-$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800702CC (--0-$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BYTE v12[64]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v13[56]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp+1Fh]
  _QWORD *v15; // [rsp+F0h] [rbp+77h]

  for ( i = a2; i != a3; ++i )
  {
    v8 = *i;
    std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>(v12, a4);
    v14 = 0LL;
    v15 = operator new(0x48uLL);
    std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263__void_(v15);
    v14 = v15;
    std::_Func_class<void,>::_Tidy((__int64)v12, v9);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 352LL))(v8, v13);
  }
  std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>(a1, a4);
  std::_Func_class<void,>::_Tidy(a4, v10);
  return a1;
}
