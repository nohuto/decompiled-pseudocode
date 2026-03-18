/*
 * XREFs of __GetGUIThreadInfo@8 @ 0x81494
 * Callers:
 *     _NtUserGetGUIThreadInfo@8 @ 0x813EA (_NtUserGetGUIThreadInfo@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall _GetGUIThreadInfo(int a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *v4; // esi
  PKTHREAD v5; // eax
  int v6; // eax
  int v7; // edx
  int **v8; // eax
  int v9; // ecx
  int *v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  int v18; // eax
  int v19; // eax
  PKTHREAD CurrentThread; // eax
  _DWORD *v21; // esi
  _DWORD *v22; // edi
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  _DWORD *v30; // eax
  int v31; // ecx

  v3 = a1;
  if ( *a2 != 48 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  if ( a1 )
  {
    v4 = *(_DWORD **)(a1 + 236);
  }
  else
  {
    v4 = (_DWORD *)_gpqForeground;
    if ( !_gpqForeground )
      return 0;
    v18 = *(_DWORD *)(_gpqForeground + 64);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 8);
      if ( *(_DWORD *)(v19 + 236) == _gpqForeground )
      {
        v3 = v19;
        CurrentThread = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248) != *(_DWORD *)(v3 + 248) )
        {
LABEL_30:
          UserSetLastError((struct _NT_TIB *)5);
          return 0;
        }
      }
    }
  }
  if ( v4[54] )
  {
    v23 = KeGetCurrentThread();
    if ( *(_DWORD *)(*(_DWORD *)(v4[54] + 8) + 248) != *(_DWORD *)(W32GetThreadWin32Thread(v23) + 248) )
      goto LABEL_30;
  }
  if ( v3 )
  {
    v5 = KeGetCurrentThread();
    if ( *(_DWORD *)(v3 + 248) != *(_DWORD *)(W32GetThreadWin32Thread(v5) + 248) )
      goto LABEL_30;
  }
  a2[1] = 0;
  a2[6] = 0;
  a2[5] = 0;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 368);
    v7 = 0;
    if ( v6 )
    {
      v7 = 0;
      if ( (*(_BYTE *)(v6 + 184) & 8) == 0 )
      {
        if ( *(_DWORD *)(v6 + 8) )
        {
          v7 = 2;
          a2[1] = 2;
          a2[6] = **(_DWORD **)(*(_DWORD *)(v3 + 368) + 8);
        }
      }
    }
    v8 = *(int ***)(v3 + 328);
    v9 = v7;
    if ( !v8 )
      goto LABEL_10;
    v9 = v7;
    if ( !*v8 )
      goto LABEL_10;
    v9 = v7 | 4;
    a2[1] = v7 | 4;
    v29 = **v8;
    if ( (v29 & 2) != 0 )
    {
      if ( (v29 & 4) == 0 )
        goto LABEL_50;
      v9 = v7 | 0xC;
    }
    else
    {
      v9 = v7 | 0x14;
    }
    a2[1] = v9;
LABEL_50:
    v30 = *(_DWORD **)(**(_DWORD **)(v3 + 328) + 4);
    if ( v30 )
      a2[5] = *v30;
LABEL_10:
    if ( (*(_BYTE *)(v3 + 264) & 2) != 0 )
      a2[1] = v9 | 0x20;
  }
  v10 = (int *)v4[16];
  if ( v10 )
    v11 = *v10;
  else
    v11 = 0;
  a2[2] = v11;
  v12 = (int *)v4[15];
  if ( v12 )
    v13 = *v12;
  else
    v13 = 0;
  a2[3] = v13;
  v14 = (_DWORD *)v4[14];
  if ( v14 )
    v14 = (_DWORD *)*v14;
  a2[7] = 0;
  a2[4] = v14;
  v15 = (_DWORD *)v4[54];
  if ( v15 )
  {
    a2[7] = *v15;
    v24 = KeGetCurrentThread();
    v25 = v4[54];
    if ( *(_DWORD *)(v25 + 8) != W32GetThreadWin32Thread(v24)
      && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v25 + 76) + 4) + 8) & 0x20) != 0 )
    {
      v31 = v4[65];
      a2[8] = v31;
      a2[10] = v31 + v4[67];
      v27 = v4[66];
      a2[9] = v27;
      v28 = v4[68];
    }
    else
    {
      v26 = v4[58];
      a2[8] = v26;
      a2[10] = v26 + v4[61];
      v27 = v4[59];
      a2[9] = v27;
      v28 = v4[60];
    }
    a2[11] = v27 + v28;
    if ( !v4[56] )
      a2[1] |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(*(_DWORD *)(v3 + 232) + 8) & 0x4000000) != 0 )
  {
    a2[7] = *(_DWORD *)(*(_DWORD *)(v3 + 248) + 72);
    v21 = (_DWORD *)(*(_DWORD *)(v3 + 248) + 76);
    v22 = a2 + 8;
    *v22 = *v21++;
    *++v22 = *v21++;
    *++v22 = *v21;
    v22[1] = v21[1];
  }
  else
  {
    v16 = a2 + 8;
    *v16++ = 0;
    *v16++ = 0;
    *v16 = 0;
    v16[1] = 0;
  }
  return 1;
}
