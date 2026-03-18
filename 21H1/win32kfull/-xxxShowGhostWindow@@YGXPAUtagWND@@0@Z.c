/*
 * XREFs of ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2
 * Callers:
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _DwmAsyncNotifyAnimationChange@12 @ 0xB5164 (_DwmAsyncNotifyAnimationChange@12.c)
 *     ?xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z @ 0xC26E2 (-xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z.c)
 *     _DwmAsyncGhostChange@12 @ 0xC2724 (_DwmAsyncGhostChange@12.c)
 *     ?_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z @ 0xC2790 (-_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall xxxShowGhostWindow(int a1, int *a2)
{
  int v3; // esi
  char v4; // al
  int v5; // eax
  int v6; // edx
  int *v7; // esi
  struct tagQ *v8; // esi
  int v9; // ecx
  BOOL v10; // eax
  int v11; // edi
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  int v16; // eax
  int v17; // [esp-4h] [ebp-3Ch]
  int v18; // [esp-4h] [ebp-3Ch]
  int v19; // [esp-4h] [ebp-3Ch]
  int v20; // [esp-4h] [ebp-3Ch]
  struct tagWND *v21; // [esp+0h] [ebp-38h]
  struct tagWND *v22; // [esp+4h] [ebp-34h]
  int v23; // [esp+10h] [ebp-28h]
  int v24; // [esp+10h] [ebp-28h]
  struct tagQ *v25; // [esp+14h] [ebp-24h] BYREF
  BOOL v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch]
  int v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+24h] [ebp-14h] BYREF
  int v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-Ch]
  int v32; // [esp+30h] [ebp-8h]

  v23 = 0;
  v26 = 0;
  v25 = (struct tagQ *)a1;
  v27 = 99;
  v3 = a2[5];
  v4 = *(_BYTE *)(v3 + 23);
  if ( (v4 & 0x20) != 0 )
    v23 = 1;
  else
    v26 = (v4 & 1) != 0;
  v5 = a2[2];
  if ( v5 && (v6 = *(_DWORD *)(v5 + 236), v6 == _gpqForeground) && *(int **)(v6 + 64) == a2 )
  {
    v16 = *(_DWORD *)(a1 + 8);
    v28 = 96;
    *(_DWORD *)(v16 + 264) |= 0x20u;
    v3 = a2[5];
  }
  else
  {
    v27 = 115;
    v28 = 112;
  }
  if ( *(char *)(v3 + 18) < 0 )
  {
    SetOrClrWF(1, a1, 0xA80u, 1);
    v3 = a2[5];
  }
  v7 = (int *)(v3 + 52);
  v29 = *v7++;
  v30 = *v7++;
  v31 = *v7;
  v32 = v7[1];
  v8 = v25;
  xxxEnableChildWindowDpiMessageX(v25, (struct tagWND *)1);
  v9 = a2[5];
  if ( (*(_DWORD *)(v9 + 184) & 0xF) != 2 )
  {
    v25 = (struct tagQ *)ValidateHmonitor(*(_DWORD *)(v9 + 164));
    LogicalToPhysicalDPIRect(&v29, &v29, *(_DWORD *)(a2[5] + 184), &v25);
    v10 = v26;
    if ( !v26 )
    {
      v11 = v28;
      goto LABEL_11;
    }
    xxxSetWindowPos((int)v8, 0, v29, v30, v31 - v29, v32 - v30, 20);
  }
  v10 = v26;
  v11 = v27;
LABEL_11:
  if ( v23 )
  {
    xxxMinMaximizeEx(v8, (struct tagWND *)7, 1u, 0, 0, 0);
LABEL_13:
    _CopyWindowCheckpoint(v21, v22);
    v11 |= 2u;
    goto LABEL_14;
  }
  if ( v10 )
  {
    xxxMinMaximizeEx(v8, (struct tagWND *)3, 1u, 0, 0, 0);
    goto LABEL_13;
  }
LABEL_14:
  v25 = (struct tagQ *)IsWindowDesktopComposed(a2);
  if ( v25 )
  {
    v17 = *(_DWORD *)v8;
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncGhostChange(v12, v17);
    v18 = *a2;
    v13 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v13, 0, v18);
    v19 = *(_DWORD *)v8;
    v14 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v14, 0, v19);
  }
  SetOrClrWF(0, (int)v8, 0xE01u, 1);
  if ( (*(_BYTE *)(a2[5] + 12) & 0x20) != 0 )
  {
    SetOrClrWF(0, (int)a2, 0x420u, 1);
    SetOrClrWF(1, (int)v8, 0x420u, 1);
    v24 = 1;
  }
  else
  {
    v24 = (int)a2;
  }
  SetVisible(a2, 0x10u);
  xxxWindowEvent(0x8003u, (struct tagEVENTHOOK *)a2, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
  xxxSetWindowPos((int)v8, v24, v29, v30, v31 - v29, v32 - v30, v11);
  xxxNotifyShellOfWindowSwap(v21, v22);
  if ( v25 )
  {
    v20 = *(_DWORD *)v8;
    v15 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v15, 1, v20);
  }
}
