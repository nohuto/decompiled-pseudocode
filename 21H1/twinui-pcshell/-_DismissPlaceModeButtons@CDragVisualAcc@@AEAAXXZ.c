/*
 * XREFs of ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18040B4AC
 * Callers:
 *     ?Disconnect@CDragVisualAcc@@UEAAXXZ @ 0x180409D80 (-Disconnect@CDragVisualAcc@@UEAAXXZ.c)
 *     ?DismissPlaceMode@CDragVisualAcc@@UEAAXXZ @ 0x180409DD0 (-DismissPlaceMode@CDragVisualAcc@@UEAAXXZ.c)
 *     ?StartDrag@CDragVisualAcc@@UEAAXXZ @ 0x18040B300 (-StartDrag@CDragVisualAcc@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18040B1C8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolic.c)
 */

void __fastcall CDragVisualAcc::_DismissPlaceModeButtons(IRawElementProviderSimple *pProvider)
{
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rsi
  IRawElementProviderSimple *v3; // r14
  unsigned __int64 v4; // rdi

  if ( LODWORD(pProvider[6].lpVtbl) == 2 )
  {
    lpVtbl = pProvider[27].lpVtbl;
    v3 = pProvider + 26;
    v4 = 0LL;
    if ( lpVtbl )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v3->lpVtbl->QueryInterface + v4) + 24LL))(*((_QWORD *)&v3->lpVtbl->QueryInterface
                                                                                                  + v4));
        ++v4;
      }
      while ( v4 < (unsigned __int64)lpVtbl );
    }
    CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::RemoveAll((__int64)v3);
    LODWORD(pProvider[6].lpVtbl) = 1;
    UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildrenBulkRemoved, 0LL, 0);
    UiaRaiseAutomationEvent(pProvider, 20002);
  }
}
