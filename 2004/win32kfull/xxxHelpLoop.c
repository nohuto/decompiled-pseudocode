/*
 * XREFs of xxxHelpLoop @ 0x1C025120C
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     GetWindowBorders @ 0x1C005FF14 (GetWindowBorders.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     _GetParent @ 0x1C00E9C04 (_GetParent.c)
 *     xxxTranslateMessage @ 0x1C0107B70 (xxxTranslateMessage.c)
 *     xxxWindowHitTest @ 0x1C010B314 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxInternalEnumWindow @ 0x1C01D2AE4 (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01E30A8 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C02516EC (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C026179C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C02617F8 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(__int64 a1)
{
  int WindowBorders; // eax
  _DWORD *v3; // r8
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct tagCURSOR *v8; // rcx
  __int64 v9; // rax
  struct tagWND *v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 Parent; // rsi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int ContextHelpId; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD v29[4]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v30; // [rsp+48h] [rbp-49h] BYREF
  __int128 v31; // [rsp+58h] [rbp-39h]
  __int128 v32; // [rsp+68h] [rbp-29h]
  __int128 v33; // [rsp+78h] [rbp-19h] BYREF
  __int64 v34; // [rsp+88h] [rbp-9h]
  __int128 v35; // [rsp+90h] [rbp-1h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+Fh]
  _QWORD v37[3]; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD v38[3]; // [rsp+C0h] [rbp+2Fh] BYREF

  v30 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  xxxWindowEvent(0xCu, (struct tagWND *)a1, 0, 0, 0);
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 6632LL));
  xxxCapture(gptiCurrent, (struct tagWND *)a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*(_QWORD *)(a1 + 40) + 28LL),
                    *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL));
  v3 = *(_DWORD **)(a1 + 40);
  v4 = v3[24] - WindowBorders;
  v29[0] = WindowBorders + v3[22];
  v5 = v3[23];
  v29[2] = v4;
  v6 = v3[25] - WindowBorders;
  v29[1] = WindowBorders + v5;
  v29[3] = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
        goto LABEL_35;
      if ( (unsigned int)xxxInternalGetMessage(&v30, 0LL, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(15615LL, 0, 0LL);
    }
    if ( DWORD2(v30) == 161 )
      goto LABEL_35;
    if ( DWORD2(v30) == 513 )
    {
      if ( !PtInRect(v29, *(unsigned __int64 *)((char *)&v32 + 4)) )
        goto LABEL_35;
      v9 = xxxWindowHitTest(a1, *(__int64 *)((char *)&v32 + 4), 0LL);
      v10 = (struct tagWND *)ValidateHwnd(v9);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v35;
      *((_QWORD *)&v35 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      if ( (unsigned int)IsHelpParent(v10) )
      {
        v34 = *(_QWORD *)((char *)&v32 + 4);
        v33 = (unsigned __int64)v10;
        xxxInternalEnumWindow(v10, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v33, 1);
        v10 = (struct tagWND *)*((_QWORD *)&v33 + 1);
      }
      v15 = 0LL;
      if ( v10 != (struct tagWND *)a1 )
        v15 = v10;
      if ( !v15 && (!*(_DWORD *)(*(_QWORD *)(a1 + 40) + 280LL) || (v15 = (_QWORD *)a1) == 0LL) )
      {
        ThreadUnlock1(v13, v12, v14);
        goto LABEL_35;
      }
      v38[2] = 0LL;
      v37[2] = 0LL;
      v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v37[0] = *(_QWORD *)(v16 + 408);
      *(_QWORD *)(v16 + 408) = v37;
      v37[1] = v15;
      HMLockObject(v15);
      zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
      xxxReleaseCapture();
      xxxRedrawTitle((unsigned __int64 *)a1, 0x1000u);
      SetOrClrWF(0, a1, 0x580u, 1);
      xxxInternalGetMessage(&v30, 0LL, 0, 0, 1, 1u);
      xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, 4u, 0);
      xxxWindowEvent(0xDu, (struct tagWND *)a1, 0, 0, 0);
      if ( (*(_BYTE *)(v15[5] + 31LL) & 8) != 0 )
      {
        Parent = GetParent(v15);
        if ( !Parent )
        {
LABEL_31:
          ThreadUnlock1(v18, v17, v20);
          ThreadUnlock1(v22, v21, v23);
          return;
        }
      }
      else
      {
        Parent = (__int64)v15;
      }
      v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v38[0] = *(_QWORD *)(v24 + 408);
      *(_QWORD *)(v24 + 408) = v38;
      v38[1] = Parent;
      HMLockObject(Parent);
      ContextHelpId = GetContextHelpId(v15);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v27, v26, v28);
      goto LABEL_31;
    }
    if ( (unsigned int)(DWORD2(v30) - 516) <= 7 )
    {
      v7 = 137;
      if ( _bittest(&v7, DWORD2(v30) - 516) )
        goto LABEL_35;
    }
    if ( DWORD2(v30) != 512 )
      break;
    if ( PtInRect(v29, *(unsigned __int64 *)((char *)&v32 + 4)) )
      v8 = *(struct tagCURSOR **)(gasyscur[0] + 6632LL);
    else
      v8 = (struct tagCURSOR *)gasyscur[1];
    zzzSetCursor(v8);
LABEL_15:
    xxxInternalGetMessage(&v30, 0LL, 0, 0, 1, 1u);
    xxxTranslateMessage((__int64)&v30, 0);
    xxxDispatchMessage((__int64)&v30);
  }
  if ( DWORD2(v30) != 256 || (_QWORD)v31 != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage(&v30, 0LL, 0, 0, 1, 1u);
LABEL_35:
  xxxReleaseCapture();
  zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
  xxxRedrawTitle((unsigned __int64 *)a1, 0x1000u);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, 4u, 0);
  xxxWindowEvent(0xDu, (struct tagWND *)a1, 0, 0, 0);
}
