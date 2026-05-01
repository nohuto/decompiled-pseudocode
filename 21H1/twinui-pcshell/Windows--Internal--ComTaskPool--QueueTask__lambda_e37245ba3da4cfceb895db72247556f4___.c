/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_e37245ba3da4cfceb895db72247556f4___ @ 0x18006485C
 * Callers:
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180064750 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_e37245ba3da4cfceb895db72247556f4___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // ebx

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 3) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8[2] = 0LL;
    if ( v8 + 2 != a4 )
    {
      v8[2] = *a4;
      *a4 = 0LL;
    }
    v8[3] = a4[1];
    v9 = a4[2];
    v10 = a4 + 3;
    v8[4] = v9;
    v8[5] = 0LL;
    if ( v8 + 5 != v10 )
    {
      v8[5] = *v10;
      *v10 = 0LL;
    }
    v7 = v8;
    *v8 = off_18046B918;
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v11;
}
