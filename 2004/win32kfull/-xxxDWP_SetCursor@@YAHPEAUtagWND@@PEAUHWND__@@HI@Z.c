/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxActivateEnabledPopup @ 0x1C000725C (xxxActivateEnabledPopup.c)
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00AE030 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     _GetMenuState @ 0x1C00BAAEC (_GetMenuState.c)
 *     xxxActiveWindowTracking @ 0x1C01E2F7C (xxxActiveWindowTracking.c)
 *     xxxFlashEnabledPopup @ 0x1C0244A24 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, unsigned __int64 a2, signed int a3, int a4)
{
  __int64 DesktopWindow; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct tagCURSOR *v17; // rcx
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  __int64 v23; // rbx
  char v24; // cl
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  bool v30; // zf
  struct tagCURSOR *v31; // rbx
  __int64 v32; // rax
  struct tagWND *v33; // rdi
  __int64 v34; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int128 v40; // [rsp+20h] [rbp-38h] BYREF
  __int64 v41; // [rsp+30h] [rbp-28h]
  _QWORD v42[4]; // [rsp+38h] [rbp-20h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  if ( !a4 )
    goto LABEL_4;
  if ( ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)8, a3) )
  {
    v24 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
    if ( (v24 & 3) != 0 )
    {
      v25 = a3 - 10;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
          goto LABEL_42;
        v27 = v26 - 2;
        if ( !v27 )
          goto LABEL_43;
        v28 = v27 - 1;
        if ( !v28 )
        {
LABEL_42:
          v30 = (v24 & 1) == 0;
          goto LABEL_44;
        }
        v29 = v28 - 2;
        if ( v29 )
        {
          if ( v29 != 1 )
            goto LABEL_18;
          goto LABEL_42;
        }
      }
LABEL_43:
      v30 = (v24 & 2) == 0;
LABEL_44:
      if ( !v30 )
        goto LABEL_45;
      goto LABEL_18;
    }
  }
  if ( a3 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v10 = 0LL;
    if ( v9 != DesktopWindow )
      v10 = v9;
    if ( v10 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v40;
      *((_QWORD *)&v40 + 1) = v10;
      HMLockObject(v10);
      v12 = xxxSendMessage(
              v10,
              0x20u,
              a2,
              (struct _LARGE_STRING *)((unsigned __int16)a3 | ((unsigned __int16)a4 << 16)));
      ThreadUnlock1(v14, v13, v15);
      if ( v12 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_18;
    v16 = HMValidateHandleNoSecure(a2, 1);
    if ( v16 )
    {
      if ( a3 == -2 )
      {
        v19 = a4 - 512;
        if ( !v19 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL, 4294967294LL);
          goto LABEL_18;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 3;
          if ( v21 )
          {
            v22 = v21 - 3;
            if ( v22 )
            {
              if ( v22 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
          xxxActivateEnabledPopup(a1);
          if ( v23 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
LABEL_18:
        v17 = (struct tagCURSOR *)gasyscur[1];
        goto LABEL_13;
      }
      if ( a3 != 1 )
        goto LABEL_18;
      v17 = *(struct tagCURSOR **)(*(_QWORD *)(v16 + 136) + 88LL);
      if ( v17 )
LABEL_13:
        zzzSetCursor(v17);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_45:
    v31 = (struct tagCURSOR *)gasyscur[484];
    goto LABEL_46;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_52:
      v31 = (struct tagCURSOR *)gasyscur[346];
      goto LABEL_46;
    }
    if ( a3 == 14 )
    {
LABEL_51:
      v31 = (struct tagCURSOR *)gasyscur[415];
      goto LABEL_46;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_4;
        goto LABEL_52;
      }
      goto LABEL_51;
    }
  }
  v31 = *(struct tagCURSOR **)(gasyscur[0] + 4424LL);
LABEL_46:
  v32 = HMValidateHandleNoSecure(a2, 1);
  v33 = (struct tagWND *)v32;
  if ( !v32 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 30LL) & 8) != 0 )
  {
    v42[2] = 0LL;
    v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v42[0] = *(_QWORD *)(v34 + 408);
    *(_QWORD *)(v34 + 408) = v42;
    v42[1] = v33;
    HMLockObject(v33);
    SysMenu = xxxGetSysMenu(v33, 1);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v38, v37, v39);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v31);
  return 1LL;
}
