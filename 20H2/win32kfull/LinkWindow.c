/*
 * XREFs of LinkWindow @ 0x1C0046760
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ImeSetTopmost @ 0x1C00C5328 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C00141C4 (GetLastTopMostWindow.c)
 *     GetBandOrdinal @ 0x1C0046CAC (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     DwmAsyncChildLink @ 0x1C0081610 (DwmAsyncChildLink.c)
 *     TrackLayeredZorder @ 0x1C009153C (TrackLayeredZorder.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00CAD84 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0105294 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     HWInsertAfter @ 0x1C01071FC (HWInsertAfter.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0222B2C (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND *a2, _QWORD *a3)
{
  struct tagWND **v3; // rbx
  struct tagWND *LastTopMostWindow; // rsi
  unsigned int BandOrdinal; // edi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // r9
  struct tagWND *v11; // r8
  _QWORD *v12; // r8
  struct tagWND *v13; // rdx
  __int128 *v14; // rcx
  int v15; // ecx
  struct tagWND *i; // rax
  __int64 v17; // rcx
  struct tagWND *v18; // rax
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rbx
  _QWORD *j; // rsi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r8
  struct tagWND *v32; // r8
  __int64 v33; // rdx
  __int128 *v34; // rax
  __int64 DesktopWindow; // rax
  struct tagWND *v36; // r8
  unsigned int v37; // edx
  int v38; // ecx
  _DWORD *v39; // rax
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rcx
  void *v43; // rax
  int v44; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v45; // [rsp+34h] [rbp-CCh]
  __int64 v46; // [rsp+36h] [rbp-CAh]
  __int64 v47; // [rsp+3Eh] [rbp-C2h]
  __int64 v48; // [rsp+46h] [rbp-BAh]
  __int64 v49; // [rsp+4Eh] [rbp-B2h]
  __int16 v50; // [rsp+56h] [rbp-AAh]
  int v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+5Ch] [rbp-A4h]
  __int64 v53; // [rsp+64h] [rbp-9Ch]
  __int64 v54; // [rsp+6Ch] [rbp-94h]
  int v55; // [rsp+74h] [rbp-8Ch]
  _QWORD v56[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v57[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v58[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  char v63[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v64[16]; // [rsp+100h] [rbp+0h] BYREF
  char v65[16]; // [rsp+110h] [rbp+10h] BYREF
  char v66[16]; // [rsp+120h] [rbp+20h] BYREF

  v3 = (struct tagWND **)(a3 + 14);
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( (struct tagWND *)DesktopWindow != a2 )
    {
      v40 = GetDesktopWindow(a1);
      if ( a3 == (_QWORD *)v40 )
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
    a2 = *(struct tagWND **)(v8 + 8);
    if ( a2 )
      v9 = (_QWORD *)*((_QWORD *)a2 + 3);
  }
  if ( a3 == v9 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL), a2, a3, 1LL);
  else
    v10 = 0LL;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (struct tagWND *)1 )
    {
      LastTopMostWindow = *v3;
      if ( !*v3 || (*(_BYTE *)(*((_QWORD *)LastTopMostWindow + 5) + 20LL) & 0x20) != 0 )
        goto LABEL_11;
      while ( 1 )
      {
        v36 = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        if ( !v36
          || (_DWORD)v10
          && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v36 + 5) + 236LL), a2, v36, v10) < BandOrdinal )
        {
          break;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v36 + 5) + 20LL) & 0x20) != 0 )
          break;
        LastTopMostWindow = v36;
      }
      if ( (_DWORD)v10
        && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL), a2, v36, v10) < BandOrdinal )
      {
        goto LABEL_11;
      }
    }
    else if ( (_DWORD)v10 )
    {
      if ( BandOrdinal > (unsigned int)GetBandOrdinal(
                                         *(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL),
                                         a2,
                                         a3,
                                         v10) )
      {
        while ( 1 )
        {
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 12);
          if ( !LastTopMostWindow )
            goto LABEL_11;
          if ( BandOrdinal <= (unsigned int)GetBandOrdinal(
                                              *(unsigned int *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL),
                                              a2,
                                              v30,
                                              v10) )
            goto LABEL_47;
        }
      }
      while ( 1 )
      {
        v31 = *((_QWORD *)LastTopMostWindow + 11);
        if ( !v31
          || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v31 + 40) + 236LL), a2, v31, v10) <= BandOrdinal )
        {
          break;
        }
        LastTopMostWindow = v32;
      }
    }
LABEL_47:
    v33 = *((_QWORD *)LastTopMostWindow + 11);
    if ( v33 )
    {
      v59 = *(_OWORD *)LockPointer(v63, v33 + 96, a1);
      HMAssignmentLock(&v59);
      v60 = *(_OWORD *)LockPointer(v64, (char *)a1 + 88, *((_QWORD *)LastTopMostWindow + 11));
      HMAssignmentLock(&v60);
    }
    v61 = *(_OWORD *)LockPointer(v65, (char *)a1 + 96, LastTopMostWindow);
    HMAssignmentLock(&v61);
    v34 = (__int128 *)LockPointer(v66, (char *)LastTopMostWindow + 88, a1);
    v14 = &v62;
    v62 = *v34;
    goto LABEL_21;
  }
LABEL_11:
  v11 = *v3;
  if ( *v3 )
  {
    if ( (_DWORD)v10
      && (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v11 + 5) + 236LL), a2, v11, v10) > BandOrdinal )
    {
      do
      {
        LastTopMostWindow = v11;
        v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
        if ( !v11 )
          break;
        v37 = 0;
        v38 = *(_DWORD *)(*((_QWORD *)v11 + 5) + 236LL);
        v39 = &gazbidOrder;
        while ( *v39 != v38 )
        {
          if ( v39[1] == v38 )
          {
            ++v37;
            break;
          }
          if ( v39[2] == v38 )
          {
            v37 += 2;
            break;
          }
          if ( v39[3] == v38 )
          {
            v37 += 3;
            break;
          }
          if ( v39[4] == v38 )
          {
            v37 += 4;
            break;
          }
          if ( v39[5] == v38 )
          {
            v37 += 5;
            break;
          }
          v39 += 6;
          v37 += 6;
          if ( v37 >= 0x12 )
            break;
        }
      }
      while ( v37 > BandOrdinal );
      goto LABEL_47;
    }
    v12 = (_QWORD *)((char *)v11 + 96);
    if ( a1 )
      *(_QWORD *)(*(v12 - 7) + 80LL) = *((_QWORD *)a1 + 6);
    else
      *(_QWORD *)(*(v12 - 7) + 80LL) = 0LL;
    v56[0] = v12;
    v56[1] = a1;
    HMAssignmentLock(v56);
    v13 = *v3;
    if ( *v3 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v13 + 6);
    else
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    v57[0] = (char *)a1 + 88;
    v57[1] = v13;
    HMAssignmentLock(v57);
  }
  if ( a1 )
    *((_QWORD *)*(v3 - 9) + 7) = *((_QWORD *)a1 + 6);
  else
    *((_QWORD *)*(v3 - 9) + 7) = 0LL;
  v58[0] = v3;
  v14 = (__int128 *)v58;
  v58[1] = a1;
LABEL_21:
  HMAssignmentLock(v14);
  v15 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 8u;
  for ( i = *v3; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( i == a1 )
      v15 = 1;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^ (16 * v15)) & 0x10;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v17 = *((_QWORD *)a1 + 3);
    v18 = 0LL;
    if ( v17 )
      v18 = *(struct tagWND **)(v17 + 104);
    if ( a1 != v18 && a3 != (_QWORD *)gTermIO[1] )
    {
      DirtyVisRgnTrackers(a1);
      v19 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      v20 = HWInsertAfter(LastTopMostWindow);
      v21 = *a3;
      v22 = v20;
      v23 = *(_QWORD *)a1;
      v25 = ReferenceDwmApiPort(v24);
      v26 = (void *)v25;
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v25 )
      {
        v44 = 4718624;
        v46 = 0LL;
        v47 = 0LL;
        v48 = 0LL;
        v49 = 0LL;
        v50 = 0;
        v45 = 0x8000;
        v51 = 1073741842;
        v52 = v23;
        v53 = v21;
        v54 = v22;
        v55 = v19;
        LpcRequestPort(v25, &v44);
        ObfDereferenceObject(v26);
      }
      for ( j = (_QWORD *)*((_QWORD *)a1 + 11); j; j = (_QWORD *)j[11] )
      {
        v28 = j[5];
        v29 = *(_DWORD *)(v28 + 232);
        if ( (v29 & 0x10) == 0 )
        {
          *(_DWORD *)(v28 + 232) = v29 | 0x10;
          DirtyVisRgnTrackers(j);
          v41 = *(_DWORD *)(j[5] + 236LL);
          HWInsertAfter(j[12]);
          v43 = (void *)ReferenceDwmApiPort(v42);
          DwmAsyncChildLink(v43, v41);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
