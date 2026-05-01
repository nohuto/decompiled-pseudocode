/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x18006A794
 * Callers:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x18006A6C0 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 3) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6[2] = 0LL;
    if ( v6 + 2 != a2 )
    {
      v6[2] = *a2;
      *a2 = 0LL;
    }
    v2 = v6;
    v6[3] = a2[1];
    v6[4] = a2[2];
    *v6 = off_18048FF58;
  }
  result = a1;
  *a1 = v2;
  return result;
}
