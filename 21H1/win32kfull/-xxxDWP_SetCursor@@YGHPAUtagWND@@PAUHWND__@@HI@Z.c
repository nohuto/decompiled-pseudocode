/*
 * XREFs of ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     __GetMenuState@12 @ 0xBFC42 (__GetMenuState@12.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     _xxxActiveWindowTracking@12 @ 0x14ECA1 (_xxxActiveWindowTracking@12.c)
 *     _xxxActivateEnabledPopup@4 @ 0x1A1E3A (_xxxActivateEnabledPopup@4.c)
 *     _xxxFlashEnabledPopup@4 @ 0x1A1F03 (_xxxFlashEnabledPopup@4.c)
 */

int __userpurge xxxDWP_SetCursor@<eax>(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        HWND a4,
        int a5,
        unsigned int a6)
{
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // edx
  void *v11; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // esi
  int v15; // ecx
  void *v16; // ecx
  void *v18; // esi
  int v19; // eax
  int v20; // edi
  PKTHREAD v21; // eax
  int v22; // eax
  int v23; // ecx
  int MenuState; // ebx
  char v25; // cl
  bool v26; // zf
  int v27; // esi
  int v28; // [esp-4h] [ebp-2Ch]
  ShellWindowManagement *v29; // [esp+0h] [ebp-28h]
  const struct tagDESKTOP *v30; // [esp+4h] [ebp-24h]
  unsigned int v31; // [esp+8h] [ebp-20h]
  int v32; // [esp+Ch] [ebp-1Ch] BYREF
  void *v33; // [esp+10h] [ebp-18h]
  int v34; // [esp+14h] [ebp-14h]
  _DWORD v35[3]; // [esp+18h] [ebp-10h] BYREF
  unsigned int v36; // [esp+24h] [ebp-4h]

  v36 = a1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( !a4 )
  {
LABEL_4:
    v7 = 0;
    if ( (*(_BYTE *)(a2[5] + 23) & 0xC0) == 0x40 )
      v8 = a2[14];
    else
      v8 = 0;
    v9 = a2[3];
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 4);
      if ( v10 )
        v7 = *(_DWORD *)(v10 + 12);
    }
    v11 = v7 != v8 ? (void *)v8 : 0;
    if ( v11 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v32 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v32;
      v33 = v11;
      HMLockObject(v11);
      v14 = xxxSendMessage(v11, v36, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16));
      ThreadUnlock1();
      if ( v14 )
        return 1;
    }
    if ( !a4 )
      goto LABEL_31;
    v15 = HMValidateHandleNoSecure(v36, 1);
    if ( v15 )
    {
      if ( a3 == (struct tagWND *)-2 )
      {
        if ( a4 == (HWND)512 )
        {
          if ( ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a2, 32, -2);
          goto LABEL_31;
        }
        if ( a4 == (HWND)513 )
        {
          v27 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64);
          xxxActivateEnabledPopup(a2);
          if ( v27 != *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64) )
            goto LABEL_31;
        }
        else if ( a4 != (HWND)516 && a4 != (HWND)519 && a4 != (HWND)523 )
        {
          goto LABEL_31;
        }
        xxxFlashEnabledPopup(a2);
        goto LABEL_31;
      }
      if ( a3 != (struct tagWND *)1 )
        goto LABEL_31;
      v16 = *(void **)(*(_DWORD *)(v15 + 76) + 52);
      if ( v16 )
LABEL_16:
        zzzSetCursor(v16);
    }
    return 0;
  }
  if ( !ShellWindowManagement::BehaviorEnabled(v29, v30, v31) || (v25 = *(_BYTE *)(a2[5] + 145), (v25 & 3) == 0) )
  {
    switch ( (unsigned int)a3 )
    {
      case 0xAu:
      case 0xBu:
        goto LABEL_20;
      case 0xCu:
      case 0xFu:
        v18 = *(void **)(_gasyscur[0] + 4292);
        goto LABEL_21;
      case 0xDu:
      case 0x11u:
        v18 = (void *)_gasyscur[671];
        goto LABEL_21;
      case 0xEu:
      case 0x10u:
        v18 = (void *)_gasyscur[805];
        goto LABEL_21;
      default:
        goto LABEL_4;
    }
  }
  if ( a3 != (struct tagWND *)10 )
  {
    if ( a3 == (struct tagWND *)11 )
      goto LABEL_39;
    if ( a3 == (struct tagWND *)13 )
      goto LABEL_40;
    if ( a3 == (struct tagWND *)14 )
    {
LABEL_39:
      v26 = (v25 & 1) == 0;
      goto LABEL_41;
    }
    if ( a3 != (struct tagWND *)16 )
    {
      if ( a3 == (struct tagWND *)17 )
        goto LABEL_39;
LABEL_31:
      v16 = (void *)_gasyscur[1];
      goto LABEL_16;
    }
  }
LABEL_40:
  v26 = (v25 & 2) == 0;
LABEL_41:
  if ( v26 )
    goto LABEL_31;
LABEL_20:
  v18 = (void *)_gasyscur[939];
LABEL_21:
  v19 = HMValidateHandleNoSecure(v36, 1);
  v20 = v19;
  if ( !v19 )
    return 0;
  if ( (*(_BYTE *)(*(_DWORD *)(v19 + 20) + 22) & 8) != 0 )
  {
    v35[2] = 0;
    v21 = KeGetCurrentThread();
    v22 = W32GetThreadWin32Thread(v21);
    v35[0] = *(_DWORD *)(v22 + 228);
    *(_DWORD *)(v22 + 228) = v35;
    v35[1] = v20;
    HMLockObject(v20);
    v28 = v23;
    xxxGetSysMenu(v23);
    MenuState = _GetMenuState(v28);
    ThreadUnlock1();
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_31;
  }
  zzzSetCursor(v18);
  return 1;
}
