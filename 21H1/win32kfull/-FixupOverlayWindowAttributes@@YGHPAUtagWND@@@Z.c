/*
 * XREFs of ?FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z @ 0x144E9E
 * Callers:
 *     __NotifyOverlayWindow@8 @ 0x145F10 (__NotifyOverlayWindow@8.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _SetWindowCompositionVideoOverlayActive@8 @ 0x1794CB (_SetWindowCompositionVideoOverlayActive@8.c)
 */

BOOL __thiscall FixupOverlayWindowAttributes(void *this)
{
  int v1; // ebx
  int TopLevelWindow; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  unsigned int i; // ecx
  int v8; // eax
  _DWORD v10[5]; // [esp+Ch] [ebp-1Ch] BYREF
  struct tagBWL *v11; // [esp+20h] [ebp-8h]
  unsigned int *v12; // [esp+24h] [ebp-4h]

  v1 = 0;
  TopLevelWindow = _GetTopLevelWindow((int)this);
  v3 = TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_DWORD *)(TopLevelWindow + 20);
    v5 = (int)(*(_DWORD *)(v4 + 144) << 21) >> 31;
    if ( (*(_DWORD *)(v4 + 144) & 0x400) != 0 )
    {
LABEL_12:
      memset(&v10[1], 0, 16);
      v10[0] = v5;
      return SetWindowCompositionVideoOverlayActive(v3, v10) >= 0;
    }
    v6 = BuildHwndList(v3, 1, 0);
    v11 = (struct tagBWL *)v6;
    if ( v6 )
    {
      v12 = (unsigned int *)(v6 + 16);
      for ( i = *(_DWORD *)(v6 + 16); i != 1; i = *v12 )
      {
        v8 = HMValidateHandleNoSecure(i, 1);
        if ( v8 && (*(_DWORD *)(*(_DWORD *)(v8 + 20) + 144) & 0x400) != 0 )
        {
          v5 = 1;
          break;
        }
        ++v12;
      }
      FreeHwndList(v11);
      goto LABEL_12;
    }
  }
  return v1;
}
