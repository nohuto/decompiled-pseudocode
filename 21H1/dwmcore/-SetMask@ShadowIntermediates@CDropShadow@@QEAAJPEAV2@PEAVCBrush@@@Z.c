/*
 * XREFs of ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800DC168
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000F3F0 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800DC02C (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801C2F6C (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x1801C327C (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1801C2EFC (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
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
