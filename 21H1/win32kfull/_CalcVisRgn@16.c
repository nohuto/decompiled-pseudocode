/*
 * XREFs of _CalcVisRgn@16 @ 0x36880
 * Callers:
 *     ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2 (-SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _NtUserGetWindowRgnEx@12 @ 0x4329C (_NtUserGetWindowRgnEx@12.c)
 *     _zzzResetSharedDesktops@12 @ 0x9B7CA (_zzzResetSharedDesktops@12.c)
 *     __VisrgnFromWindow@12 @ 0xA99E4 (__VisrgnFromWindow@12.c)
 *     ?GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z @ 0xF479E (-GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 *     _UserGetClientRgn@12 @ 0x154297 (_UserGetClientRgn@12.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     __IsDescendant@8 @ 0x72F90 (__IsDescendant@8.c)
 */

int __stdcall CalcVisRgn(int a1, _DWORD *a2, int a3, struct tagWND *a4)
{
  _DWORD *v4; // ecx
  int v5; // edx
  char v6; // al
  struct tagWND *v7; // ebx
  _DWORD *v8; // edx
  int v9; // eax
  _DWORD *Prop; // eax
  _DWORD *v12; // esi
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // eax
  HRGN *v19; // [esp+0h] [ebp-18h]
  unsigned int v20; // [esp+4h] [ebp-14h]

  v4 = a2;
  do
  {
    v5 = v4[5];
    v6 = *(_BYTE *)(v5 + 23);
    if ( (v6 & 0x10) == 0 || (v6 & 0x20) != 0 && v4 != a2 )
      goto LABEL_26;
    if ( (*(_WORD *)(v5 + 30) & 0x3FFF) == 0x29D )
      break;
    v4 = (_DWORD *)v4[14];
  }
  while ( v4 );
  v7 = a4;
  if ( a2[3] != _grpdeskRitInput
    && ((unsigned __int16)a4 & 0x4000) == 0
    && (!GetStyleWindow(a2, 2568) || ((unsigned int)a4 & 0x8000000) != 0 && !IsWindowDesktopComposed(a2)) )
  {
    goto LABEL_26;
  }
  if ( ((unsigned __int16)a4 & 0x4000) != 0 )
  {
    v8 = a2;
    while ( 1 )
    {
      v9 = v8[5];
      if ( (*(_BYTE *)(v9 + 19) & 0x20) != 0 )
        break;
      v8 = (_DWORD *)v8[14];
      if ( !v8 )
        goto LABEL_21;
    }
    if ( (*(_WORD *)(v9 + 30) & 0x3FFF) != 0x29D || v8 == a2 )
    {
      Prop = (_DWORD *)RealGetProp(v8[20], (unsigned __int16)atomLayer, 1);
      if ( !Prop || !*Prop )
      {
LABEL_26:
        SetOrCreateRectRgnIndirectPublic(a1, _gZero);
        return 0;
      }
    }
  }
LABEL_21:
  if ( gspwndLockUpdate && ((unsigned __int16)a4 & 0x400) == 0 && _IsDescendant(gspwndLockUpdate, a2) )
    goto LABEL_26;
  if ( UpdatesLockedForDwm() )
  {
    if ( ((unsigned __int16)a4 & 0x4000) == 0 )
      goto LABEL_26;
    goto LABEL_28;
  }
  if ( ((unsigned __int16)a4 & 0x4000) != 0 )
  {
LABEL_28:
    v12 = a2;
    while ( (*(_DWORD *)(v12[5] + 16) & 0x20080000) == 0 )
    {
      v12 = (_DWORD *)v12[14];
      if ( !v12 )
        return CalcVisRgnWorker(v7, v19, v20);
    }
    if ( v12 == a2 )
      goto LABEL_47;
    v13 = v12[3];
    v14 = 0;
    if ( v13 )
    {
      v15 = *(_DWORD *)(v13 + 4);
      if ( v15 )
        v14 = *(_DWORD **)(v15 + 12);
    }
    if ( v12 != v14 )
    {
LABEL_47:
      if ( v12 )
      {
        v16 = (_DWORD *)RealGetProp(v12[20], (unsigned __int16)atomLayer, 1);
        if ( v16 )
        {
          if ( *v16 )
          {
            v17 = v12[5];
            if ( (*(_DWORD *)(v17 + 16) & 0x20000000) != 0 )
            {
              v18 = *(_DWORD *)(v17 + 144);
              if ( (v18 & 0x20) != 0 && (v18 & 4) == 0 )
                v7 = (struct tagWND *)((unsigned int)a4 & 0xFFFFBFFF);
            }
          }
        }
      }
    }
  }
  return CalcVisRgnWorker(v7, v19, v20);
}
