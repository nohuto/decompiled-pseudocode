/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C006CB10
 * Callers:
 *     xxxGetUpdateRgn @ 0x1C005D7A8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C005E00C (xxxGetUpdateRect.c)
 *     xxxInternalDoSyncPaint @ 0x1C006C830 (xxxInternalDoSyncPaint.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ClearHungFlag @ 0x1C008CC64 (ClearHungFlag.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EFDB0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00FFB34 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106850 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  struct tagWND *v2; // rax
  __int64 v3; // rax
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  _DWORD *v7; // rax
  int v8; // r14d
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v14; // rsi
  __int64 v15; // rcx
  int v16; // ecx
  BOOL v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  void *v20; // rax
  HRGN v21; // rax

  v2 = a1;
  if ( !a1 )
  {
LABEL_4:
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 28);
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 232);
    *(_BYTE *)(v3 + 18) &= ~0x40u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_8;
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = v7[7];
    v9 = v7[6];
    v10 = v7[58];
    if ( v4 == v8 )
    {
      if ( v5 == v9 && v6 == v10 )
        goto LABEL_8;
      if ( v5 == v9 )
      {
        if ( ((v6 ^ v10) & 0x2E00300) != 0 )
        {
LABEL_37:
          DirtyVisRgnTrackers(a1);
          v20 = (void *)ReferenceDwmApiPort(v19);
          DwmAsyncChildStyleChange(v20);
        }
LABEL_8:
        v11 = *((_QWORD *)a1 + 5);
        v12 = (*(unsigned __int8 *)(v11 + 17) >> 2) & 2 | 1;
        LOBYTE(v2) = *(_BYTE *)(v11 + 17) & 2;
        if ( !(_BYTE)v2 )
          v12 = (*(unsigned __int8 *)(v11 + 17) >> 2) & 2;
        if ( v12 )
        {
          if ( (*(_BYTE *)(v11 + 31) & 0x10) != 0 )
          {
            if ( !*(_QWORD *)(v11 + 136) )
            {
              SetOrClrWF(0LL, a1, 258LL, 1LL);
              SetOrClrWF(0LL, a1, 260LL, 1LL);
              LOBYTE(v12) = v12 & 0xFE;
            }
            if ( *((_QWORD *)a1 + 2) == gptiCurrent )
            {
              NCUpdateRgn = GetNCUpdateRgn(a1, 1);
              v14 = NCUpdateRgn;
              if ( (v12 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
                xxxSendNCPaint(a1, NCUpdateRgn);
              if ( (v12 & 1) != 0 )
              {
                v15 = *((_QWORD *)a1 + 5);
                if ( (*(_BYTE *)(v15 + 17) & 8) != 0 )
                {
                  DeleteMaybeSpecialRgn(v14);
                  v21 = GetNCUpdateRgn(a1, 0);
                  v15 = *((_QWORD *)a1 + 5);
                  v14 = v21;
                }
                if ( (*(_BYTE *)(v15 + 17) & 2) != 0 )
                {
                  SetOrClrWF(0LL, a1, 258LL, 1LL);
                  SetOrClrWF(0LL, a1, 260LL, 1LL);
                  xxxSendEraseBkgnd(a1, 0LL, v14);
                }
                ClearHungFlag(a1);
              }
              LOBYTE(v2) = DeleteMaybeSpecialRgn(v14);
            }
            else
            {
              v2 = (struct tagWND *)*((_QWORD *)a1 + 5);
              if ( (*((_BYTE *)v2 + 31) & 0xC0) != 0x40 )
              {
                v2 = *(struct tagWND **)(grpdeskRitInput + 8LL);
                if ( a1 != *((struct tagWND **)v2 + 3) )
                {
                  LODWORD(v2) = IsHungWindow(a1);
                  if ( (_DWORD)v2 )
                  {
                    v2 = (struct tagWND *)*((_QWORD *)a1 + 5);
                    if ( (*((_BYTE *)v2 + 19) & 8) != 0 )
                    {
                      ClearHungFlag(a1);
                      LOBYTE(v2) = xxxRedrawHungWindow(a1);
                    }
                  }
                }
              }
            }
          }
          else
          {
            SetOrClrWF(0LL, a1, 264LL, 1LL);
            SetOrClrWF(0LL, a1, 258LL, 1LL);
            SetOrClrWF(0LL, a1, 1664LL, 1LL);
            SetOrClrWF(0LL, a1, 260LL, 1LL);
            LOBYTE(v2) = ClearHungFlag(a1);
          }
        }
        return (char)v2;
      }
      v16 = (v5 ^ v9) & 0x4E27A9;
      v17 = v16 != 0;
    }
    else
    {
      v18 = (v4 ^ v8) & 0xB1CF0000;
      v17 = v18 != 0;
    }
    if ( v17 )
      goto LABEL_37;
    goto LABEL_8;
  }
  while ( (*(_BYTE *)(*((_QWORD *)v2 + 5) + 27LL) & 2) == 0 )
  {
    v2 = (struct tagWND *)*((_QWORD *)v2 + 13);
    if ( !v2 )
      goto LABEL_4;
  }
  return (char)v2;
}
