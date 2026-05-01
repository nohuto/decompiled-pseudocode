/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180146DF0
 * Callers:
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$6 @ 0x180103660 (_CApplicationManager--_HandleActivation2_--_1_--dtor$6.c)
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$2 @ 0x180104987 (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$2.c)
 *     _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$0 @ 0x180158BED (_CApplicationManager--_PerformDesktopActivationCallouts_--_1_--dtor$0.c)
 *     ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18019C3A4 (--1-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleArr.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18019E834 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x1801A0ACC (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AE.c)
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x1801A0DA8 (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@PEAU1@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1801A0FD4 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@PEAU1@V-$allocator@UParsedPenWorkspaceLayou.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x1801A10AC (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x1801A149C (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x1801A1558 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801A2430 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180225820 (-GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArra.c)
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x180225B10 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x1802268B4 (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180226C50 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1802A030C (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1802A4290 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x1803A63F8 (--_GGridRow@@QEAAPEAXI@Z.c)
 *     ??$_Add@$$QEAVGridRow@@@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ$$QEAVGridRow@@PEA_K@Z @ 0x1803B6FA8 (--$_Add@$$QEAVGridRow@@@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1803B7314 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 *     ??_ECAppTransitionTargetManager@@UEAAPEAXI@Z @ 0x1803C7600 (--_ECAppTransitionTargetManager@@UEAAPEAXI@Z.c)
 *     ?Reset@CAppTransitionTargetManager@@UEAAXXZ @ 0x1803C8280 (-Reset@CAppTransitionTargetManager@@UEAAXXZ.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1803F0684 (--1CAppLayoutOperation@@QEAA@XZ.c)
 *     ??_GCDropFeedbackList@@UEAAPEAXI@Z @ 0x1804211E0 (--_GCDropFeedbackList@@UEAAPEAXI@Z.c)
 *     ?Cleanup@CDropFeedbackList@@UEAAJXZ @ 0x1804213F0 (-Cleanup@CDropFeedbackList@@UEAAJXZ.c)
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x180442024 (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 *     ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x1804445DC (-RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z.c)
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18047FC20 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804804B8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * v3++));
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
