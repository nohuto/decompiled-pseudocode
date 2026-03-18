/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180244070
 * Callers:
 *     ?Initialize@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z @ 0x180246C08 (-Initialize@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  void *v2; // rcx
  LPVOID v3; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  if ( qword_180349680 )
  {
    v1 = 0;
    _InterlockedIncrement(&Windows::Internal::Details::_git);
  }
  else
  {
    ppv = 0LL;
    v1 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v1 >= 0 )
    {
      v2 = ppv;
      if ( !_InterlockedCompareExchange64(&qword_180349680, (signed __int64)ppv, 0LL) )
        v2 = 0LL;
      ppv = v2;
      _InterlockedIncrement(&Windows::Internal::Details::_git);
    }
    v3 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return (unsigned int)v1;
}
