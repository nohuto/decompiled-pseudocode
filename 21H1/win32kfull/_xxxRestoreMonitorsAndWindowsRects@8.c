/*
 * XREFs of _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391
 * Callers:
 *     _xxxRestoreDesktopsMonitorsAndWindowsRects@8 @ 0xD23F0 (_xxxRestoreDesktopsMonitorsAndWindowsRects@8.c)
 * Callees:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 */

int __fastcall xxxRestoreMonitorsAndWindowsRects(_DWORD *a1, int a2)
{
  int *v3; // esi
  int *v4; // eax
  int v5; // edx
  const void *v6; // ecx
  int v7; // edi
  const void *v8; // eax
  int result; // eax
  int v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v16; // edx
  _DWORD *Prop; // eax
  PKTHREAD v18; // eax
  int v19; // eax
  _DWORD *v20; // [esp+10h] [ebp-30h]
  int i; // [esp+10h] [ebp-30h]
  int v22; // [esp+14h] [ebp-2Ch]
  _DWORD *v23; // [esp+18h] [ebp-28h]
  struct tagRECT *v24; // [esp+18h] [ebp-28h]
  int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-24h]
  int v27; // [esp+20h] [ebp-20h]
  int v28; // [esp+20h] [ebp-20h]
  int v29; // [esp+24h] [ebp-1Ch]
  _DWORD *v30; // [esp+24h] [ebp-1Ch]
  _DWORD v31[3]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v32[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( a1[5] != a2 || *(_DWORD *)*_gpDispInfo <= 1u )
    return 0;
  if ( !a1[2] || !a1[3] )
    return -1073741823;
  v3 = (int *)SnapshotMonitorRects();
  if ( !v3 )
    return -1073741801;
  v4 = (int *)a1[2];
  v22 = 0;
  v25 = 0;
  v29 = *v4;
  if ( *v4 > 0 )
  {
    v5 = *v3;
    v6 = v4 + 1;
    v27 = *v3;
    v20 = v4 + 1;
    while ( 1 )
    {
      v7 = 0;
      if ( v5 <= 0 )
        break;
      v8 = v3 + 1;
      v23 = v3 + 1;
      while ( !EqualRectInl(v6, v8) )
      {
        ++v7;
        v8 = v23 + 10;
        v23 += 10;
        if ( v7 >= v27 )
          goto LABEL_15;
        v6 = v20;
      }
      v6 = v20 + 10;
      ++v25;
      v20 += 10;
      if ( v25 >= v29 )
        goto LABEL_16;
      v5 = v27;
    }
LABEL_15:
    v22 = -1073741823;
  }
LABEL_16:
  Win32FreePool(v3);
  v24 = (struct tagRECT *)a1[2];
  result = v22;
  if ( v22 >= 0 )
  {
    v10 = InternalBeginDeferWindowPos(a1[4]);
    v28 = v10;
    if ( !v10 )
      return v22;
    memset(v32, 0, sizeof(v32));
    PushW32ThreadLock(v10, v32, (int)DestroySMWP);
    v26 = 0;
    v11 = a1[3];
    for ( i = v11; v26 < a1[4]; i += 40 )
    {
      if ( !v10 )
        break;
      v12 = (_DWORD *)HMValidateHandleNoSecure(*(_DWORD *)(v11 + 36), 1);
      v13 = (int)v12;
      v30 = v12;
      if ( v12
        && *(char *)(v12[5] + 16) >= 0
        && IsNonImmersiveBand(v12)
        && !HasImmersiveAppRight(*(_DWORD **)(*(_DWORD *)(v13 + 8) + 232)) )
      {
        v31[2] = 0;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v31[0] = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = v31;
        v31[1] = v13;
        HMLockObject(v13);
        v16 = i;
        if ( (*(_BYTE *)(i + 32) & 1) != 0 )
        {
          Prop = (_DWORD *)_GetProp(v13, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
          v16 = i;
          if ( Prop )
          {
            *Prop = *(_DWORD *)(i + 16);
            Prop[1] = *(_DWORD *)(i + 20);
            Prop[2] = *(_DWORD *)(i + 24);
            Prop[3] = *(_DWORD *)(i + 28);
            v10 = v28;
            v13 = (int)v30;
          }
        }
        v10 = xxxDeferWindowPosAndCheckPoint(
                v10,
                v13,
                v24,
                (struct tagWND *)v16,
                (*(_DWORD *)(v16 + 32) & 1) != 0 ? v16 + 16 : 0,
                20,
                1);
        v28 = v10;
        ThreadUnlock1();
      }
      v11 = i + 40;
      ++v26;
    }
    v18 = KeGetCurrentThread();
    v19 = W32GetThreadWin32Thread(v18);
    *(_DWORD *)(v19 + 8) = v32[0];
    if ( v10 )
    {
      xxxEndDeferWindowPosEx(v10, 1);
      return v22;
    }
    return -1073741801;
  }
  return result;
}
