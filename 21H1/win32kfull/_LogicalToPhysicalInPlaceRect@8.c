/*
 * XREFs of _LogicalToPhysicalInPlaceRect@8 @ 0x15135F
 * Callers:
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 */

int __fastcall LogicalToPhysicalInPlaceRect(int a1, int *a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  int v12; // eax
  char v13; // al
  int v15; // [esp+Ch] [ebp-3Ch]
  int v16; // [esp+10h] [ebp-38h]
  int v17; // [esp+14h] [ebp-34h]
  float v19; // [esp+1Ch] [ebp-2Ch]
  float v20; // [esp+1Ch] [ebp-2Ch]
  float v21; // [esp+1Ch] [ebp-2Ch]
  float v22; // [esp+1Ch] [ebp-2Ch]
  struct _KFLOATING_SAVE FloatSave; // [esp+20h] [ebp-28h] BYREF
  char v24; // [esp+40h] [ebp-8h]

  v24 = 0;
  v4 = 0;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 144) & 0x20) != 0 && *(_DWORD *)(a1 + 120) )
  {
    if ( IsWindowDesktopComposed(a1) && CSmartFloatingSave::Save(&FloatSave) >= 0 )
    {
      v19 = (float)*a2;
      v5 = (int)(v19 * **(float **)(a1 + 120));
      *a2 = v5;
      v17 = v5;
      v20 = (float)a2[1];
      v6 = (int)(*(float *)(*(_DWORD *)(a1 + 120) + 20) * v20);
      v7 = (double)a2[2];
      a2[1] = v6;
      v15 = v6;
      v21 = v7;
      v8 = (int)(v21 * **(float **)(a1 + 120));
      a2[2] = v8;
      v16 = v8;
      v22 = (float)a2[3];
      v9 = (int)(*(float *)(*(_DWORD *)(a1 + 120) + 20) * v22);
      a2[3] = v9;
      v10 = *(_DWORD *)(a1 + 120);
      v11 = (int)*(float *)(v10 + 52);
      v12 = (int)*(float *)(v10 + 48);
      *a2 = v12 + v17;
      a2[2] = v12 + v16;
      a2[3] = v9 + v11;
      a2[1] = v11 + v15;
      v4 = 1;
      KeRestoreFloatingPointState(&FloatSave);
      v13 = 0;
      v24 = 0;
    }
    else
    {
      v13 = v24;
    }
    if ( v13 )
      KeRestoreFloatingPointState(&FloatSave);
  }
  return v4;
}
