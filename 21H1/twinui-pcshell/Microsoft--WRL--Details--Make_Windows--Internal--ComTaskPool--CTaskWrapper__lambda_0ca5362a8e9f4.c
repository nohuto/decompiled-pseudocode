/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ca5362a8e9f42bbaa8a80157a92d215_____lambda_0ca5362a8e9f42bbaa8a80157a92d215___ @ 0x1800726C0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f643ad3347bf4393b851723eb8b01c00___ @ 0x18007259C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f643ad3347bf4393b851723eb8b01c00___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ca5362a8e9f42bbaa8a80157a92d215_____lambda_0ca5362a8e9f42bbaa8a80157a92d215___(
        __int64 *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v5[3] = a2[1];
    v6 = (volatile int *)(a2 + 3);
    v5[4] = a2[2];
    v5[5] = 0LL;
    if ( v5 + 5 != a2 + 3 )
    {
      v5[5] = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
    }
    *((_BYTE *)v5 + 48) = *((_BYTE *)a2 + 32);
    *v5 = off_18046C2C8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
