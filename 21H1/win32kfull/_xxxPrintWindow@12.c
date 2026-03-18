/*
 * XREFs of _xxxPrintWindow@12 @ 0x153AF9
 * Callers:
 *     _NtUserPrintWindow@12 @ 0x167AA3 (_NtUserPrintWindow@12.c)
 * Callees:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED (_GreSpDwmSyncCaptureSurfaceBits@28.c)
 */

int __fastcall xxxPrintWindow(int a1, HDC a2, char a3)
{
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int StyleWindow; // eax
  int v9; // esi
  int *v10; // esi
  int *v11; // esi
  int *v12; // esi
  int v13; // edi
  int v14; // ebx
  float *v15; // eax
  int v16; // eax
  int v17; // ecx
  HDC DCEx; // esi
  struct tagWND *v20; // [esp+14h] [ebp-58h]
  unsigned int v21; // [esp+18h] [ebp-54h]
  struct ECLIPOBJ *v22; // [esp+20h] [ebp-4Ch]
  struct ECLIPOBJ *v23; // [esp+24h] [ebp-48h]
  int v24; // [esp+28h] [ebp-44h]
  float v25; // [esp+28h] [ebp-44h]
  int v26; // [esp+2Ch] [ebp-40h]
  int v28; // [esp+34h] [ebp-38h]
  _DWORD *v29; // [esp+38h] [ebp-34h]
  int v30; // [esp+3Ch] [ebp-30h] BYREF
  int v31; // [esp+40h] [ebp-2Ch]
  int v32; // [esp+44h] [ebp-28h]
  int v33; // [esp+48h] [ebp-24h]
  int v34; // [esp+4Ch] [ebp-20h] BYREF
  int v35; // [esp+50h] [ebp-1Ch]
  int v36; // [esp+54h] [ebp-18h]
  int v37; // [esp+58h] [ebp-14h]
  struct ECLIPOBJ *v38; // [esp+5Ch] [ebp-10h] BYREF
  struct ECLIPOBJ *v39; // [esp+60h] [ebp-Ch]
  int v40; // [esp+64h] [ebp-8h]
  int v41; // [esp+68h] [ebp-4h]

  v38 = 0;
  v28 = 0;
  v4 = *(_DWORD **)(a1 + 20);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v5 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v6 = v4[18];
    v23 = (struct ECLIPOBJ *)(v4[17] - v4[13]);
    v7 = v4[19] - v4[17];
    v22 = (struct ECLIPOBJ *)(v6 - v4[14]);
    v5 = a3 & 1;
    v24 = v4[20] - v6;
  }
  else
  {
    v7 = v4[15] - v4[13];
    v23 = 0;
    v22 = 0;
    v24 = v4[16] - v4[14];
  }
  v26 = v7;
  if ( (a3 & 2) != 0
    && IsWindowDesktopComposed(a1)
    && (StyleWindow = GetStyleWindow(a1, 2568), (v29 = (_DWORD *)StyleWindow) != 0) )
  {
    if ( StyleWindow == a1 )
    {
      v14 = v24;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 20);
      if ( v5 )
        v10 = (int *)(v9 + 68);
      else
        v10 = (int *)(v9 + 52);
      v30 = *v10;
      v11 = v10 + 1;
      v31 = *v11++;
      v32 = *v11;
      v33 = v11[1];
      v12 = (int *)(*(_DWORD *)(StyleWindow + 20) + 52);
      v34 = *v12++;
      v35 = *v12++;
      v36 = *v12;
      v37 = v12[1];
      v30 -= v34;
      v32 -= v34;
      v36 -= v34;
      v33 -= v35;
      v31 -= v35;
      v37 -= v35;
      v34 = 0;
      v35 = 0;
      v13 = IntersectRect(&v38, &v34, &v30);
      if ( !v13 )
        return v13;
      v7 = v40 - (_DWORD)v38;
      v23 = v38;
      v14 = v41 - (_DWORD)v39;
      v22 = v39;
    }
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    v25 = 1.0;
    v15 = (float *)v29[30];
    if ( v15 )
      v25 = *v15;
    v13 = GreSpDwmSyncCaptureSurfaceBits(*v29, a2, LODWORD(v25), v23, v22, v7, v14);
    EnterCrit(0, 1);
  }
  else
  {
    if ( (GetRedirectionFlags() & 8) == 0 )
    {
      v16 = SetRedirectedWindow(a1, 8);
      v17 = *(_DWORD *)(a1 + 20);
      if ( v16 < 0 )
        return (*(unsigned __int8 *)(v17 + 18) >> 5) & 1;
      *(_DWORD *)(v17 + 144) |= 4u;
      v28 = 1;
    }
    v13 = 1;
    xxxInternalUpdateWindow(v20, v21);
    DCEx = (HDC)_GetDCEx(a1, 0, 3);
    NtGdiBitBltInternal(a2, 0, 0, v26, v24, DCEx, v23, v22, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v28 && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 144) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1, 8);
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 144) &= ~4u;
    }
  }
  return v13;
}
