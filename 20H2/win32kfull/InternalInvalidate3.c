/*
 * XREFs of InternalInvalidate3 @ 0x1C0044D64
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00430B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 * Callees:
 *     DecPaintCount @ 0x1C001B304 (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C003C378 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     CalcWindowRgn @ 0x1C0040864 (CalcWindowRgn.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ClearHungFlag @ 0x1C00D1F84 (ClearHungFlag.c)
 *     IncPaintCount @ 0x1C023E010 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C023E060 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  int v6; // edi
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // ebp
  __int64 v12; // rax
  int v13; // ebp
  int v14; // r14d
  int v15; // r15d
  _DWORD *v16; // rax
  int v17; // r9d
  int v18; // r8d
  int v19; // edi
  __int64 v20; // rax
  int v21; // ebp
  int v22; // r14d
  int v23; // r15d
  _DWORD *v24; // rax
  int v25; // r9d
  int v26; // r8d
  int v27; // edi
  __int64 v28; // rdx
  int v29; // r14d
  int v30; // ebp
  int v31; // r15d
  _DWORD *v32; // rax
  int v33; // r9d
  int v34; // r8d
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdi
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  BOOL v48; // edx
  __int64 v49; // rcx
  void *v50; // rax
  BOOL v51; // edx
  __int64 v52; // rcx
  void *v53; // rax
  BOOL v54; // edx
  __int64 v55; // rcx
  void *v56; // rax
  BOOL v57; // [rsp+70h] [rbp+18h]

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v8 = *(struct tagWND **)(v9 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0;
    v57 = v11;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) != 0 )
        SetOrClrWF(1LL, a1, 272LL, 1LL);
      if ( !v6 )
        goto LABEL_40;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_DWORD *)(v12 + 28);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *(_DWORD *)(v12 + 232);
      *(_BYTE *)(v12 + 17) &= ~1u;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v16 = (_DWORD *)*((_QWORD *)a1 + 5);
        v17 = v16[7];
        v18 = v16[6];
        v19 = v16[58];
        if ( v13 != v17 )
          goto LABEL_87;
        if ( v14 == v18 && v15 == v19 )
          goto LABEL_17;
        if ( v13 == v17 )
        {
          if ( v14 == v18 )
          {
            if ( ((v15 ^ v19) & 0x2E00300) == 0 )
              goto LABEL_17;
            v48 = 1;
          }
          else
          {
            v48 = ((v14 ^ v18) & 0x4E27A9) != 0;
          }
        }
        else
        {
LABEL_87:
          v48 = ((v13 ^ v17) & 0xB1CF0000) != 0;
        }
        if ( v48 )
        {
          DirtyVisRgnTrackers(a1);
          v50 = (void *)ReferenceDwmApiPort(v49);
          DwmAsyncChildStyleChange(v50);
        }
      }
LABEL_17:
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1LL, a1, 1026LL, 1LL);
          gRdwFlags |= a3;
        }
      }
      if ( a2 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0LL, a1, 258LL, 1LL);
      if ( (a3 & 4) != 0 )
      {
        v20 = *((_QWORD *)a1 + 5);
        v21 = *(_DWORD *)(v20 + 28);
        v22 = *(_DWORD *)(v20 + 24);
        v23 = *(_DWORD *)(v20 + 232);
        *(_BYTE *)(v20 + 17) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v24 = (_DWORD *)*((_QWORD *)a1 + 5);
          v25 = v24[7];
          v26 = v24[6];
          v27 = v24[58];
          if ( v21 != v25 )
            goto LABEL_95;
          if ( v22 == v26 && v23 == v27 )
            goto LABEL_24;
          if ( v21 == v25 )
          {
            if ( v22 == v26 )
            {
              if ( ((v23 ^ v27) & 0x2E00300) == 0 )
                goto LABEL_24;
              v51 = 1;
            }
            else
            {
              v51 = ((v22 ^ v26) & 0x4E27A9) != 0;
            }
          }
          else
          {
LABEL_95:
            v51 = ((v21 ^ v25) & 0xB1CF0000) != 0;
          }
          if ( v51 )
          {
            DirtyVisRgnTrackers(a1);
            v53 = (void *)ReferenceDwmApiPort(v52);
            DwmAsyncChildStyleChange(v53);
          }
        }
      }
LABEL_24:
      if ( (a3 & 0x404) != 0 )
      {
        v28 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v28 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(v28 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
          {
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu);
            v28 = *((_QWORD *)a1 + 5);
          }
          v29 = *(_DWORD *)(v28 + 28);
          v30 = *(_DWORD *)(v28 + 24);
          v31 = *(_DWORD *)(v28 + 232);
          *(_BYTE *)(v28 + 19) |= 8u;
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v32 = (_DWORD *)*((_QWORD *)a1 + 5);
            v33 = v32[7];
            v34 = v32[6];
            v35 = v32[58];
            if ( v29 != v33 )
              goto LABEL_103;
            if ( v30 == v34 && v31 == v35 )
              goto LABEL_33;
            if ( v29 == v33 )
            {
              if ( v30 == v34 )
              {
                if ( ((v31 ^ v35) & 0x2E00300) == 0 )
                  goto LABEL_33;
                v54 = 1;
              }
              else
              {
                v54 = ((v30 ^ v34) & 0x4E27A9) != 0;
              }
            }
            else
            {
LABEL_103:
              v54 = ((v29 ^ v33) & 0xB1CF0000) != 0;
            }
            if ( v54 )
            {
              DirtyVisRgnTrackers(a1);
              v56 = (void *)ReferenceDwmApiPort(v55);
              DwmAsyncChildStyleChange(v56);
            }
          }
        }
      }
LABEL_33:
      if ( (a3 & 0x400) != 0 )
        SetOrClrWF(1LL, a1, 264LL, 1LL);
      v36 = *((_QWORD *)a1 + 5);
      v37 = *(_QWORD *)(v36 + 136);
      if ( v37 == 1 )
        goto LABEL_40;
      if ( a2 != 1 )
      {
        if ( v37 )
        {
          if ( (unsigned int)GreCombineRgn(v37, *(_QWORD *)(v36 + 136), a2, 2LL) )
            goto LABEL_40;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v38 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v38 && (unsigned int)GreCombineRgn(v38, a2, 0LL, 5LL) )
          {
LABEL_40:
            if ( !v57 )
            {
              v39 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v39 + 136) || (*(_BYTE *)(v39 + 17) & 0x10) != 0 )
              {
                v40 = *((_QWORD *)a1 + 2);
                if ( (a3 & 0x20000) != 0 )
                {
                  if ( v40 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v41 = *(_DWORD *)(v40 + 600);
                  *(_DWORD *)(v40 + 600) = v41 + 1;
                  if ( !v41 )
                  {
                    EtwTraceWakePump(v40, a1, 15LL);
                    if ( (*(_DWORD *)(v40 + 488) & 1) == 0 )
                    {
                      *(_WORD *)(*(_QWORD *)(v40 + 448) + 6LL) |= 0x20u;
                      *(_WORD *)(*(_QWORD *)(v40 + 448) + 4LL) |= 0x20u;
                      if ( (*(_BYTE *)(*(_QWORD *)(v40 + 448) + 10LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v40 + 736), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_52:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_40;
    }
    if ( (a3 & 0x838) == 0 || (((a3 & 0x8000) == 0) & (*(_BYTE *)(v10 + 17) >> 5)) != 0 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_65;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(a1);
    v42 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v42 + 136) )
      goto LABEL_65;
    if ( (*(_BYTE *)(v42 + 17) & 8) != 0 )
    {
      if ( a2 != 1 )
        goto LABEL_76;
      a2 = ghrgnInv2;
      CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
    }
    if ( a2 == 1 )
    {
LABEL_81:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      ClearHungFlag(a1);
LABEL_65:
      if ( v11 )
      {
        v43 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v43 + 136) && (*(_BYTE *)(v43 + 17) & 0x10) == 0 )
          DecPaintCount((__int64)a1);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
      v45 = *((_QWORD *)a1 + 5);
      v46 = *(_QWORD *)(v45 + 136);
      if ( !v46 )
        goto LABEL_52;
      LOBYTE(v44) = ~*(_BYTE *)(v45 + 17);
      if ( !(unsigned int)CalcWindowRgn((__int64)a1, v46, (v44 >> 3) & 1) )
        goto LABEL_52;
    }
    v47 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), a2, 4LL);
    if ( !v47 )
      goto LABEL_52;
    if ( v47 != 1 )
      goto LABEL_65;
    goto LABEL_81;
  }
}
