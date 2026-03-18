/*
 * XREFs of ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800DCEB8
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180009ED0 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800DCD7C (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801BE73C (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x1801BEA4C (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1801BE6CC (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::SetMask(
        CDropShadow::ShadowIntermediates *this,
        struct CDropShadow *a2,
        struct CBrush *a3)
{
  struct CResource *v5; // rdx
  unsigned int v7; // edi
  CResource *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v5 = (struct CResource *)*((_QWORD *)this + 1);
  if ( a3 != v5 )
  {
    v9 = *(CResource **)this;
    if ( v9 )
    {
      CResource::UnRegisterNotifierInternal(v9, v5);
      *((_QWORD *)this + 1) = 0LL;
    }
    v10 = CResource::RegisterNotifier(a2, a3);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x297u, 0LL);
      return v7;
    }
    *((_QWORD *)this + 1) = a3;
    CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 1);
  }
  *(_QWORD *)this = a2;
  return 0;
}
