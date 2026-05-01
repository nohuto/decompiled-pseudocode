/*
 * XREFs of ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x18041A570
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800632C0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x180149484 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x18041A000 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x18041A148 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 */

void __fastcall AppResizeAcc::SetDropEffect(IRawElementProviderSimple *this, const unsigned __int16 *a2)
{
  if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
         (const WCHAR **)&this[10],
         a2,
         -1) != 2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (LPVOID *)&this[10].lpVtbl,
      (__int64)a2,
      0xFFFFFFFFFFFFFFFFuLL);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)&this[-2], 30139);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)&this[-2], 30140);
    AppResizeAcc::ProcessPendingNotifications(this - 2, 1);
  }
}
