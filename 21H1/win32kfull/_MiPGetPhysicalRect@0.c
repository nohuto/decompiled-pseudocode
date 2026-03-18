/*
 * XREFs of _MiPGetPhysicalRect@0 @ 0xCB4FC
 * Callers:
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     ?MiPConvertPoint@@YG?AUtagPOINT@@PBU1@@Z @ 0x14D3EC (-MiPConvertPoint@@YG-AUtagPOINT@@PBU1@@Z.c)
 * Callees:
 *     _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24 (_VirtualizeMultiMonDigitizerSize@4.c)
 */

_DWORD *__stdcall MiPGetPhysicalRect(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v3; // [esp+1Ch] [ebp-10h]
  int v4; // [esp+20h] [ebp-Ch]
  int v5; // [esp+24h] [ebp-8h]

  v1 = (_DWORD *)RIMGetVirtualDesktopPhysicalSize();
  v3 = v1[1];
  v4 = v1[2];
  v5 = v1[3];
  *a1 = *v1;
  a1[1] = v3;
  a1[2] = v4;
  a1[3] = v5;
  if ( *(_DWORD *)*_gpDispInfo > 1u )
    VirtualizeMultiMonDigitizerSize(a1);
  return a1;
}
