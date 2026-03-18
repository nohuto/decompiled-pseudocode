/*
 * XREFs of __NotifyOverlayWindow@8 @ 0x145F10
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     ?FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z @ 0x144E9E (-FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z.c)
 *     _ULongSub@12 @ 0x145E8B (_ULongSub@12.c)
 *     _DwmAsyncNotifyWindowShadowChange@4 @ 0x1D2505 (_DwmAsyncNotifyWindowShadowChange@4.c)
 */

int __stdcall _NotifyOverlayWindow(_DWORD *a1, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  bool v7; // zf
  void *v8; // eax
  unsigned int v10; // [esp+0h] [ebp-10h]
  unsigned int *v11; // [esp+4h] [ebp-Ch]
  int v12; // [esp+18h] [ebp+8h]

  v3 = 0;
  if ( !a1 )
    return v3;
  v4 = 0;
  v12 = gcOverlays;
  v5 = 0;
  v6 = *(_DWORD *)(a1[5] + 144);
  if ( a2 )
  {
    if ( (v6 & 0x400) == 0 )
    {
      if ( (ULongAdd(1, gcOverlays, &gcOverlays, v10, v11) & 0x80000000) == 0 )
      {
        v3 = 1;
        *(_DWORD *)(a1[5] + 144) |= 0x400u;
        v7 = v12 == 0;
LABEL_9:
        LOBYTE(v5) = v7;
        goto LABEL_10;
      }
      goto LABEL_10;
    }
  }
  else if ( (v6 & 0x400) != 0 )
  {
    if ( ULongSub((ULONG)&gcOverlays, v10, v11) >= 0 )
    {
      v3 = 1;
      v5 = 0;
      *(_DWORD *)(a1[5] + 144) &= ~0x400u;
      v7 = v12 == 1;
      goto LABEL_9;
    }
LABEL_10:
    v4 = v3;
    goto LABEL_12;
  }
  v3 = 1;
LABEL_12:
  if ( v3 )
  {
    if ( v4 )
      FixupOverlayWindowAttributes(a1);
    if ( v5 )
    {
      v8 = (void *)ReferenceDwmApiPort();
      DwmAsyncNotifyWindowShadowChange(v8);
      xxxSendNotifyMessage(-1, 0x1Au, (struct tagWND *)0x1025, 0, 1u);
    }
  }
  return v3;
}
