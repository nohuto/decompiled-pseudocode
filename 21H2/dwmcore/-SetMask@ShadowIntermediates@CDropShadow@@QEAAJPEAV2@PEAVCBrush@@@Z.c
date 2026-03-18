/*
 * XREFs of ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800ED2FC
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000F6B4 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800ED1CC (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x180212604 (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x180212900 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1802125D8 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x2C6u);
      return v7;
    }
    *((_QWORD *)this + 1) = a3;
    CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 1);
  }
  *(_QWORD *)this = a2;
  return 0;
}
