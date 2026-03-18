/*
 * XREFs of _QueryTrackMouseEvent@4 @ 0x9A940
 * Callers:
 *     _NtUserTrackMouseEvent@4 @ 0x9A894 (_NtUserTrackMouseEvent@4.c)
 * Callees:
 *     <none>
 */

int __thiscall QueryTrackMouseEvent(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  int result; // eax

  v1 = *(_DWORD **)(_gptiCurrent + 248);
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *this = 16;
  v2 = v1[6];
  if ( (v2 & 0xC0) == 0 || *(_DWORD *)(_gptiCurrent + 236) != *(_DWORD *)(*(_DWORD *)(v1[25] + 8) + 236) )
    return 1;
  result = 1;
  if ( v1[26] != 1 )
  {
    this[1] |= 0x10u;
    v2 = v1[6];
  }
  if ( (v2 & 0x80u) != 0 )
  {
    this[1] |= 2u;
    v2 = v1[6];
  }
  if ( (v2 & 0x40) != 0 )
  {
    this[1] |= 1u;
    this[3] = v1[31];
  }
  this[2] = *(_DWORD *)v1[25];
  return result;
}
