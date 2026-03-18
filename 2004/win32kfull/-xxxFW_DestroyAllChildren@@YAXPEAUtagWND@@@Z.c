/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     UnredirectDCEs @ 0x1C0020AD8 (UnredirectDCEs.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 StyleWindow; // rax
  BOOL v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v2 + 1224) & 0x40000) != 0 && *(struct tagWND **)(v2 + 1384) == a1 && *(_QWORD *)(v2 + 1392) )
    xxxSetModernAppWindow(a1, 0LL);
  while ( 1 )
  {
    v3 = *((_QWORD *)a1 + 14);
    if ( !v3 )
      break;
    v4 = *((_QWORD *)a1 + 14);
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v11;
    *((_QWORD *)&v11 + 1) = v3;
    HMLockObject(v4);
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) != 0 )
      SetVisible((struct tagWND *)v3, 0);
    StyleWindow = GetStyleWindow(v3, 2848);
    v6 = StyleWindow && StyleWindow != v3;
    UnlinkWindow((__int64 *)v3, (__int64 *)a1);
    if ( v6 )
      UnredirectDCEs((struct tagWND *)v3);
    SetOrClrWF(1LL, v3, 1152LL, 1LL);
    SetOrClrWF(1LL, v3, 896LL, 1LL);
    v7 = *(_QWORD *)(v3 + 16);
    if ( v7 == gptiCurrent )
    {
      xxxFreeWindow((NotifyShell *)v3, (struct tagSwitchWndInfo *)&v11);
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v7, *(struct tagQ **)(v7 + 424), 8u, 0LL, 0, *(_QWORD *)v3, 0LL, 0LL);
      ThreadUnlock1(v9, v8, v10);
    }
  }
}
