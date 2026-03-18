/*
 * XREFs of _xxxSwitchWndProc@16 @ 0x15DF4B
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     ?xxxWrapSwitchWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA6A (-xxxWrapSwitchWndProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall xxxSwitchWndProc(int a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // ecx
  __int16 v7; // ax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ebx
  int v17; // eax
  _DWORD v18[3]; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+14h] [ebp-4h]
  int v20; // [esp+20h] [ebp+8h]

  v18[2] = 0;
  v5 = _gptiCurrent;
  v19 = _gptiCurrent;
  v6 = *(_DWORD *)(a1 + 20);
  if ( (*(_DWORD *)(v6 + 144) & 0x800) != 0 )
    return 0;
  v7 = *(_WORD *)(v6 + 30);
  if ( v7 != 672 )
  {
    if ( v7 )
      return 0;
    if ( a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v9 = *(_DWORD *)(v6 + 160);
    v10 = *(unsigned __int16 *)(_gpsi + 176);
    if ( v9 + 204 >= v10 )
    {
      v16 = *(_DWORD *)(a1 + 164);
      if ( v16 )
      {
        v17 = 0;
        if ( v9 )
        {
          while ( !*(_BYTE *)(v16 + v17) )
          {
            if ( ++v17 >= v9 )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v6 = *(_DWORD *)(a1 + 20);
        }
LABEL_23:
        memset(*(void **)(a1 + 164), 0, *(_DWORD *)(v6 + 160));
      }
    }
    else
    {
      if ( v9 + *(_DWORD *)(v6 + 128) + 204 < v10 )
        return 0;
      v11 = v10 - 204;
      v12 = Win32AllocPoolZInit(v11, 1937208149);
      v20 = v12;
      if ( !v12 )
        return 0;
      v13 = *(_DWORD *)(a1 + 164);
      if ( v13 )
      {
        v14 = 0;
        v15 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 160);
        if ( v15 )
        {
          while ( !*(_BYTE *)(v13 + v14) )
          {
            if ( ++v14 >= v15 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
LABEL_15:
        Win32FreePool(*(_DWORD *)(a1 + 164));
        v12 = v20;
      }
      *(_DWORD *)(a1 + 164) = v12;
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 160) = v11;
    }
    v5 = v19;
    *(_WORD *)(*(_DWORD *)(a1 + 20) + 30) = 672;
  }
  **(_DWORD **)(a1 + 164) = a1;
  if ( a2 == 1 )
  {
    zzzSetCursor(*(void **)(*(_DWORD *)(a1 + 76) + 52));
    return xxxDefWindowProc(a1, a2, a3, a4);
  }
  if ( a2 == 16 )
  {
    xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 151);
    xxxCancelCoolSwitch();
    return xxxDefWindowProc(a1, a2, a3, a4);
  }
  if ( a2 != 20 && a2 != 58 )
    return xxxDefWindowProc(a1, a2, a3, a4);
  v18[0] = *(_DWORD *)(v5 + 228);
  *(_DWORD *)(v5 + 228) = v18;
  v18[1] = a1;
  HMLockObject(a1);
  xxxPaintSwitchWindow((_DWORD *)a1);
  ThreadUnlock1();
  return 0;
}
