/*
 * XREFs of LinkWindow @ 0x1C006EAD0
 * Callers:
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     ImeSetTopmost @ 0x1C0033178 (ImeSetTopmost.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C000E760 (DwmAsyncChildLink.c)
 *     TrackLayeredZorder @ 0x1C001EFD4 (TrackLayeredZorder.c)
 *     GetLastTopMostWindow @ 0x1C003CA64 (GetLastTopMostWindow.c)
 *     GetBandOrdinal @ 0x1C006F01C (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C010242C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C01045D4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     HWInsertAfter @ 0x1C0106EA8 (HWInsertAfter.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C02239BC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND *a2, __int64 *a3)
{
  struct tagWND **v3; // rbx
  struct tagWND *LastTopMostWindow; // rsi
  unsigned int BandOrdinal; // edi
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  struct tagWND *v12; // r8
  _QWORD *v13; // r8
  struct tagWND *v14; // rdx
  __int128 *v15; // rcx
  int v16; // ecx
  struct tagWND *i; // rax
  __int64 v18; // rcx
  struct tagWND *v19; // rax
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rbx
  __int64 *j; // rsi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  struct tagWND *v32; // r8
  __int64 v33; // rdx
  __int128 *v34; // rax
  __int64 DesktopWindow; // rax
  __int64 v36; // rdx
  struct tagWND *v37; // r8
  unsigned int v38; // edx
  int v39; // ecx
  _DWORD *v40; // rax
  int v41; // edi
  __int64 v42; // rbx
  __int64 v43; // rcx
  void *v44; // rax
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v46; // [rsp+34h] [rbp-CCh]
  __int64 v47; // [rsp+36h] [rbp-CAh]
  __int64 v48; // [rsp+3Eh] [rbp-C2h]
  __int64 v49; // [rsp+46h] [rbp-BAh]
  __int64 v50; // [rsp+4Eh] [rbp-B2h]
  __int16 v51; // [rsp+56h] [rbp-AAh]
  int v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+5Ch] [rbp-A4h]
  __int64 v54; // [rsp+64h] [rbp-9Ch]
  __int64 v55; // [rsp+6Ch] [rbp-94h]
  int v56; // [rsp+74h] [rbp-8Ch]
  _QWORD v57[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v58[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v59[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v61; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v63; // [rsp+E0h] [rbp-20h] BYREF
  char v64[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v65[16]; // [rsp+100h] [rbp+0h] BYREF
  char v66[16]; // [rsp+110h] [rbp+10h] BYREF
  char v67[16]; // [rsp+120h] [rbp+20h] BYREF

  v3 = (struct tagWND **)(a3 + 14);
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v36 )
    {
      if ( a3 == (__int64 *)GetDesktopWindow(a1) )
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, LastTopMostWindow, a3);
  v8 = a3[3];
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v9 = *(__int64 **)(v10 + 24);
  }
  if ( a3 == v9 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL));
  else
    v11 = 0;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (struct tagWND *)1 )
    {
      LastTopMostWindow = *v3;
      if ( !*v3 || (*(_BYTE *)(*((_QWORD *)LastTopMostWindow + 5) + 20LL) & 0x20) != 0 )
        goto LABEL_11;
      while ( 1 )
      {
        v37 = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        if ( !v37 || v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v37 + 5) + 236LL)) < BandOrdinal )
          break;
        if ( (*(_BYTE *)(*((_QWORD *)v37 + 5) + 20LL) & 0x20) != 0 )
          break;
        LastTopMostWindow = v37;
      }
      if ( v11
        && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) < BandOrdinal )
      {
        goto LABEL_11;
      }
    }
    else if ( v11 )
    {
      if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
      {
        while ( 1 )
        {
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 12);
          if ( !LastTopMostWindow )
            goto LABEL_11;
          if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
            goto LABEL_47;
        }
      }
      while ( 1 )
      {
        v31 = *((_QWORD *)LastTopMostWindow + 11);
        if ( !v31 || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v31 + 40) + 236LL)) <= BandOrdinal )
          break;
        LastTopMostWindow = v32;
      }
    }
LABEL_47:
    v33 = *((_QWORD *)LastTopMostWindow + 11);
    if ( v33 )
    {
      v60 = *(_OWORD *)LockPointer(v64, v33 + 96, a1);
      HMAssignmentLock(&v60);
      v61 = *(_OWORD *)LockPointer(v65, (char *)a1 + 88, *((_QWORD *)LastTopMostWindow + 11));
      HMAssignmentLock(&v61);
    }
    v62 = *(_OWORD *)LockPointer(v66, (char *)a1 + 96, LastTopMostWindow);
    HMAssignmentLock(&v62);
    v34 = (__int128 *)LockPointer(v67, (char *)LastTopMostWindow + 88, a1);
    v15 = &v63;
    v63 = *v34;
    goto LABEL_21;
  }
LABEL_11:
  v12 = *v3;
  if ( *v3 )
  {
    if ( v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v12 + 5) + 236LL)) > BandOrdinal )
    {
      do
      {
        LastTopMostWindow = v12;
        v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
        if ( !v12 )
          break;
        v38 = 0;
        v39 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 236LL);
        v40 = &gazbidOrder;
        while ( *v40 != v39 )
        {
          if ( v40[1] == v39 )
          {
            ++v38;
            break;
          }
          if ( v40[2] == v39 )
          {
            v38 += 2;
            break;
          }
          if ( v40[3] == v39 )
          {
            v38 += 3;
            break;
          }
          if ( v40[4] == v39 )
          {
            v38 += 4;
            break;
          }
          if ( v40[5] == v39 )
          {
            v38 += 5;
            break;
          }
          v40 += 6;
          v38 += 6;
          if ( v38 >= 0x12 )
            break;
        }
      }
      while ( v38 > BandOrdinal );
      goto LABEL_47;
    }
    v13 = (_QWORD *)((char *)v12 + 96);
    if ( a1 )
      *(_QWORD *)(*(v13 - 7) + 80LL) = *((_QWORD *)a1 + 6);
    else
      *(_QWORD *)(*(v13 - 7) + 80LL) = 0LL;
    v57[0] = v13;
    v57[1] = a1;
    HMAssignmentLock(v57);
    v14 = *v3;
    if ( *v3 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v14 + 6);
    else
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    v58[0] = (char *)a1 + 88;
    v58[1] = v14;
    HMAssignmentLock(v58);
  }
  if ( a1 )
    *((_QWORD *)*(v3 - 9) + 7) = *((_QWORD *)a1 + 6);
  else
    *((_QWORD *)*(v3 - 9) + 7) = 0LL;
  v59[0] = v3;
  v15 = (__int128 *)v59;
  v59[1] = a1;
LABEL_21:
  HMAssignmentLock(v15);
  v16 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 8u;
  for ( i = *v3; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( i == a1 )
      v16 = 1;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^ (16 * v16)) & 0x10;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v18 = *((_QWORD *)a1 + 3);
    v19 = 0LL;
    if ( v18 )
      v19 = *(struct tagWND **)(v18 + 104);
    if ( a1 != v19 && a3 != (__int64 *)gTermIO[1] )
    {
      DirtyVisRgnTrackers(a1);
      v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      v21 = HWInsertAfter(LastTopMostWindow);
      v22 = *a3;
      v23 = v21;
      v24 = *(_QWORD *)a1;
      v26 = ReferenceDwmApiPort(v25);
      v27 = (void *)v26;
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v26 )
      {
        v45 = 4718624;
        v47 = 0LL;
        v48 = 0LL;
        v49 = 0LL;
        v50 = 0LL;
        v51 = 0;
        v46 = 0x8000;
        v52 = 1073741842;
        v53 = v24;
        v54 = v22;
        v55 = v23;
        v56 = v20;
        LpcRequestPort(v26, &v45);
        ObfDereferenceObject(v27);
      }
      for ( j = (__int64 *)*((_QWORD *)a1 + 11); j; j = (__int64 *)j[11] )
      {
        v29 = j[5];
        v30 = *(_DWORD *)(v29 + 232);
        if ( (v30 & 0x10) == 0 )
        {
          *(_DWORD *)(v29 + 232) = v30 | 0x10;
          DirtyVisRgnTrackers(j);
          v41 = *(_DWORD *)(j[5] + 236);
          v42 = HWInsertAfter(j[12]);
          v44 = (void *)ReferenceDwmApiPort(v43);
          DwmAsyncChildLink(v44, *j, *a3, v42, v41);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
