/*
 * XREFs of _FreeSpb@4 @ 0x17E3AE
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _FreeAllSpbs@0 @ 0xB246C (_FreeAllSpbs@0.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     ?SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z @ 0x17E205 (-SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z.c)
 *     _RestoreSpb@12 @ 0x17E510 (_RestoreSpb@12.c)
 *     _SpbCheckPwnd@4 @ 0x17E6EC (_SpbCheckPwnd@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?PostSpbApc@@YIXPAU_KAPC@@PAUtagWND@@K@Z @ 0x17E169 (-PostSpbApc@@YIXPAU_KAPC@@PAUtagWND@@K@Z.c)
 *     _GreSaveScreenBits@16 @ 0x1FD449 (_GreSaveScreenBits@16.c)
 */

char __thiscall FreeSpb(char *this)
{
  char result; // al
  char v3; // bl
  char *v4; // ecx
  char *i; // edx
  struct tagWND **v6; // edi
  int v7; // edx
  char v8; // al
  unsigned int v9; // ecx
  struct tagWND *v10; // edx
  _DWORD *j; // esi
  char v12; // [esp+Fh] [ebp-1h]

  result = 0;
  v3 = 0;
  v12 = 0;
  if ( !this )
    return result;
  if ( (this[32] & 1) != 0 )
  {
    if ( GreIsVisRgnPublishLocked(*(_DWORD *)(_gpDispInfo + 20)) )
      v3 = 1;
    else
      GreSaveScreenBits(*((_DWORD *)this + 9), 0);
  }
  else if ( *((_DWORD *)this + 2) )
  {
    GreDeleteObject(*((_DWORD *)this + 2));
  }
  if ( *((_DWORD *)this + 7) )
    GreDeleteObject(*((_DWORD *)this + 7));
  v4 = (char *)(_gpDispInfo + 16);
  for ( i = *(char **)(_gpDispInfo + 16); i != this; i = *(char **)i )
    v4 = i;
  v6 = (struct tagWND **)(this + 4);
  *(_DWORD *)v4 = *(_DWORD *)this;
  v7 = *((_DWORD *)this + 1);
  if ( v7 )
  {
    SetOrClrWF(0, v7, 0x80u, 1);
    if ( !ExIsResourceAcquiredExclusiveLite(_gpresUser) && ExIsResourceAcquiredSharedLite(_gpresUser) )
    {
      v8 = 1;
      v12 = 1;
      goto LABEL_18;
    }
    HMAssignmentUnlock(this + 4);
  }
  v8 = 0;
LABEL_18:
  if ( v3 )
  {
    v9 = *((_DWORD *)this + 9);
  }
  else
  {
    if ( !v8 )
    {
      if ( *((_DWORD *)this + 10) )
        Win32FreePool(*((_DWORD *)this + 10));
      goto LABEL_30;
    }
    v9 = 0;
  }
  if ( v8 )
    v10 = *v6;
  else
    v10 = 0;
  PostSpbApc(*((struct _KAPC **)this + 10), v10, v9);
  if ( v12 )
    *v6 = 0;
  *((_DWORD *)this + 10) = 0;
LABEL_30:
  Win32FreePool(this);
  result = _gpDispInfo;
  if ( !*(_DWORD *)(_gpDispInfo + 16) )
  {
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    for ( j = *(_DWORD **)(_gpDispInfo + 12); j; j = (_DWORD *)*j )
      GreGetBounds(j[1], 0, 2);
    return GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  }
  return result;
}
