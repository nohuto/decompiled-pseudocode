/*
 * XREFs of ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020A7FC
 * Callers:
 *     ?Draw@CSceneWorld@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F11F0 (-Draw@CSceneWorld@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D1138 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180177978 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 */

__int64 __fastcall CSceneWorld::Draw(
        CSceneWorld *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // r10
  CDrawingContext *v5; // r11
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[64]; // [rsp+40h] [rbp-58h] BYREF
  int v11; // [rsp+80h] [rbp-18h]

  v11 = 0;
  CMILMatrix::SetScale((CMILMatrix *)v10, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
  v6 = CDrawingContext::DrawScene3D(
         v5,
         *(struct ISpectreWorld **)(v4 - 80),
         *(struct CCompositionEnvironmentLight **)(v4 - 40),
         (const struct CMILMatrix *)v10);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE0u, 0LL);
  return v8;
}
