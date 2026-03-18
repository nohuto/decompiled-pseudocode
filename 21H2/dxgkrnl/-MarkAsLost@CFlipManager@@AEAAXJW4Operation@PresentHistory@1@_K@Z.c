/*
 * XREFs of ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8
 * Callers:
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007BDB8 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C007C5F0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007DDE4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E380 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E56C (-ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 */

LONG __fastcall CFlipManager::MarkAsLost(__int64 a1, int a2, int a3, __int64 a4)
{
  CFlipManager::PresentHistory *v5; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  struct DXGGLOBAL *Global; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = *(CFlipManager::PresentHistory **)(a1 + 24);
  if ( v5 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v5);
    *((_DWORD *)NextEntry + 20) = a2;
    *((_DWORD *)NextEntry + 10) = a3;
    *((_QWORD *)NextEntry + 2) = a4;
    RtlCaptureStackBackTrace(1u, 4u, (PVOID *)NextEntry + 6, 0LL);
  }
  Global = DXGGLOBAL_GetGlobal();
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38073) + 312LL))(*(unsigned int *)(a1 + 328));
  return KeSetEvent(*(PRKEVENT *)(a1 + 320), 1, 0);
}
