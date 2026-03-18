/*
 * XREFs of ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801F3170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x180057E14 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CVisualCapture::InitializeDeviceTransform(CVisual **this, struct CMILMatrix *a2)
{
  CVisual *v4; // rcx
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  CVisual::GetRootTransform(this[236], a2);
  v4 = this[235];
  if ( v4 )
  {
    v6 = 0;
    CVisual::GetRootTransform(v4, (struct CMILMatrix *)v5);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v5);
  }
}
