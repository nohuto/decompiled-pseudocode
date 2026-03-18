/*
 * XREFs of _xxxProcessSetWindowPosEvent@4 @ 0x16FEA
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??9?$RedirectedFieldhMonitor@PAUHMONITOR__@@@tagWND@@QBEEABQAUHMONITOR__@@@Z @ 0x13F41E (--9-$RedirectedFieldhMonitor@PAUHMONITOR__@@@tagWND@@QBEEABQAUHMONITOR__@@@Z.c)
 */

int __thiscall xxxProcessSetWindowPosEvent(int this)
{
  int v2; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // [esp+8h] [ebp-4h]

  v2 = InternalBeginDeferWindowPos(*(_DWORD *)(this + 16));
  if ( !v2 )
    return Win32FreePool(this);
  memcpy(*(void **)(v2 + 24), *(const void **)(this + 24), *(_DWORD *)(this + 16) << 7);
  v5 = *(_DWORD *)(this + 16);
  v6 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 16) = v5;
  while ( 1 )
  {
    v7 = --v5;
    if ( v5 < 0 )
      break;
    if ( (*(_BYTE *)(v6 + 120) & 0x20) != 0 && *(_DWORD *)v6 )
    {
      LOBYTE(v4) = 1;
      v4 = HMValidateHandleNoSecure(*(_DWORD *)v6, v4);
      if ( v4 )
      {
        if ( (unsigned __int8)tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(v6 + 96) )
          *(_DWORD *)(v6 + 96) = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 164);
      }
      v5 = v7;
    }
    v6 += 128;
  }
  xxxEndDeferWindowPosEx(v2, 0);
  return Win32FreePool(this);
}
