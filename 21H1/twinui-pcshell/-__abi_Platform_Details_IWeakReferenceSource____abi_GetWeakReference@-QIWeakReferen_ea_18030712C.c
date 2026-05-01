/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18030712C
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@WCA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1800D6A80 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1800D6A80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlBaseViewController__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 128) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 32LL))(a1 + 32);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
