/*
 * XREFs of ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x180045AA8
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x180045A20 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800459A4 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x180059504 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall COcclusionContext::PushTransformInternal(COcclusionContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  Matrix = CTransform3D::GetMatrix(a2, 0LL);
  v4 = CMatrixStack::Push((COcclusionContext *)((char *)this + 32), Matrix, 1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x537u, 0LL);
  }
  else
  {
    v10 = 1;
    v7 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 360, &v10);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x538u, 0LL);
  }
  return v6;
}
