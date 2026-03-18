/*
 * XREFs of _xxxDrawAnimatedRects@16 @ 0x19E161
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _NtUserDrawAnimatedRects@16 @ 0x160E73 (_NtUserDrawAnimatedRects@16.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 * Callees:
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 */

int __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, int *a3, int *a4)
{
  struct tagWND *v4; // ebx
  void *v5; // ecx
  _DWORD *v6; // ecx
  int DesktopWindow; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // edi
  HDC v15; // edi
  int *v16; // esi
  int v17; // eax
  struct tagRECT *v19; // [esp+0h] [ebp-50h]
  struct tagRECT *v20; // [esp+4h] [ebp-4Ch]
  HDC DCEx; // [esp+Ch] [ebp-44h]
  int ThreadDesktopWindow; // [esp+Ch] [ebp-44h]
  int v24; // [esp+18h] [ebp-38h]
  int v25; // [esp+1Ch] [ebp-34h] BYREF
  int v26; // [esp+20h] [ebp-30h]
  int v27; // [esp+24h] [ebp-2Ch]
  int v28; // [esp+28h] [ebp-28h]
  int v29; // [esp+2Ch] [ebp-24h] BYREF
  _DWORD v30[3]; // [esp+30h] [ebp-20h]
  struct HDC__ v31; // [esp+3Ch] [ebp-14h] BYREF
  int v32; // [esp+40h] [ebp-10h]
  int v33; // [esp+44h] [ebp-Ch]
  int v34; // [esp+48h] [ebp-8h]

  v4 = a1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = *a3;
  v30[0] = a3[1];
  v30[1] = a3[2];
  v30[2] = a3[3];
  v31.unused = *a4;
  v32 = a4[1];
  v33 = a4[2];
  v34 = a4[3];
  if ( a2 != 3 )
    return 1;
  if ( a1 && a1 != (struct tagWND *)_GetDesktopWindow(a1) )
  {
    if ( !IsToplevelWindowDesktopComposed(v5) )
    {
      v6 = (_DWORD *)*((_DWORD *)v4 + 14);
      if ( v6 && (DesktopWindow = _GetDesktopWindow(v6), (v9 = DesktopWindow != v8 ? v8 : 0) != 0) )
      {
        DCEx = (HDC)_GetDCEx(DesktopWindow != v8 ? v8 : 0, 1, 65665);
        v10 = 0;
        v11 = *(_DWORD **)(v9 + 20);
        v12 = v11[13];
        v13 = v11[17];
        v14 = v11[18];
        v24 = v11[14];
        v4 = a1;
        do
        {
          v30[2 * v10 - 1] += v13 - v12;
          v30[2 * v10++] += v14 - v24;
        }
        while ( v10 < 4 );
        v15 = DCEx;
      }
      else
      {
        ThreadDesktopWindow = GetThreadDesktopWindow(0);
        v16 = (int *)(*(_DWORD *)(ThreadDesktopWindow + 20) + 68);
        v25 = *v16++;
        v26 = *v16++;
        v27 = *v16;
        v28 = v16[1];
        v17 = GreCreateRectRgnIndirect(&v25);
        if ( !v17 )
          v17 = 1;
        v15 = (HDC)_GetDCEx(ThreadDesktopWindow, v17, 1155);
      }
      xxxAnimateCaption(v15, v4, (struct tagWND *)&v29, &v31, v19, v20);
      _ReleaseDC(v15);
    }
    return 1;
  }
  return 0;
}
