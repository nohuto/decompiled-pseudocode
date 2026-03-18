/*
 * XREFs of _GreDxDwmShutdown@0 @ 0x1D4492
 * Callers:
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 */

int __stdcall GreDxDwmShutdown()
{
  int result; // eax
  int HDEV; // eax
  int i; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // [esp+0h] [ebp-8h] BYREF
  char v7; // [esp+7h] [ebp-1h] BYREF

  result = UserIsWddmConnectedSession();
  if ( result )
  {
    _gDxgkInterface[15]((void *)-1);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    HDEV = UserGetHDEV();
    GreLockVisRgn(HDEV);
    for ( i = hdevEnumerate(0); ; i = hdevEnumerate(v4) )
    {
      v4 = i;
      if ( !i )
        break;
      v3 = *(_DWORD *)(i + 24);
      v6 = v4;
      if ( (v3 & 1) != 0 && ((unsigned int)&loc_20400 & v3) == 0 && PDEVOBJ::bLddmDriver((PDEVOBJ *)&v6) )
      {
        GreLockDisplayDevice(v4);
        if ( ((unsigned __int8 (__stdcall *)(_DWORD, _DWORD))_gDxgkInterface[36])(
               *(_DWORD *)(*(_DWORD *)(v4 + 1832) + 200),
               *(_DWORD *)(*(_DWORD *)(v4 + 1832) + 212)) )
        {
          if ( *(_DWORD *)(v4 + 1920) )
          {
            DrvDxgkDisplayOnOff(v4, 1, 3);
            (*(void (__stdcall **)(_DWORD, int))(v4 + 1920))(*(_DWORD *)(v4 + 1108), 1);
          }
        }
        GreUnlockDisplayDevice(v4);
      }
    }
    v5 = UserGetHDEV();
    GreUnlockVisRgn(v5);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return result;
}
