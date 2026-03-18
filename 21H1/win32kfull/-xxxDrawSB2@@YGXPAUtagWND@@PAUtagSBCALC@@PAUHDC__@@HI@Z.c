/*
 * XREFs of ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60
 * Callers:
 *     _xxxDrawScrollBar@12 @ 0xC1AFC (_xxxDrawScrollBar@12.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     _GreGetTextColor@4 @ 0xC1E50 (_GreGetTextColor@4.c)
 *     _GreGetBkColor@4 @ 0xC1E8E (_GreGetBkColor@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge xxxDrawSB2(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        HDC a3,
        struct tagSBCALC *a4,
        HDC a5,
        int a6,
        unsigned int a7)
{
  __int64 v8; // rax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  INT DpiForSystem; // eax
  int DpiDependentMetric; // edi
  int *v14; // edx
  _DWORD *v15; // ecx
  int *v16; // esi
  INT v17; // eax
  HDC v18; // edi
  int v19; // esi
  unsigned int v20; // eax
  INT v21; // eax
  struct tagWND *v22; // [esp+0h] [ebp-54h]
  HDC v23; // [esp+4h] [ebp-50h]
  int TextColor; // [esp+Ch] [ebp-48h]
  int BkColor; // [esp+10h] [ebp-44h]
  HBRUSH ColorObjects; // [esp+14h] [ebp-40h]
  int v27; // [esp+18h] [ebp-3Ch] BYREF
  int v28; // [esp+1Ch] [ebp-38h]
  int v29; // [esp+20h] [ebp-34h]
  int v30; // [esp+24h] [ebp-30h]
  int v31; // [esp+28h] [ebp-2Ch]
  int v32; // [esp+2Ch] [ebp-28h]
  _DWORD *v33; // [esp+30h] [ebp-24h]
  int v34; // [esp+34h] [ebp-20h]
  int *v35; // [esp+38h] [ebp-1Ch]
  int v36; // [esp+3Ch] [ebp-18h] BYREF
  int v37; // [esp+40h] [ebp-14h] BYREF
  int v38; // [esp+44h] [ebp-10h]
  int v39; // [esp+48h] [ebp-Ch]

  v31 = a2;
  v36 = 0;
  v33 = a1;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v8 = a1[5] - a1[4];
  v9 = v8 - HIDWORD(v8);
  v10 = a1[7] - a1[6];
  v11 = v9 >> 1;
  v34 = v11;
  v32 = v10;
  if ( v11 > 0 && v10 > 0 )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(11 - (a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(v22, v23);
    if ( v11 > DpiDependentMetric )
      v34 = DpiDependentMetric;
    v14 = &v36;
    v35 = &v37;
    if ( !a4 )
    {
      v14 = &v37;
      v35 = &v36;
    }
    v15 = v33;
    v16 = v35;
    *v14 = v33[6];
    *v16 = v15[4];
    v14[2] = v15[7];
    v16[2] = v15[5];
    v35 = (int *)GreSelectBrush(a3, *(_DWORD *)(_gpsi + 4364));
    if ( a4 )
    {
      if ( v34 == DpiDependentMetric )
      {
        v17 = GetDpiForSystem();
        if ( v32 == GetDpiDependentMetric(0, v17) )
        {
          v18 = a5;
          BitBltSysBmp(a3, v36, v37, ((unsigned __int8)a5 & 1) != 0 ? 49 : 46, 1);
          BitBltSysBmp(a3, v36, v39 - v34, ((unsigned __int8)a5 & 2) != 0 ? 53 : 50, 1);
LABEL_11:
          v19 = GreSelectBrush(a3, v35);
          DrawThumb2(v31, v33, a3, ColorObjects, a4, v18);
          GreSelectBrush(a3, v19);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v27 = v36;
      v28 = v37;
      v29 = v38;
      v18 = a5;
      v30 = v34 + v37;
      DrawFrameControl(a3, &v27, (HDC)3, ((unsigned __int8)a5 & 1) << 8);
      v30 = v39;
      v28 = v39 - v34;
      v20 = (((unsigned __int8)a5 & 2) << 7) | 1;
    }
    else
    {
      if ( v34 == DpiDependentMetric )
      {
        v21 = GetDpiForSystem();
        if ( v32 == GetDpiDependentMetric(1, v21) )
        {
          v18 = a5;
          BitBltSysBmp(a3, v36, v37, ((unsigned __int8)a5 & 1) != 0 ? 61 : 58, 1);
          BitBltSysBmp(a3, v38 - v34, v37, ((unsigned __int8)a5 & 2) != 0 ? 57 : 54, 1);
          goto LABEL_11;
        }
      }
      v27 = v36;
      v28 = v37;
      v30 = v39;
      v18 = a5;
      v29 = v34 + v36;
      DrawFrameControl(a3, &v27, (HDC)3, (((unsigned __int8)a5 & 1) << 8) | 2);
      v29 = v38;
      v27 = v38 - v34;
      v20 = (((unsigned __int8)a5 & 2) << 7) | 3;
    }
    DrawFrameControl(a3, &v27, (HDC)3, v20);
    goto LABEL_11;
  }
}
