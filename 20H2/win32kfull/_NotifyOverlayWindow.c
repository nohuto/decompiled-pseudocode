/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01D7450
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D5DB0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0274898 (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // r8d
  unsigned int v5; // r9d
  int v6; // r10d
  bool v7; // zf
  void *v8; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = 0;
  v4 = gcOverlays;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
  if ( a2 )
  {
    if ( (v6 & 0x400) == 0 )
    {
      if ( gcOverlays + 1 >= (unsigned int)gcOverlays )
      {
        ++gcOverlays;
        v2 = 1;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) |= 0x400u;
        v7 = v4 == 0;
LABEL_9:
        LOBYTE(v3) = v7;
LABEL_11:
        v5 = v2;
        goto LABEL_13;
      }
      goto LABEL_10;
    }
  }
  else if ( (v6 & 0x400) != 0 )
  {
    if ( gcOverlays )
    {
      v2 = 1;
      --gcOverlays;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~0x400u;
      v7 = v4 == 1;
      goto LABEL_9;
    }
LABEL_10:
    gcOverlays = -1;
    goto LABEL_11;
  }
  v2 = 1;
LABEL_13:
  if ( v2 )
  {
    if ( v5 )
      FixupOverlayWindowAttributes((struct tagWND *)a1);
    if ( v3 )
    {
      v8 = (void *)ReferenceDwmApiPort(a1);
      DwmAsyncNotifyWindowShadowChange(v8);
      xxxSendNotifyMessage(-1LL, 0x1Au, 4133LL, 0LL, 1);
    }
  }
  return v2;
}
