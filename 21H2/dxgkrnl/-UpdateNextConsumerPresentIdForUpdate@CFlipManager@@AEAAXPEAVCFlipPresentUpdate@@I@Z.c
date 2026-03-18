/*
 * XREFs of ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C007EC18
 * Callers:
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C007C5F0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManager::UpdateNextConsumerPresentIdForUpdate(
        CFlipManager *this,
        struct CFlipPresentUpdate *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rax
  struct DXGGLOBAL *Global; // rax

  v4 = *((_QWORD *)a2 + 8) + 1LL;
  if ( v4 > *((_QWORD *)this + 31) )
  {
    *((_QWORD *)this + 31) = v4;
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 328LL))(
      *((unsigned int *)this + 82),
      *((_QWORD *)this + 31),
      a3);
  }
}
