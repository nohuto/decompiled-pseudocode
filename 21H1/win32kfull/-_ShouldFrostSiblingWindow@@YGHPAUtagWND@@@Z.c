/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z @ 0x16FD0E
 * Callers:
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 */

int __thiscall _ShouldFrostSiblingWindow(_DWORD *this)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  _DWORD *v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0;
  v3 = (_DWORD *)this[2];
  v7 = (_DWORD *)v3[58];
  v8 = this[5];
  if ( (*(_BYTE *)(v8 + 22) & 0xC0) == 0xC0
    && !IsWindowBeingDestroyed(this)
    && (*(_BYTE *)(v8 + 23) & 0x10) != 0
    && v3[62] == _grpdeskRitInput
    && !IsGhostWindowClass(this)
    && !_GetProp((int)this, *(unsigned __int16 *)(_gpsi + 500), 1)
    && !_GetProp((int)this, *(unsigned __int16 *)(_gpsi + 978), 1)
    && (*(_DWORD *)(v3[58] + 8) & 0x8000000) == 0
    && *v7 != _gpepCSRSS
    && !IsProcessDwm(*v7) )
  {
    v4 = 0;
    if ( v3[85] <= 0x9900u )
      v4 = v3[88];
    if ( ((unsigned int)&loc_80000 & v4) == 0 && this != (_DWORD *)_GetDesktopWindow(this) )
    {
      v5 = v3[63];
      if ( this != *(_DWORD **)(v5 + 84) && this != *(_DWORD **)(v5 + 92) )
        return 1;
    }
  }
  return v2;
}
