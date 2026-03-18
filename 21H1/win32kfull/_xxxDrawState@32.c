/*
 * XREFs of _xxxDrawState@32 @ 0x1AD06D
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreSetViewportOrg@16 @ 0xB675E (_GreSetViewportOrg@16.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _GreGetTextColor@4 @ 0xC1E50 (_GreGetTextColor@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     _BltColor@40 @ 0x1ACFB1 (_BltColor@40.c)
 *     _GreGetHFONT@4 @ 0x1FF06B (_GreGetHFONT@4.c)
 *     _GreGetTextCharacterExtra@4 @ 0x22267D (_GreGetTextCharacterExtra@4.c)
 *     _GreSetTextCharacterExtra@8 @ 0x2226B7 (_GreSetTextCharacterExtra@8.c)
 */

int __fastcall xxxDrawState(HDC a1, int a2, int *a3, LONG a4, int a5, int a6, int a7, unsigned int a8)
{
  unsigned int v8; // ebx
  int result; // eax
  int v10; // edi
  int Layout; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int Bitmap; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned __int16 v20; // ax
  int ProcessDpiServerInfo; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // ecx
  int v25; // esi
  int v26; // esi
  struct HLFONT__ *v27; // esi
  HDC v28; // ecx
  int v29; // ecx
  int v30; // eax
  HDC v31; // ebx
  LONG v32; // ecx
  int v33; // ecx
  int v34; // esi
  int v35; // ecx
  HDC v37; // [esp+10h] [ebp-B8h]
  int v39; // [esp+18h] [ebp-B0h]
  int v40; // [esp+18h] [ebp-B0h]
  int v41; // [esp+1Ch] [ebp-ACh]
  int v42; // [esp+1Ch] [ebp-ACh]
  int v43; // [esp+1Ch] [ebp-ACh]
  int v44; // [esp+20h] [ebp-A8h] BYREF
  int v45; // [esp+24h] [ebp-A4h]
  BOOL v46; // [esp+28h] [ebp-A0h]
  int *v47; // [esp+2Ch] [ebp-9Ch]
  int TextAlign; // [esp+30h] [ebp-98h]
  int v49; // [esp+34h] [ebp-94h]
  int v50; // [esp+38h] [ebp-90h]
  int v51; // [esp+3Ch] [ebp-8Ch] BYREF
  int v52; // [esp+40h] [ebp-88h]
  _DWORD v53[5]; // [esp+44h] [ebp-84h] BYREF
  _BYTE v54[16]; // [esp+58h] [ebp-70h] BYREF
  _DWORD v55[23]; // [esp+68h] [ebp-60h] BYREF

  v8 = a8;
  v47 = a3;
  memset(v54, 0, sizeof(v54));
  v50 = 0;
  v44 = 0;
  v45 = 0;
  v51 = 0;
  v52 = 0;
  v46 = 0;
  v39 = 0;
  TextAlign = 0;
  result = 1;
  if ( (a8 & 0x20) != 0 )
  {
    if ( *(_WORD *)(_gpsi + 6240) == 1 || *(_DWORD *)(_gpsi + 1788) )
      v8 = a8 & 0xFFFFFFCF | 0x10;
    result = 1;
  }
  if ( (v8 & 0x170) != 0 )
    v8 |= 0x80u;
  if ( a6 )
  {
    v10 = a7;
    if ( a7 )
    {
      v49 = v8 & 0x80;
      if ( (v8 & 0x80) != 0 )
      {
        v37 = *(HDC *)(_gpDispInfo + 36);
        GreSetLayout(v37, -1, 0);
        Layout = GreGetLayout(a1);
        if ( Layout != -1 )
          GreSetLayout(v37, a6, Layout);
        v12 = _gpDispInfo;
        v13 = a6 + 1;
        v14 = *(_DWORD *)(_gpDispInfo + 44);
        if ( v14 < a6 + 1 || *(_DWORD *)(_gpDispInfo + 48) < a7 )
        {
          v15 = *(_DWORD *)(_gpDispInfo + 48);
          if ( v15 <= a7 )
            v15 = a7;
          if ( v14 <= v13 )
            v14 = a6 + 1;
          Bitmap = GreCreateBitmap(v14, v15, 1, 1, 0);
          v41 = Bitmap;
          if ( Bitmap )
          {
            v17 = GreSelectBitmap(*(_DWORD *)(_gpDispInfo + 36), Bitmap);
            GreDeleteObject(v17);
            GreSetBitmapOwner(v41, 0);
            v12 = _gpDispInfo;
            v18 = *(_DWORD *)(_gpDispInfo + 44);
            if ( v18 <= v13 )
              v18 = a6 + 1;
            *(_DWORD *)(_gpDispInfo + 44) = v18;
            v19 = *(_DWORD *)(_gpDispInfo + 48);
            if ( v19 <= a7 )
              v19 = a7;
            *(_DWORD *)(_gpDispInfo + 48) = v19;
          }
          else
          {
            v12 = _gpDispInfo;
            v10 = *(_DWORD *)(_gpDispInfo + 48);
            a6 = *(_DWORD *)(_gpDispInfo + 44) - 1;
          }
        }
        NtGdiPatBlt(
          *(HDC *)(*(_DWORD *)v12 + 36),
          0,
          0,
          *(_DWORD *)(*(_DWORD *)v12 + 44),
          *(_DWORD *)(*(_DWORD *)v12 + 48),
          (struct EXFORMOBJ *)0xFF0062);
        GreGetTextCharacterExtra(a1);
        GreSetTextCharacterExtra(*(HDC *)(_gpDispInfo + 36));
        TextAlign = GreGetTextAlign(v37);
        v20 = GreGetTextAlign(a1);
        GreSetTextAlign(v37, TextAlign ^ ((unsigned __int16)TextAlign ^ v20) & 0x106);
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          ProcessDpiServerInfo = GetProcessDpiServerInfo();
        else
          ProcessDpiServerInfo = Get96DpiServerInfo();
        v42 = *(_DWORD *)(ProcessDpiServerInfo + 20);
        if ( GreGetHFONT(a1) != v42 )
        {
          v22 = GreSelectFont(a1, v42);
          GreSelectFont(a1, v22);
          v50 = GreSelectFont(*(HDC *)(_gpDispInfo + 36), v22);
          v23 = *(_DWORD *)(_gpDispInfo + 36);
          v52 = v50;
          v51 = v23;
          v39 = GrePushThreadGuardedObject(v54, &v51, SelectFont);
        }
      }
      else
      {
        v37 = a1;
        GreGetDCPoint(a1, 4, &v44);
        GreSetViewportOrg(a1, v44 + a4, a5 + v45, v24);
      }
      v43 = xxxRealDrawMenuItem(v37, v47, a6, v10, 0, v8);
      if ( v39 )
        GrePopThreadGuardedObject(v54);
      v40 = 1;
      if ( !v49 )
      {
        v25 = *(_DWORD *)(_gpsi + 4236);
        if ( GreGetTextColor(v37) != v25 )
          v40 = 0;
      }
      v26 = v47[1];
      if ( MNGetpItemIndex(*v47, v26) != -1 )
      {
        v27 = *(struct HLFONT__ **)(*(_DWORD *)v26 + 64);
        if ( v27 )
        {
          memset(v55, 0, 0x54u);
          v46 = GreExtGetObjectW(v27, 84, v55) == 84 && HIWORD(v55[9]) == 32 && !v55[10];
        }
      }
      v28 = *(HDC *)(_gpDispInfo + 36);
      if ( v37 == v28 )
      {
        GreSetBkColor(v28, 0xFFFFFF);
        GreSetTextColor(*(HDC *)(_gpDispInfo + 36), 0);
        GreSelectBrush(*(_DWORD *)(_gpDispInfo + 36), _ghbrBlack);
        GreSetBkMode(*(HDC *)(_gpDispInfo + 36), 2);
      }
      if ( v49 )
      {
        if ( v50 )
          GreSelectFont(v37, v50);
        GreSetTextAlign(v37, TextAlign);
        if ( (v8 & 0x10) != 0 )
        {
          v53[0] = 0;
          v53[1] = 0;
          v53[2] = a6;
          v53[3] = v10;
          v53[4] = *(_DWORD *)(_gpsi + 4416);
          GrePolyPatBlt(*(HDC *)(_gpDispInfo + 36), 0xFA0089u, (struct XDCOBJ *)v53, 1u, v29);
        }
        if ( (v8 & 0x100) != 0 )
        {
          v30 = *(_DWORD *)(_gpsi + 4356);
        }
        else
        {
          if ( (v8 & 0x20) != 0 )
          {
            v31 = a1;
            BltColor(
              a1,
              *(_DWORD *)(_gpsi + 4372),
              *(HDC *)(_gpDispInfo + 36),
              a4 + 1,
              (struct XDCOBJ *)(a5 + 1),
              a6,
              v10,
              0,
              0,
              1);
            v30 = *(_DWORD *)(_gpsi + 4356);
LABEL_60:
            v32 = a4;
            a2 = v30;
            goto LABEL_61;
          }
          if ( (v8 & 0x40) != 0 )
          {
            v31 = a1;
            BltColor(a1, a2, *(HDC *)(_gpDispInfo + 36), a4, (struct XDCOBJ *)a5, a6, v10, 0, 0, 1);
            v32 = a4 + 1;
LABEL_61:
            BltColor(v31, a2, *(HDC *)(_gpDispInfo + 36), v32, (struct XDCOBJ *)a5, a6, v10, 0, 0, 1);
            GreSetLayout(v37, -1, 0);
            if ( !v46 )
              return v43;
            GreGetDCPoint(v31, 4, &v44);
            GreSetViewportOrg(v31, v44 + a4, a5 + v45, v33);
            v34 = xxxRealDrawMenuItem(v31, v47, a6, v10, 1, v40) & v43;
            GreSetViewportOrg(v31, v44, v45, v35);
            return v34;
          }
          v30 = a2;
        }
        v31 = a1;
        goto LABEL_60;
      }
      if ( v46 )
        xxxRealDrawMenuItem(v37, v47, a6, v10, 1, v40);
      GreSetViewportOrg(v37, v44, v45, (int)v28);
      return 1;
    }
  }
  return result;
}
