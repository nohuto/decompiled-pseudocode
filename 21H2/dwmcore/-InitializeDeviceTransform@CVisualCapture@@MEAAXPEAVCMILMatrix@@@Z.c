/*
 * XREFs of ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x180243BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 */

void __fastcall CVisualCapture::InitializeDeviceTransform(CVisual **this, struct CMILMatrix *a2)
{
  char v4; // al
  CVisual *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v8[64]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+60h] [rbp-18h]

  if ( *((_BYTE *)this + 1900) )
  {
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_DWORD *)a2 + 15) = 1065353216;
    v4 = *((_BYTE *)a2 + 65) & 0xD7;
    *((_BYTE *)a2 + 64) = 85;
    *((_BYTE *)a2 + 65) = v4 | 0x17;
  }
  else
  {
    CVisual::GetRootTransform(this[234], a2, 0, 0);
    v5 = this[233];
    if ( v5 )
    {
      v9 = 0;
      CVisual::GetRootTransform(v5, (struct CMILMatrix *)v8, 0, 0);
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v8, v6, v7);
    }
  }
}
