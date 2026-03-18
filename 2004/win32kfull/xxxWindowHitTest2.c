/*
 * XREFs of xxxWindowHitTest2 @ 0x1C010B3CC
 * Callers:
 *     xxxWindowFromPoint @ 0x1C00B0884 (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C010B314 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0217344 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C0006D34 (LayerHitTest.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxWindowHitTest @ 0x1C010B314 (xxxWindowHitTest.c)
 *     SizeBoxHwnd @ 0x1C025E57C (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(const struct tagWND *a1, unsigned __int64 a2, int *a3, char a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v20; // rax
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp-28h]
  unsigned int v23; // [rsp+9Ch] [rbp+14h]

  v23 = HIDWORD(a2);
  v22 = 0LL;
  v7 = (unsigned __int64)a1;
  v21 = 0LL;
  if ( !a1 || !(unsigned int)IsCompositionInputWindow(a1) && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x10) == 0 )
    return 0LL;
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7)
    && !PtInRect((_DWORD *)(*(_QWORD *)(v7 + 40) + 88LL), a2) )
  {
    return 0LL;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 168LL);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v23) )
      return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7) && (a4 & 1) != 0 )
  {
    v16 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v16 + 31) & 0xC0) != 0x40 )
    {
      v17 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7) )
  {
    v9 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), a2) )
    {
      v10 = *(_QWORD *)(v7 + 112);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v21 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
      *((_QWORD *)&v21 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      v12 = xxxWindowHitTest(*(_QWORD *)(v7 + 112), a2, (__int64)a3);
      ThreadUnlock1(v14, v13, v15);
      if ( v12 )
        return v12;
    }
  }
  LODWORD(v16) = IsCompositionInputWindow((const struct tagWND *)v7);
  if ( (_DWORD)v16 || (LODWORD(v16) = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v17 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v16) = xxxSendTransformableMessageTimeout(
                   v7,
                   0x84u,
                   0LL,
                   (struct _LARGE_STRING *)((unsigned __int16)a2 | ((unsigned __int16)v23 << 16)),
                   0,
                   0,
                   0LL,
                   1,
                   0);
  v17 = v16;
  if ( (_DWORD)v16 == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v17;
  v18 = *(_QWORD *)(v7 + 40);
  LOBYTE(v16) = ~*(_BYTE *)(v18 + 26);
  if ( v17 == (((unsigned int)v16 >> 6) & 1 | 0x10) && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    v20 = SizeBoxHwnd(v7);
    if ( v20 )
      v7 = v20;
  }
  return *(_QWORD *)v7;
}
