/*
 * XREFs of _xxxActiveWindowTracking@12 @ 0x14ECA1
 * Callers:
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 * Callees:
 *     _IsForegroundLocked@0 @ 0x195B8 (_IsForegroundLocked@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z @ 0x141930 (-xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 */

int __fastcall xxxActiveWindowTracking(_DWORD *a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v5; // ecx
  int v6; // eax
  _DWORD *ActiveTrackPwnd; // eax
  _DWORD *v8; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // eax
  int v12; // esi
  int v14; // [esp+10h] [ebp-Ch] BYREF
  _DWORD *v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v5 = *(_DWORD *)(a1[2] + 236);
  v6 = *(_DWORD *)(v5 + 284);
  if ( (((unsigned int)&loc_1FFFFC + 4) & v6) == 0 )
    return 0;
  *(_DWORD *)(v5 + 284) = v6 & 0xFFDFFFFF;
  if ( IsForegroundLocked() )
    return 0;
  ActiveTrackPwnd = GetActiveTrackPwnd(a1);
  v8 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0;
  if ( a1 != ActiveTrackPwnd )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v14 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v14;
    v15 = v8;
    HMLockObject(v8);
  }
  v11 = xxxSendMessage(v8, *v8, a3 | (a2 << 16));
  v12 = v11;
  if ( v11 <= 0 )
    goto LABEL_9;
  if ( v11 > 2 )
  {
    if ( v11 != 4 )
    {
LABEL_9:
      v12 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v12 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow(v8) || v12 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( a1 != v8 )
    ThreadUnlock1();
  return v12;
}
