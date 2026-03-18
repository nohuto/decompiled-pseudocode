/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001AA98
 * Callers:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001AA04 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004DFC0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18004E618 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x1800816A8 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008E560 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

void __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  bool v6; // si
  char v7; // al
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v6 = 1;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 96), a2);
  v7 = CMILMatrix::IsIdentity<0>((char *)this + 96);
  v8 = *((_BYTE *)this + 5920) == 0;
  *((_BYTE *)this + 5952) = v7;
  if ( !v8 )
  {
    v9 = *((_QWORD *)this + 742);
    if ( v9 )
    {
      v13 = 0;
      CMILMatrix::Multiply((const struct CMILMatrix *)(v9 + 1248), a2, (struct CMILMatrix *)v12);
      v10 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v9, (const struct CMILMatrix *)v12);
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x27u, 0LL);
        v6 = 0;
      }
    }
  }
  if ( a3 )
    *a3 = v6;
}
