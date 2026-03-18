/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z @ 0x1801B2D8C
 * Callers:
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800D1AB0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x1801B4564 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 */

void __fastcall CDrawingContext::PopDeviceTransform(
        CDrawingContext *this,
        const struct CMILMatrix *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v7[4]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v4 = *((_OWORD *)a2 + 1);
  v7[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v7[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v7[2] = v5;
  v7[3] = v6;
  v8 = *((_DWORD *)a2 + 16);
  CMILMatrix::Invert((CMILMatrix *)v7, (__int64)a2, a3);
  CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v7, 0LL);
  CDrawingContext::PopTransformInternal(this, 0);
}
