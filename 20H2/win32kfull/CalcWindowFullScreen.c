/*
 * XREFs of CalcWindowFullScreen @ 0x1C00906E4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C003C60C (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     CalcWindowsFullScreen @ 0x1C011C250 (CalcWindowsFullScreen.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     UnionRect @ 0x1C003F064 (UnionRect.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  __int64 v1; // rdx
  int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  struct tagMONITOR *v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0;
  v18 = 0LL;
  if ( !v1 )
    goto LABEL_6;
  v4 = *((_QWORD *)a1 + 3);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(_QWORD *)(v6 + 24);
  }
  if ( v1 == v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v9 = _MonitorFromWindowInternal(a1, 2u, 0);
    v10 = 1;
    if ( v9 )
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 30) & 0xC4) == 0xC4 )
        v12 = *(_OWORD *)(v11 + 104);
      else
        v12 = *(_OWORD *)(v11 + 88);
      v17 = v12;
      v16 = *GetMonitorRectForWindow(&v16, (__int64)v9, a1);
      UnionRect(&v18, (int *)&v17, (int *)&v16);
      v13 = v18 - v17;
      if ( (_QWORD)v18 == (_QWORD)v17 )
        v13 = *((_QWORD *)&v18 + 1) - *((_QWORD *)&v17 + 1);
      if ( !v13 )
      {
        v2 = 1;
        v10 = 0;
      }
    }
    v14 = *((_QWORD *)a1 + 5);
    result = (*(_DWORD *)(v14 + 232) & 0x8000u) >> 15;
    if ( v2 != (_DWORD)result )
    {
      *(_DWORD *)(v14 + 232) = (v2 << 15) | *(_DWORD *)(v14 + 232) & 0xFFFF7FFF;
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
      }
      v15 = (unsigned int)(v10 + 53);
      return PostShellHookMessages(v15, *(_QWORD *)a1);
    }
  }
  else
  {
LABEL_6:
    v7 = *((_QWORD *)a1 + 5);
    result = *(unsigned int *)(v7 + 232);
    if ( (result & 0x8000) != 0 )
    {
      *(_DWORD *)(v7 + 232) = result & 0xFFFF7FFF;
      v15 = 54LL;
      return PostShellHookMessages(v15, *(_QWORD *)a1);
    }
  }
  return result;
}
