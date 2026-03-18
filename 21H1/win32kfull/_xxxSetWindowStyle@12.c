/*
 * XREFs of _xxxSetWindowStyle@12 @ 0x3FA70
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     ?xxxEnumTurnOffCompositing@@YGHPAUtagWND@@J@Z @ 0x1535A5 (-xxxEnumTurnOffCompositing@@YGHPAUtagWND@@J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307 (-xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z.c)
 *     _xxxSetBridgeWindowChild@8 @ 0x16F43B (_xxxSetBridgeWindowChild@8.c)
 * Callees:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _IncVisWindows@4 @ 0x1CB86 (_IncVisWindows@4.c)
 *     _DecVisWindows@4 @ 0x1CC58 (_DecVisWindows@4.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     __IsWindowVisible@4 @ 0xAB3AC (__IsWindowVisible@4.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _VerifyChildMenu@8 @ 0xF4F5A (_VerifyChildMenu@8.c)
 *     _ClrWFNoDwmNotify@8 @ 0x145BAC (_ClrWFNoDwmNotify@8.c)
 *     _xxxTurnOffCompositing@8 @ 0x153D74 (_xxxTurnOffCompositing@8.c)
 *     ?DecComposited@@YGXPAUtagWND@@@Z @ 0x19C6C4 (-DecComposited@@YGXPAUtagWND@@@Z.c)
 *     ?IncComposited@@YGXPAUtagWND@@@Z @ 0x19C6CC (-IncComposited@@YGXPAUtagWND@@@Z.c)
 */

int __fastcall xxxSetWindowStyle(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *v3; // edi
  char v4; // bl
  int v5; // edx
  int v6; // esi
  int v7; // ecx
  int CurrentProcessWin32Process; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // ebx
  char v16; // cl
  char v17; // al
  bool v18; // zf
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // ebx
  struct tagWND *i; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // esi
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // esi
  struct tagWND *j; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v41; // eax
  unsigned int v42; // esi
  int v43; // ecx
  unsigned int v44; // edx
  int v45; // esi
  int v46; // ebx
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // kr00_8
  unsigned int v54; // esi
  int v55; // [esp-4h] [ebp-5Ch]
  int v56; // [esp+Ch] [ebp-4Ch]
  unsigned int v57; // [esp+Ch] [ebp-4Ch]
  unsigned int v58; // [esp+Ch] [ebp-4Ch]
  int v59; // [esp+Ch] [ebp-4Ch]
  int v61; // [esp+14h] [ebp-44h]
  int v62; // [esp+14h] [ebp-44h]
  int v63; // [esp+14h] [ebp-44h]
  int Object; // [esp+18h] [ebp-40h]
  _DWORD *Objecta; // [esp+18h] [ebp-40h]
  PVOID Objectb; // [esp+18h] [ebp-40h]
  int v67; // [esp+1Ch] [ebp-3Ch]
  int v68; // [esp+20h] [ebp-38h]
  int v70; // [esp+28h] [ebp-30h] BYREF
  int v71; // [esp+2Ch] [ebp-2Ch]
  int v72; // [esp+30h] [ebp-28h] BYREF
  __int16 v73; // [esp+34h] [ebp-24h]
  int v74; // [esp+36h] [ebp-22h]
  int v75; // [esp+3Ah] [ebp-1Eh]
  int v76; // [esp+3Eh] [ebp-1Ah]
  int v77; // [esp+42h] [ebp-16h]
  __int16 v78; // [esp+46h] [ebp-12h]
  int v79; // [esp+48h] [ebp-10h]
  int v80; // [esp+4Ch] [ebp-Ch]
  unsigned int v81; // [esp+50h] [ebp-8h]
  int v82; // [esp+54h] [ebp-4h]

  v3 = a1;
  v70 = 0;
  v71 = 0;
  v4 = 0;
  v61 = 0;
  Object = 0;
  v5 = *((_DWORD *)a1 + 5);
  v56 = (*(_DWORD *)(v5 + 20) >> 26) & 4 | (*(_DWORD *)(v5 + 16) >> 22) & 8;
  if ( a2 == -16 )
  {
    v6 = *(_DWORD *)(v5 + 20);
    v70 = v6;
    if ( (*(_DWORD *)(v5 + 16) & 0x800) == 0 )
      goto LABEL_6;
    v6 |= 0x10000000u;
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 16);
    v70 = v7 & 0xA7F77FF;
    v6 = v7 & (((~(unsigned __int8)*(_DWORD *)(v5 + 144) & 0x20) << 14) | 0xA7777FF);
  }
  v70 = v6;
