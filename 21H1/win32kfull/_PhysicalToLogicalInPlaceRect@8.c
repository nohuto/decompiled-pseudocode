/*
 * XREFs of _PhysicalToLogicalInPlaceRect@8 @ 0x37E2C
 * Callers:
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 */

int __fastcall PhysicalToLogicalInPlaceRect(int a1, _DWORD *a2)
{
  char v3; // bl
  int v4; // edi
  int v6; // esi
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  float *v11; // eax
  double v12; // st7
  float v13; // [esp+Ch] [ebp-40h]
  int v14; // [esp+10h] [ebp-3Ch]
  float v15; // [esp+10h] [ebp-3Ch]
  int v16; // [esp+14h] [ebp-38h]
  float v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]
  float v19; // [esp+18h] [ebp-34h]
  int v21; // [esp+1Ch] [ebp-30h]
  float v23; // [esp+20h] [ebp-2Ch]
  float v24; // [esp+20h] [ebp-2Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+24h] [ebp-28h] BYREF
  char v26; // [esp+44h] [ebp-8h]

  v3 = 0;
  v4 = 0;
  v26 = 0;
  if ( *(_DWORD *)(a1 + 120) )
  {
    if ( IsWindowDesktopComposed(a1) && CSmartFloatingSave::Save(&FloatSave) >= 0 )
    {
      v6 = *(_DWORD *)(a1 + 120);
      v7 = (int)*(float *)(v6 + 52);
      v8 = (int)*(float *)(v6 + 48);
      v9 = a2;
      *a2 -= v8;
      a2[2] -= v8;
      v10 = *a2;
      a2[3] -= v7;
      a2[1] -= v7;
      v21 = v10;
      v16 = v9[2];
      v14 = v9[3];
      v18 = v9[1];
      v11 = *(float **)(a1 + 120);
      v13 = 1.0 / v11[5];
      v23 = 1.0 / *v11;
      v12 = v23;
      v24 = (float)v21;
      *v9 = (int)(v24 * v12);
      v19 = (float)v18;
      v9[1] = (int)(v19 * v13);
      v17 = (float)v16;
      v9[2] = (int)(v12 * v17);
      v15 = (float)v14;
      v9[3] = (int)(v13 * v15);
      v4 = 1;
      KeRestoreFloatingPointState(&FloatSave);
      v26 = 0;
    }
    else
    {
      v3 = v26;
    }
    if ( v3 )
      KeRestoreFloatingPointState(&FloatSave);
  }
  return v4;
}
