/*
 * XREFs of __GetMouseMovePointsEx@16 @ 0x147FA4
 * Callers:
 *     _NtUserGetMouseMovePointsEx@20 @ 0x163A0C (_NtUserGetMouseMovePointsEx@20.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall _GetMouseMovePointsEx(__int16 *a1, int a2, unsigned int a3, int a4)
{
  int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int *v7; // esi
  int v8; // edx
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  unsigned int v15; // eax
  unsigned int i; // esi
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int *ScreenRect; // eax
  INT v21; // eax
  INT v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27[4]; // [esp+20h] [ebp-94h] BYREF
  int v28; // [esp+34h] [ebp-80h]
  int v29; // [esp+38h] [ebp-7Ch]
  int v30; // [esp+3Ch] [ebp-78h]
  int v31; // [esp+40h] [ebp-74h]
  int v32; // [esp+44h] [ebp-70h]
  int v33; // [esp+48h] [ebp-6Ch]
  int v34; // [esp+4Ch] [ebp-68h]
  int v35; // [esp+50h] [ebp-64h]
  int v36; // [esp+54h] [ebp-60h] BYREF
  int v37; // [esp+58h] [ebp-5Ch]
  int v38; // [esp+5Ch] [ebp-58h] BYREF
  int v39; // [esp+60h] [ebp-54h]
  INT v40; // [esp+64h] [ebp-50h] BYREF
  INT v41; // [esp+68h] [ebp-4Ch]
  int v42; // [esp+6Ch] [ebp-48h]
  int v43; // [esp+70h] [ebp-44h]
  int v44; // [esp+74h] [ebp-40h]
  int v45; // [esp+78h] [ebp-3Ch] BYREF
  int v46; // [esp+7Ch] [ebp-38h]
  unsigned int v47; // [esp+80h] [ebp-34h]
  INT c; // [esp+84h] [ebp-30h]
  unsigned int v49; // [esp+88h] [ebp-2Ch]
  unsigned int v50; // [esp+8Ch] [ebp-28h]
  unsigned int v51; // [esp+90h] [ebp-24h]
  unsigned int v52; // [esp+94h] [ebp-20h]
  int v53; // [esp+98h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]
  unsigned __int16 v55; // [esp+BCh] [ebp+8h]
  int v56; // [esp+BCh] [ebp+8h]

  v43 = a2;
  c = (INT)a1;
  v50 = 0;
  v53 = 0;
  v38 = 0;
  v39 = 0;
  v36 = *a1;
  v37 = a1[2];
  v45 = 0;
  v46 = 0;
  v40 = 0;
  v41 = 0;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  LogicalToPhysicalDPIPoint(&v38, &v36, CurrentThreadDpiAwarenessContext, 0);
  if ( _gptInd )
    v5 = (_gptInd - 1) & 0x3F;
  else
    v5 = 63;
  v51 = v5;
  v6 = v5;
  v7 = (int *)(*_gpDispInfo + 12);
  v32 = *v7++;
  v33 = *v7++;
  v34 = *v7;
  v35 = v7[1];
  while ( 1 )
  {
    v44 = 0;
    v8 = _gaptMouse[0];
    v42 = _gaptMouse[0];
    v47 = HIWORD(_gaptMouse[4 * v6]);
    if ( !(_WORD)v47 || (v52 = HIWORD(_gaptMouse[4 * v6 + 1]), !(_WORD)v52) )
    {
LABEL_25:
      v13 = v53;
      goto LABEL_26;
    }
    v49 = (unsigned __int16)v47 + 1;
    v47 = (unsigned __int16)v52 + 1;
    v52 = SLOWORD(_gaptMouse[4 * v6]);
    v5 = v51;
    if ( v49 != v34 - v32 )
    {
      v52 = v52 * (v34 - v32) / v49;
      v8 = v42;
    }
    v9 = *(__int16 *)(v8 + 16 * v6 + 4);
    v49 = v9;
    if ( v47 != v35 - v33 )
    {
      v9 = v9 * (v35 - v33) / v47;
      v49 = v9;
    }
    if ( v52 == v38 && v9 == v39
      || ((W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
       || (v40 = v52,
           v41 = v49,
           v10 = W32GetCurrentThreadDpiAwarenessContext(),
           PhysicalToLogicalDPIPoint(&v45, &v40, v10, 0),
           v45 != v36)
       || v46 != v37
        ? (v11 = v44)
        : (v11 = 1),
          v5 = v51,
          v11) )
    {
      v12 = *(_DWORD *)(c + 8);
      if ( !v12 || v12 == _gaptMouse[4 * v6 + 2] )
        break;
    }
    if ( v6 )
      v6 = (v6 - 1) & 0x3F;
    else
      v6 = 63;
    if ( v6 == v5 )
      goto LABEL_25;
  }
  v13 = 1;
LABEL_26:
  if ( v13 )
  {
    v15 = v6 - v5;
    v53 = v6 - v5;
    if ( v6 <= v5 )
    {
      v15 += 64;
      v53 = v15;
    }
    if ( v15 >= a3 )
    {
      v15 = a3;
      v53 = a3;
    }
    ms_exc.registration.TryLevel = 0;
    for ( i = 0; ; ++i )
    {
      v50 = i;
      if ( i >= v15 )
        break;
      v17 = 16 * v6;
      v42 = 16 * v6;
      v18 = HIWORD(_gaptMouse[4 * v6]);
      v55 = HIWORD(_gaptMouse[4 * v6 + 1]);
      c = v55 + 1;
      i = v50;
      if ( !(_WORD)v18 || !v55 )
        break;
      v40 = EngMulDiv(SLOWORD(_gaptMouse[4 * v6]), v34 - v32, v18 + 1);
      v41 = EngMulDiv(SLOWORD(_gaptMouse[4 * v6 + 1]), v35 - v33, c);
      v19 = W32GetCurrentThreadDpiAwarenessContext();
      PhysicalToLogicalDPIPoint(&v45, &v40, v19, 0);
      c = 16 * i;
      v56 = 16 * i;
      if ( a4 == 2 )
      {
        ScreenRect = GetScreenRect(v27);
        v28 = *ScreenRect;
        v29 = ScreenRect[1];
        v30 = ScreenRect[2];
        v31 = ScreenRect[3];
        v21 = EngMulDiv((unsigned __int16)v45, 0x10000, v30 - v28 - 1);
        *(_DWORD *)(c + v43) = v21;
        v22 = EngMulDiv((unsigned __int16)v46, 0x10000, v31 - v29 - 1);
        v23 = v43;
        *(_DWORD *)(v56 + v43 + 4) = v22;
        i = v50;
        v17 = v42;
      }
      else
      {
        v23 = v43;
        *(_DWORD *)(16 * i + v43) = v45;
        *(_DWORD *)(v56 + v23 + 4) = v46;
        v24 = *(_DWORD *)(v23 + 16 * i);
        if ( v24 < 0 )
          *(_DWORD *)(v23 + 16 * i) = v24 + 0x10000;
        v25 = *(_DWORD *)(v23 + 16 * i + 4);
        if ( v25 < 0 )
          *(_DWORD *)(v23 + 16 * i + 4) = v25 + 0x10000;
      }
      v26 = 2 * i;
      *(_DWORD *)(v23 + 8 * v26 + 8) = *(_DWORD *)(v17 + _gaptMouse[0] + 8);
      *(_DWORD *)(v23 + 8 * v26 + 12) = *(_DWORD *)(v17 + _gaptMouse[0] + 12);
      if ( v6 )
        v6 = ((_BYTE)v6 - 1) & 0x3F;
      else
        v6 = 63;
      v15 = v53;
    }
    return i;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x493);
    return -1;
  }
}
