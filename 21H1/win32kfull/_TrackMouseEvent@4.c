/*
 * XREFs of _TrackMouseEvent@4 @ 0x9A9BE
 * Callers:
 *     _NtUserTrackMouseEvent@4 @ 0x9A894 (_NtUserTrackMouseEvent@4.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z @ 0xC4DB2 (-ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z.c)
 */

int __thiscall TrackMouseEvent(_DWORD *this)
{
  _DWORD *v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // edi
  int v5; // edx
  int v7; // eax
  int v8; // ecx
  struct tagPOINT v9; // [esp-4h] [ebp-1Ch]

  v2 = *(_DWORD **)(_gptiCurrent + 248);
  v3 = ValidateHwnd(this[2]);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( v3 == v2[25] && (v5 = this[1], (v2[26] != 1) == (((unsigned int)v5 >> 4) & 1)) )
  {
    if ( v5 < 0 )
    {
      if ( (v5 & 2) != 0 )
      {
        v2[6] &= ~0x80u;
        v5 = this[1];
      }
      if ( (v5 & 1) != 0 && (v2[6] & 0x40) != 0 )
      {
        FindTimer(v3, 65530, 2u, 1, 0);
        v2[6] &= ~0x40u;
      }
    }
    else
    {
      if ( (v5 & 2) != 0 )
      {
        v2[6] |= 0x80u;
        v5 = this[1];
      }
      if ( (v5 & 1) != 0 )
      {
        v2[6] |= 0x40u;
        v7 = this[3];
        v2[31] = v7;
        if ( !v7 || v7 == -1 )
          v2[31] = gdtMouseHover;
        v9.x = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 420);
        ResetMouseHover(*(struct tagDESKTOP **)(*(_DWORD *)(v4 + 8) + 416), v9);
      }
    }
  }
  else
  {
    v8 = this[1];
    if ( (v8 & 0x80000002) == 2 )
      _PostMessage(v3, ((v8 & 0x10) == 0) | 0x2A2, 0, 0);
  }
  return 1;
}
