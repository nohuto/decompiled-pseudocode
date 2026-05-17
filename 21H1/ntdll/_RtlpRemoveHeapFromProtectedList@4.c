/*
 * XREFs of _RtlpRemoveHeapFromProtectedList@4 @ 0x4B2A9206
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpRemoveHeapFromProtectedList(_DWORD *this)
{
  unsigned __int16 v1; // dx
  _DWORD **v2; // esi
  bool v4; // al
  unsigned __int16 v5; // cx
  int result; // eax
  unsigned __int16 v7; // dx

  v1 = RtlpNumberOfProtectedHeaps;
  v2 = (_DWORD **)RtlpProtectedHeapsList;
  v4 = this[2] == -571548178;
  v5 = 0;
  *(_WORD *)((char *)this + (v4 ? 0 : 0x68) + 20) = 0;
  for ( result = 0; v5 < v1; ++v5 )
  {
    result = v5;
    if ( v2[v5] == this )
      break;
  }
  if ( v2[v5] == this )
  {
    v7 = v1 - 1;
    RtlpNumberOfProtectedHeaps = v7;
    v2[v5] = v2[v7];
    result = v7;
    v2[v7] = 0;
  }
  return result;
}
