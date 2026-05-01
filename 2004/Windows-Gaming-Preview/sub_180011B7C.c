/*
 * XREFs of sub_180011B7C @ 0x180011B7C
 * Callers:
 *     sub_18000ED0C @ 0x18000ED0C (sub_18000ED0C.c)
 *     sub_1800308CC @ 0x1800308CC (sub_1800308CC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011B7C(void *a1)
{
  HRESULT v1; // ebx
  void *v2; // rcx
  LPVOID v3; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = a1;
  v1 = qword_18005AE20 == 0 ? 0x8000FFFF : 0;
  if ( qword_18005AE20 )
  {
    _InterlockedIncrement(&dword_18005AE18);
  }
  else
  {
    ppv = 0LL;
    v1 = CoCreateInstance(&rclsid, 0LL, 1u, &riid, &ppv);
    if ( v1 >= 0 )
    {
      v2 = ppv;
      if ( !_InterlockedCompareExchange64(&qword_18005AE20, (signed __int64)ppv, 0LL) )
        v2 = 0LL;
      ppv = v2;
      _InterlockedIncrement(&dword_18005AE18);
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
