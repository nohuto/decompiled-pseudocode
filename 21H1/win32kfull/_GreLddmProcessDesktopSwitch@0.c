/*
 * XREFs of _GreLddmProcessDesktopSwitch@0 @ 0xB2310
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 */

int __stdcall GreLddmProcessDesktopSwitch()
{
  int IsRemoteConnection; // ebx
  int i; // eax
  int v2; // esi
  int v3; // eax
  int v5; // [esp+8h] [ebp-8h] BYREF
  char v6; // [esp+Fh] [ebp-1h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  IsRemoteConnection = UserIsRemoteConnection();
  for ( i = hdevEnumerate(0); ; i = hdevEnumerate(v2) )
  {
    v2 = i;
    if ( !i )
      break;
    v3 = *(_DWORD *)(i + 24);
    v5 = v2;
    if ( (v3 & 1) != 0
      && ((unsigned int)&loc_20400 & v3) == 0
      && (PDEVOBJ::bLddmDriver((PDEVOBJ *)&v5) || IsRemoteConnection) )
    {
      GreLockVisRgn(v2);
      GreLockDisplayDevice(v2);
      ((void (__stdcall *)(_DWORD, _DWORD, int))_gDxgkInterface[51])(
        *(_DWORD *)(*(_DWORD *)(v2 + 1832) + 200),
        *(_DWORD *)(*(_DWORD *)(v2 + 1832) + 212),
        IsRemoteConnection);
      GreUnlockDisplayDevice(v2);
      GreUnlockVisRgn(v2);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  return GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
}
