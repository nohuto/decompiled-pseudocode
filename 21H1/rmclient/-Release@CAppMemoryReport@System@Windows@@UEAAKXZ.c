/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x1800083D0
 * Callers:
 *     ?Release@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x18000B170 (-Release@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x18000B180 (-Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBI@EAAKXZ @ 0x18000B190 (-Release@CAppMemoryReport@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000A944 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::Release(Windows::System::CAppMemoryReport *this)
{
  signed __int64 v1; // rax
  Windows::System::CAppMemoryReport *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 5);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646LL;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(Windows::System::CAppMemoryReport *, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
