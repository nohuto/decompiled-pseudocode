/*
 * XREFs of ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18042ECB0
 * Callers:
 *     ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x18042EA50 (-OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x18042EA70 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800632C0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x180149484 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x18042EFC4 (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::SetDropEffect(IRawElementProviderSimple *this, const unsigned __int16 *a2)
{
  LPVOID *p_lpVtbl; // rsi

  if ( BYTE4(this[2].lpVtbl) )
  {
    p_lpVtbl = (LPVOID *)&this[16].lpVtbl;
    if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
           (const WCHAR **)&this[16],
           a2,
           -1) != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        p_lpVtbl,
        (__int64)a2,
        0xFFFFFFFFFFFFFFFFuLL);
      CDragVisualAcc::_RaiseDropEffectChangeEvent(this - 4);
    }
  }
}
