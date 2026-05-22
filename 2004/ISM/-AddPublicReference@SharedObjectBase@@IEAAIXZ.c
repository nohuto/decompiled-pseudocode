/*
 * XREFs of ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEB0C
 * Callers:
 *     ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x180042450 (-AddRef@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z @ 0x180042694 (-GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042C20 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_G.c)
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C13F0 (-QueryInterface@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1480 (-QueryInterface@-$SharedUnknownBase@UISIPCServer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedObjectBase::AddPublicReference(SharedObjectBase *this)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 1uLL);
  if ( (unsigned int)(result + 1) <= 2 )
    __fastfail(0xEu);
  return result;
}
