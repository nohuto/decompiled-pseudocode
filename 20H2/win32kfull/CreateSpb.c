/*
 * XREFs of CreateSpb @ 0x1C0156560
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SubtractRect @ 0x1C003F10C (SubtractRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0219D30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C021A2DC (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C029E150 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  _QWORD *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // r14
  __int64 *v11; // r12
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r15d
  int v17; // r13d
  LONG v18; // ebx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v20; // rbp
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  struct tagWND *v25; // rdx
  __int128 v28; // [rsp+70h] [rbp-68h] BYREF
  __int128 v29; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( (_DWORD)DesktopWindow && a2 != 2 )
    return DesktopWindow;
  if ( (a2 & 2) == 0 )
  {
    if ( *((_QWORD *)v4 + 13) )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v6 != DesktopWindow )
        return DesktopWindow;
    }
  }
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    SpbCheck();
  }
  else
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(_QWORD **)(gpDispInfo + 24LL); i; i = (_QWORD *)*i )
      GreGetBounds(i[1], 0LL, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  DesktopWindow = Win32AllocPoolWithQuota(72LL, 1651733333LL);
  v8 = DesktopWindow;
  if ( !DesktopWindow )
    return DesktopWindow;
  v9 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
  *(_QWORD *)(v8 + 64) = v9;
  if ( !v9 )
  {
LABEL_39:
    LOBYTE(DesktopWindow) = Win32FreePool(v8);
    return DesktopWindow;
  }
  v10 = (int *)(v8 + 24);
  v11 = (__int64 *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_OWORD *)(v8 + 24) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v28 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)&v28) )
  {
LABEL_38:
    Win32FreePool(*(_QWORD *)(v8 + 64));
    goto LABEL_39;
  }
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_DWORD *)(v8 + 48) = a2;
  *(_QWORD *)&v28 = v8 + 8;
  *((_QWORD *)&v28 + 1) = v4;
  HMAssignmentLock(&v28);
  if ( (a2 & 2) == 0 )
  {
    v29 = *(_OWORD *)v10;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v13 = MonitorFromRect((struct tagRECT *)(v8 + 24), 1LL, 0LL, v12),
           v28 = 0LL,
           v14 = v13,
           !SubtractRect((__int64)&v28, v8 + 24, *(_QWORD *)(v13 + 40) + 28LL))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v28))
      && (unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(*(_QWORD *)(v14 + 40) + 28LL))
      && v14 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v15 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v29);
        *(_QWORD *)(v8 + 56) = v15;
        if ( v15 )
        {
          *(_DWORD *)(v8 + 48) |= 1u;
LABEL_29:
          SetOrClrWF(1, (__int64)v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_30;
        }
      }
      v16 = *(_DWORD *)(v8 + 32) - *v10;
      v17 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
      v18 = *v10 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v16 + v18, v17, 0, 0LL, 0LL);
      *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v20 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal);
        if ( v20 )
        {
          v21 = NtGdiBitBltInternal(ghdcMem, v18, 0, v16, v17, a3, *v10, *(_DWORD *)(v8 + 28), 13369344, 0, 0);
          GreSelectBitmap(ghdcMem, v20);
          if ( v21 )
          {
            GreSetBitmapOwner(*(_QWORD *)(v8 + 16), 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v24 = *(_QWORD *)(v8 + 16);
    if ( v24 )
      GreDeleteObject(v24);
    HMAssignmentUnlock(v8 + 8);
    goto LABEL_38;
  }
LABEL_30:
  *(_QWORD *)v8 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v8;
  SetRectRgnIndirect(ghrgnSPB2, v8 + 24);
  v22 = *(_QWORD *)(*(_QWORD *)(*v11 + 40) + 168LL);
  if ( !v22 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v22, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v11);
    if ( (_DWORD)DesktopWindow || (DesktopWindow = *(_QWORD *)(v23 + 40), (*(_BYTE *)(DesktopWindow + 26) & 8) == 0) )
    {
      v25 = *(struct tagWND **)(v23 + 104);
      if ( !v25 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v25, 0), (_DWORD)DesktopWindow) )
      {
        while ( v4 )
        {
          LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v4, 1);
          if ( !(_DWORD)DesktopWindow )
            break;
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        }
      }
    }
    else
    {
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v23, 1);
    }
  }
  return DesktopWindow;
}
