/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c1f644e82a2260549a45876ad7b46fd___::_scalar_deleting_destructor_ @ 0x1800A0980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c1f644e82a2260549a45876ad7b46fd___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