LABEL_6:
  v71 = a3;
  if ( (*(_BYTE *)(v5 + 13) & 2) != 0 )
  {
    xxxSendMessage(a2, &v70);
    if ( (*(_BYTE *)(_HMPheFromObject(v3) + 13) & 1) != 0 )
      return v6;
    v70 = v6;
  }
  v67 = IsTrayWindow(v3);
  if ( a2 == -16 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v10 = v71;
    if ( CurrentProcessWin32Process != *(_DWORD *)(*((_DWORD *)v3 + 2) + 232)
      && *(_WORD *)(_gpsi + 470) == *(_WORD *)(*(_DWORD *)(*((_DWORD *)v3 + 19) + 4) + 2)
      && (v70 & 0x20) != 0
      && (v71 & 0x20) == 0 )
    {
      UserSetLastError(5);
      return 0;
    }
    v11 = *((_DWORD *)v3 + 3);
    v12 = 0;
    v13 = *((_DWORD *)v3 + 14);
    if ( v11 )
    {
      v14 = *(_DWORD *)(v11 + 4);
      if ( v14 )
        v12 = *(_DWORD *)(v14 + 12);
    }
    if ( v13 == v12 )
    {
      v10 = v71 | 0x4000000;
      v71 |= 0x4000000u;
    }
    if ( ((v70 ^ v10) & 0x6000000) != 0 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache((int)v3, 1, 0);
      v13 = *((_DWORD *)v3 + 14);
      v10 = v71;
    }
    v15 = *((_DWORD *)v3 + 5);
    Objecta = (_DWORD *)v15;
    v16 = *(_BYTE *)(v15 + 23);
    v17 = v16;
    if ( (v16 & 0x40) == 0 && (v16 & 0x20) != 0 && (*(_BYTE *)(v15 + 8) & 8) == 0 && (v10 & 0x20000000) == 0 )
    {
      v10 |= 0x20000000u;
      v71 = v10;
      v17 = *(_BYTE *)(v15 + 23);
    }
    v18 = (v17 & 0xC0) == 64;
    v19 = *(_DWORD *)(v15 + 20);
    if ( !v13 )
      goto LABEL_34;
    v20 = *((_DWORD *)v3 + 3);
    v21 = 0;
    if ( v20 )
    {
      v22 = *(_DWORD *)(v20 + 4);
      if ( v22 )
        v21 = *(_DWORD *)(v22 + 12);
    }
    if ( v13 != v21 || (v62 = 1, (v19 & 0x30000000) != 0x10000000) )
LABEL_34:
      v62 = 0;
    if ( v67 )
    {
      for ( i = v3; ; i = (struct tagWND *)*((_DWORD *)i + 14) )
      {
        v24 = *((_DWORD *)i + 5);
        if ( (*(_BYTE *)(v24 + 23) & 0x10) == 0 && (*(_BYTE *)(v24 + 17) & 8) == 0 )
          break;
        if ( (*(_WORD *)(v24 + 30) & 0x3FFF) == 0x29D )
        {
          v25 = 1;
          goto LABEL_43;
        }
      }
    }
    v25 = 0;
LABEL_43:
    Objecta[5] = v10;
    v26 = *((_DWORD *)v3 + 5);
    v27 = *(_DWORD *)(v26 + 16);
    if ( (*(_DWORD *)(v26 + 20) & 0x10000000) != 0 )
      v28 = v27 | 0x800;
    else
      v28 = v27 & 0xFFFFF7FF;
    *(_DWORD *)(v26 + 16) = v28;
    v29 = *((_DWORD *)v3 + 14);
    v30 = *(_DWORD *)(*((_DWORD *)v3 + 5) + 20);
    if ( !v29 )
      goto LABEL_53;
    v31 = *((_DWORD *)v3 + 3);
    v32 = 0;
    if ( v31 )
    {
      v33 = *(_DWORD *)(v31 + 4);
      if ( v33 )
        v32 = *(_DWORD *)(v33 + 12);
    }
    if ( v29 == v32 && (v30 & 0x30000000) == 0x10000000 )
      v34 = 1;
    else
LABEL_53:
      v34 = 0;
    v57 = *(_BYTE *)(*((_DWORD *)v3 + 5) + 19) & 2 | v56 & 0xFFFFFFFC | (v30 >> 28) & 1;
    VerifyChildMenu(v3, v18);
    ((void (__stdcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v57])(v3);
    if ( v62 != v34 )
    {
      if ( v62 )
      {
        DecVisWindows(v3);
      }
      else
      {
        IncVisWindows(v3);
        if ( (*(_BYTE *)(*((_DWORD *)v3 + 5) + 18) & 8) == 0 )
          ComposeWindowIfNeeded((int)v3, 0);
      }
    }
    if ( IsTrayWindow(v3) )
    {
      for ( j = v3; ; j = (struct tagWND *)*((_DWORD *)j + 14) )
      {
        v36 = *((_DWORD *)j + 5);
        if ( (*(_BYTE *)(v36 + 23) & 0x10) == 0 && (*(_BYTE *)(v36 + 17) & 8) == 0 )
        {
          v37 = 0;
          goto LABEL_67;
        }
        if ( (*(_WORD *)(v36 + 30) & 0x3FFF) == 0x29D )
          break;
      }
      v37 = 1;
LABEL_67:
      if ( v25 != v37 )
      {
        v55 = *(_DWORD *)v3;
        v38 = *(_DWORD *)(_gptiCurrent + 248);
        if ( v25 )
          PostIAMShellHookMessageEx(v38, 22, v55);
        else
          PostIAMShellHookMessageEx(v38, 17, v55);
      }
    }
    goto LABEL_109;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u )
    v41 = *(_DWORD *)(ThreadWin32Thread + 352);
  else
    LOBYTE(v41) = 0;
  if ( (v41 & 4) != 0 )
    v42 = (unsigned int)&loc_777FF & v71;
  else
    v42 = v71 & 0xA7F77FF;
  v43 = v70 & 8;
  v71 = v42;
  if ( v43 != (v42 & 8) && ((*(_BYTE *)(*((_DWORD *)v3 + 5) + 13) & 2) != 0 || !HIWORD(v42)) )
  {
    v42 = v43 | v42 & 0xFFFFFFF7;
    v71 = v42;
  }
  v44 = (unsigned int)&loc_80000 & v42;
  if ( (((~(unsigned __int8)*(_DWORD *)(*((_DWORD *)v3 + 5) + 144) & 0x20) << 14) & *(_DWORD *)(*((_DWORD *)v3 + 5) + 16)) != 0 )
  {
    if ( !v44 )
    {
      if ( IsTopLevelOrLayeredChildWindow(v3) && !_IsTopLevelWindow(v3) )
      {
        v4 = 1;
        Object = 1;
      }
      UnsetLayeredWindow(v3, v4);
LABEL_89:
      v42 = v71;
    }
  }
  else if ( v44 )
  {
    if ( xxxSetLayeredWindow(v3, 1, 0) < 0 )
      return 0;
    goto LABEL_89;
  }
  v68 = *((_DWORD *)v3 + 5);
  if ( ((((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(v68 + 16)) != 0) != ((v42 >> 21) & 1)
    || (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(v68 + 16)) != 0 && (v42 & 0x2000000) != 0 )
  {
    UserSetLastError(87);
    return 0;
  }
  v45 = v42 & 0x2000000;
  v46 = *(_DWORD *)(v68 + 16) & 0x2000000;
  if ( !v46 && v45 && GetStyleWindow(*((_DWORD *)v3 + 14), 2818) )
    return 0;
  v58 = (*(_DWORD *)(v68 + 20) >> 28) & 1 | v56 & 0xFFFFFFFC | (v45 != 0 ? 2 : 0);
  if ( v46 )
  {
    if ( !v45 )
    {
      UnsetRedirectedWindow((int)v3, 2);
      ClrWFNoDwmNotify(v3, 2818);
    }
    goto LABEL_102;
  }
  if ( v45 )
  {
    if ( SetRedirectedWindow((int)v3, 2) >= 0 )
    {
      SetOrClrWF(1, (int)v3, 0xB02u, 0);
      v61 = 1;
      goto LABEL_102;
    }
    return 0;
  }
LABEL_102:
  ((void (__stdcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v58])(v3);
  if ( v61 )
    xxxTurnOffCompositing(v3, 1);
  *(_DWORD *)(*((_DWORD *)v3 + 5) + 16) = v71 & 0xFDF7FFFF | *(_DWORD *)(*((_DWORD *)v3 + 5) + 16) & 0xF7888800;
  v47 = v71;
  v48 = v70;
  if ( ((v70 ^ v71) & 0x407000) != 0 )
  {
    xxxSetWindowPos((int)v3, 0, 0, 0, 0, 0, 55);
    v47 = v71;
    v48 = v70;
  }
  if ( ((unsigned int)&loc_80000 & (v48 ^ v47)) != 0 && Object )
    xxxRedrawWindow((int)v3, 0, 0, 1157);
LABEL_109:
  v49 = *((_DWORD *)v3 + 5);
  v50 = *(_DWORD *)(v49 + 16);
  if ( (v50 & 1) != 0
    || ((unsigned int)&loc_20000 & v50) == 0
    && ((v51 = *(_DWORD *)(v49 + 20), (v51 & 0x40000) != 0)
     || (v52 = v51 & 0xC00000, v52 == 0x400000)
     || v52 == 12582912 && (*(_BYTE *)(v49 + 13) & 2) != 0) )
  {
    SetOrClrWF(1, (int)v3, 0x901u, 0);
  }
  else
  {
    ClrWFNoDwmNotify(v3, 2305);
  }
  if ( IsWindowDesktopComposed(v3) )
  {
    DirtyVisRgnTrackers(v3);
    v59 = v71;
    v63 = *(_DWORD *)v3;
    Objectb = (PVOID)ReferenceDwmApiPort();
    do
      v53 = g_cDWMWindowUniqueness;
    while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v53 );
    v3 = a1;
    v54 = a2;
    if ( Objectb )
    {
      v74 = 0;
      v78 = 0;
      v73 = 0x8000;
      v80 = v63;
      v82 = v59;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v72 = 2621456;
      v79 = 1073741846;
      v81 = a2;
      LpcRequestPort(Objectb, &v72);
      ObfDereferenceObject(Objectb);
    }
  }
  else
  {
    v54 = a2;
  }
  if ( v67 != IsTrayWindow(v3) )
  {
    if ( v67 )
    {
      PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 18, *(_DWORD *)v3);
    }
    else if ( _IsWindowVisible(v3) )
    {
      PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 17, *(_DWORD *)v3);
    }
  }
  if ( (*(_BYTE *)(*((_DWORD *)v3 + 5) + 13) & 2) != 0 )
    xxxSendMessage(v54, &v70);
  return v70;
}
