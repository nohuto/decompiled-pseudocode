/*
 * XREFs of _SelectWindowRgn@12 @ 0x238DE
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxDesktopsRecalcAndBroadcastDisplayChange@16 @ 0xB0710 (_xxxDesktopsRecalcAndBroadcastDisplayChange@16.c)
 *     _NtUserSetWindowRgnEx@12 @ 0x16A206 (_NtUserSetWindowRgnEx@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?GetWindowCompositedDpi@@YGGPBUtagWND@@@Z @ 0x70750 (-GetWindowCompositedDpi@@YGGPBUtagWND@@@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     ?GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z @ 0x1B7171 (-GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z.c)
 */

struct tagMONITOR *__fastcall SelectWindowRgn(int a1, HRGN a2, int a3)
{
  int v4; // ebx
  HRGN MonitorRegionForDpi; // edi
  struct tagMONITOR *result; // eax
  struct PDEVOBJ *v7; // ecx
  int v8; // eax
  unsigned int v9; // [esp+0h] [ebp-Ch]
  const struct tagWND *v10; // [esp+0h] [ebp-Ch]
  struct tagMONITOR *v11; // [esp+0h] [ebp-Ch]
  int v12; // [esp+4h] [ebp-8h]
  unsigned __int16 v13; // [esp+4h] [ebp-8h]

  v4 = 0;
  MonitorRegionForDpi = a2;
  result = *(struct tagMONITOR **)(a1 + 20);
  if ( *((_DWORD *)result + 27) )
  {
    if ( (*((_BYTE *)result + 13) & 8) != 0 )
    {
      SetOrClrWF(0, a1, 0x508u, 1);
    }
    else
    {
      if ( a2 == (HRGN)2 )
        return result;
      GreDeleteObject(*((_DWORD *)result + 27));
      v4 = 1;
    }
    result = *(struct tagMONITOR **)(a1 + 20);
    *((_DWORD *)result + 27) = 0;
  }
  if ( (unsigned int)MonitorRegionForDpi > 1 )
  {
    if ( MonitorRegionForDpi == (HRGN)2 )
    {
      result = *(struct tagMONITOR **)(a1 + 20);
      if ( (*((_BYTE *)result + 23) & 1) == 0 )
        return result;
      if ( (*((_BYTE *)result + 11) & 0x40) == 0 )
        return result;
      result = _MonitorFromWindowInternal(0, v9, v12);
      if ( !result )
        return result;
      GetWindowCompositedDpi(v10);
      MonitorRegionForDpi = GetMonitorRegionForDpi(v11, v13);
      SetOrClrWF(1, a1, 0x508u, 1);
    }
    else
    {
      if ( a1 != _GetDesktopWindow(a1) )
        GreOffsetRgn(
          MonitorRegionForDpi,
          *(_DWORD *)(*(_DWORD *)(a1 + 20) + 52),
          *(_DWORD *)(*(_DWORD *)(a1 + 20) + 56));
      GreSetRegionOwner(MonitorRegionForDpi, 0);
      v4 = 1;
    }
    result = *(struct tagMONITOR **)(a1 + 20);
    *((_DWORD *)result + 27) = MonitorRegionForDpi;
  }
  if ( v4 )
  {
    result = (struct tagMONITOR *)IsWindowDesktopComposed(a1);
    if ( result )
    {
      if ( _IsTopLevelWindow(a1) )
      {
        v8 = *(_DWORD *)(a1 + 20);
        if ( (*(_BYTE *)(v8 + 18) & 8) != 0 )
          GreUpdateSpriteClipRgn(v7, *(_DWORD *)(v8 + 108), a3);
      }
      return (struct tagMONITOR *)DirtyVisRgnTrackers(a1);
    }
  }
  return result;
}
