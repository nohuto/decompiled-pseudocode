/*
 * XREFs of _GreSelectRedirectionBitmap@8 @ 0x322B0
 * Callers:
 *     _InvalidateDCE@4 @ 0x3277C (_InvalidateDCE@4.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z @ 0x153526 (-UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z @ 0x1D11D0 (-vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QAEXXZ @ 0x1D1265 (-vUpdateCachedDPIScaleValue@DC@@QAEXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YGPAUHBITMAP__@@PAUHDEV__@@0PAU1@@Z @ 0x2036FB (-MulGetBitmapForDisplayDevice@@YGPAUHBITMAP__@@PAUHDEV__@@0PAU1@@Z.c)
 */

int __stdcall GreSelectRedirectionBitmap(int a1, HDEV a2)
{
  int v2; // edi
  _DWORD (__fastcall *v3)(int, _DWORD, _DWORD); // ebx
  int v4; // eax
  int v5; // edx
  DC *v6; // ebx
  int v7; // esi
  HBITMAP BitmapForDisplayDevice; // eax
  _DWORD *v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  HDEV v31; // [esp+0h] [ebp-48h]
  HBITMAP v32; // [esp+4h] [ebp-44h]
  _DWORD *v34; // [esp+18h] [ebp-30h]
  int v35; // [esp+24h] [ebp-24h] BYREF
  int v36; // [esp+28h] [ebp-20h]
  void (__fastcall *v37)(DC *, int *); // [esp+2Ch] [ebp-1Ch]
  void (__stdcall *v38)(int, _DWORD); // [esp+30h] [ebp-18h]
  _DWORD (__fastcall *v39)(int, _DWORD, _DWORD); // [esp+34h] [ebp-14h]
  _DWORD v40[3]; // [esp+38h] [ebp-10h] BYREF

  v36 = a1;
  v34 = 0;
  v2 = a1;
  if ( !a1 )
    return 1;
  v3 = HmgShareLockEx;
  v37 = (void (__fastcall *)(DC *, int *))HmgDecrementShareReferenceCountEx;
  v39 = HmgShareLockEx;
  v38 = (void (__stdcall *)(int, _DWORD))bDeleteDCInternalEx;
  while ( 1 )
  {
    v40[1] = 0;
    v40[2] = 0;
    v4 = v3(v2, 1, 0);
    v6 = (DC *)v4;
    v40[0] = v4;
    if ( !v4 )
      return 0;
    v7 = *(_DWORD *)(v4 + 36);
    if ( (*(_BYTE *)(v4 + 28) & 1) != 0 )
      break;
    BitmapForDisplayDevice = (HBITMAP)a2;
    if ( a2 && v36 == v2 )
    {
      if ( v7 != *(_DWORD *)(v7 + 16) )
      {
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(a2, v31, v32);
        a2 = (HDEV)BitmapForDisplayDevice;
      }
      LOBYTE(v5) = 5;
      v18 = HmgShareLockCheck(BitmapForDisplayDevice, v5);
      v34 = (_DWORD *)v18;
      if ( !v18 )
        goto LABEL_35;
      DEC_SHARE_REF_CNT(v18);
    }
    if ( (*((_DWORD *)v6 + 6) & 0x4000) != 0 )
    {
      v15 = *((_DWORD *)v6 + 126);
      if ( v15 )
      {
        LOBYTE(v5) = 5;
        v16 = HmgShareLockCheck(*(_DWORD *)(v15 + 20), v5);
        v17 = v16;
        if ( v16 )
        {
          DEC_SHARE_REF_CNT(v16);
          DEC_SHARE_REF_CNT(v17);
        }
      }
    }
    if ( a2 )
    {
      LOBYTE(v5) = 5;
      v19 = HmgShareLockCheck(a2, v5);
      v20 = v19;
      if ( v19 )
        INC_SHARE_REF_CNT(v19);
      v9 = v34;
      *((_DWORD *)v6 + 6) |= 0x4000u;
      v21 = v34[18];
      if ( (v21 & 0x800) == 0 )
        v34[18] = v21 | 0x800;
      if ( v20 )
        DEC_SHARE_REF_CNT(v20);
    }
    else
    {
      v9 = *(_DWORD **)(v7 + 1820);
      *((_DWORD *)v6 + 6) &= ~0x4000u;
      v34 = v9;
    }
    v10 = *((_DWORD *)v6 + 6);
    if ( (v9[18] & 0x200) != 0 )
      v11 = v10 | 0x8000;
    else
      v11 = v10 & 0xFFFF7FFF;
    *((_DWORD *)v6 + 6) = v11;
    *((_DWORD *)v6 + 126) = v9;
    if ( (v9[19] & 0x800) != 0 )
    {
      DC::vSetDpiScaling(v9[115], v9[116], v9[117], v9[118]);
      v9 = v34;
    }
    else
    {
      v12 = *((_DWORD *)v6 + 130);
      if ( (v12 & 1) != 0 )
      {
        *((_DWORD *)v6 + 131) = 0;
        *((_DWORD *)v6 + 132) = 0;
        *((_DWORD *)v6 + 133) = 0;
        *((_DWORD *)v6 + 134) = 0;
        *((_DWORD *)v6 + 6) |= 0x10u;
        *((_DWORD *)v6 + 130) = v12 & 0xFFFFFFF8 | 4;
        *((_DWORD *)v6 + 135) = 0;
        *((_DWORD *)v6 + 136) = 0;
        DC::vUpdateCachedDPIScaleValue(v6);
      }
    }
    *((_DWORD *)v6 + 128) = v9[8];
    *((_DWORD *)v6 + 129) = v9[9];
    *((_DWORD *)v6 + 59) |= 0xFu;
    if ( *((int *)v6 + 17) > 1 )
      v2 = *((_DWORD *)v6 + 19);
    else
      v2 = 0;
    v35 = 0;
    v13 = *(_DWORD *)v6;
    v37(v6, &v35);
    if ( v35 )
      v38(v13, 0);
    if ( !v2 )
      return 1;
    v3 = v39;
  }
  v23 = *(_DWORD *)(v4 + 24);
  v24 = *((_DWORD *)v6 + 127);
  if ( (v23 & 0x4000) != 0 )
  {
    if ( !v24 )
      v24 = **((_DWORD **)v6 + 126);
    LOBYTE(v5) = 5;
    v26 = HmgShareLockCheck(v24, v5);
    if ( !v26 )
    {
LABEL_35:
      v22 = 0;
      goto LABEL_56;
    }
    if ( a2 )
    {
      LOBYTE(v25) = 5;
      v28 = HmgShareLockCheck(a2, v25);
      v29 = v28;
      if ( v28 )
      {
        if ( v26 != v28 )
        {
          v30 = *((_DWORD *)v6 + 6);
          if ( (v30 & 0x40000) == 0 )
          {
            INC_SHARE_REF_CNT(v26);
            v30 = *((_DWORD *)v6 + 6);
          }
          *((_DWORD *)v6 + 6) = v30 | 0x40000;
          *((_DWORD *)v6 + 462) = a2;
        }
        DEC_SHARE_REF_CNT(v29);
        v22 = 1;
      }
      else
      {
        v22 = 0;
      }
    }
    else
    {
      v27 = *((_DWORD *)v6 + 6);
      if ( (v27 & 0x40000) == 0 )
      {
        INC_SHARE_REF_CNT(v26);
        v27 = *((_DWORD *)v6 + 6);
      }
      v22 = 1;
      *((_DWORD *)v6 + 6) = v27 | 0x40000;
      *((_DWORD *)v6 + 462) = 0;
    }
    DEC_SHARE_REF_CNT(v26);
  }
  else
  {
    v22 = 1;
    *((_DWORD *)v6 + 6) = v23 | 0x40000;
    *((_DWORD *)v6 + 462) = a2;
  }
LABEL_56:
  if ( v6 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v40);
  return v22;
}
