/*
 * XREFs of ??1AppResizeAcc@@EEAA@XZ @ 0x1803F631C
 * Callers:
 *     ??_GAppResizeAcc@@EEAAPEAXI@Z @ 0x1803F63E0 (--_GAppResizeAcc@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1803F6980 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 *     ?RemoveAll@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x1803F6BD8 (-RemoveAll@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicationVi.c)
 */

void __fastcall AppResizeAcc::~AppResizeAcc(IRawElementProviderSimple *pProvider)
{
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rcx

  pProvider->lpVtbl = (struct IRawElementProviderSimpleVtbl *)&AppResizeAcc::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IDragProvider,IAppResizeAcc>'};
  pProvider[1].lpVtbl = (struct IRawElementProviderSimpleVtbl *)&AppResizeAcc::`vftable'{for `IDragProvider'};
  pProvider[2].lpVtbl = (struct IRawElementProviderSimpleVtbl *)&AppResizeAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppResizeAcc>'};
  pProvider[4].lpVtbl = (struct IRawElementProviderSimpleVtbl *)&AppResizeAcc::`vftable'{for `CWRLImpWndProc<AppResizeAcc>'};
  VariantClear((VARIANTARG *)&pProvider[6]);
  CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(&pProvider[19]);
  AppResizeAcc::ProcessPendingNotifications(pProvider, 0);
  CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(&pProvider[19]);
  lpVtbl = pProvider[15].lpVtbl;
  if ( lpVtbl )
  {
    CoTaskMemFree(lpVtbl);
    pProvider[15].lpVtbl = 0LL;
  }
  pProvider[16].lpVtbl = 0LL;
  pProvider[18].lpVtbl = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pProvider[12]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pProvider[9]);
  HIDWORD(pProvider[3].lpVtbl) = -1073741823;
}
