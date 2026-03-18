/*
 * XREFs of CalcVisRgn @ 0x1C0072BA0
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0020F48 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C002FBA4 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     zzzResetSharedDesktops @ 0x1C00521B0 (zzzResetSharedDesktops.c)
 *     _VisrgnFromWindow @ 0x1C0113708 (_VisrgnFromWindow.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1C01E8FB8 (UserGetClientRgn.c)
 *     NtUserGetWindowRgnEx @ 0x1C01FD610 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     _IsDescendant @ 0x1C0020EA8 (_IsDescendant.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0072DC0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v10; // rdx
  char v11; // al
  _QWORD *v12; // r8
  _QWORD *Prop; // rax
  _QWORD *v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r9
  int v22; // eax

  v6 = *(_QWORD *)(a2 + 24);
  v7 = a2;
  v8 = a4;
  do
  {
    v10 = *(_QWORD *)(v7 + 40);
    v11 = *(_BYTE *)(v10 + 31);
    if ( (v11 & 0x10) == 0 || (v11 & 0x20) != 0 && v7 != a2 )
      goto LABEL_26;
    if ( (*(_WORD *)(v10 + 42) & 0x3FFF) == 0x29D )
      break;
    v7 = *(_QWORD *)(v7 + 104);
  }
  while ( v7 );
  if ( v6 != grpdeskRitInput
    && (a4 & 0x4000) == 0
    && (!GetStyleWindow(a2, 2568) || (v8 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(a2)) )
  {
    goto LABEL_26;
  }
  if ( (v8 & 0x4000) != 0 )
  {
    v12 = (_QWORD *)a2;
    do
    {
      if ( (*(_BYTE *)(v12[5] + 27LL) & 0x20) != 0 )
        break;
      v12 = (_QWORD *)v12[13];
    }
    while ( v12 );
    if ( v12 && ((*(_WORD *)(v12[5] + 42LL) & 0x3FFF) != 0x29D || v12 == (_QWORD *)a2) )
    {
      Prop = (_QWORD *)RealGetProp(v12[18], (unsigned __int16)atomLayer, 1LL);
      if ( !Prop || !*Prop )
        goto LABEL_26;
    }
  }
  if ( gspwndLockUpdate && (v8 & 0x400) == 0 && (unsigned int)IsDescendant((__int64)gspwndLockUpdate, a2) )
  {
LABEL_26:
    SetOrCreateRectRgnIndirectPublic(a1, gZero);
    return 0LL;
  }
  if ( (unsigned int)UpdatesLockedForDwm() )
  {
    if ( (v8 & 0x4000) == 0 )
      goto LABEL_26;
    goto LABEL_28;
  }
  if ( (v8 & 0x4000) != 0 )
  {
LABEL_28:
    v15 = (_QWORD *)a2;
    do
    {
      v16 = *(_DWORD *)(v15[5] + 24LL);
      if ( (v16 & 0x80000) != 0 )
        break;
      if ( (v16 & 0x20000000) != 0 )
        break;
      v15 = (_QWORD *)v15[13];
    }
    while ( v15 );
    if ( v15 )
    {
      if ( v15 != (_QWORD *)a2 )
      {
        v17 = v15[3];
        v18 = 0LL;
        if ( v17 )
        {
          v19 = *(_QWORD *)(v17 + 8);
          if ( v19 )
            v18 = *(_QWORD **)(v19 + 24);
        }
        if ( v15 == v18 )
          v15 = 0LL;
      }
      if ( v15 )
      {
        v20 = (_QWORD *)RealGetProp(v15[18], (unsigned __int16)atomLayer, 1LL);
        if ( v20 )
        {
          if ( *v20 )
          {
            v21 = v15[5];
            if ( (*(_DWORD *)(v21 + 24) & 0x20000000) != 0 )
            {
              v22 = *(_DWORD *)(v21 + 232);
              if ( (v22 & 0x20) != 0 && (v22 & 4) == 0 )
                v8 &= ~0x4000u;
            }
          }
        }
      }
    }
  }
  return CalcVisRgnWorker(a3, a1, v8);
}
