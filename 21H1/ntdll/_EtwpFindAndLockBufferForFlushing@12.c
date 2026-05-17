/*
 * XREFs of _EtwpFindAndLockBufferForFlushing@12 @ 0x4B381711
 * Callers:
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     <none>
 */

int __thiscall EtwpFindAndLockBufferForFlushing(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ecx
  int v4; // edx

  v3 = this + 41;
  if ( (_DWORD *)*v3 == v3 )
    v4 = 0;
  else
    v4 = *v3 - 56;
  if ( !v4 )
    return v4;
  while ( *(_DWORD *)(v4 + 24) != a2 || *(_DWORD *)(v4 + 28) != a3 )
  {
    v4 = v3 != *(_DWORD **)(v4 + 56) ? *(_DWORD *)(v4 + 56) - 56 : 0;
    if ( !v4 )
      return v4;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 3, 0) )
    return 0;
  if ( *(_DWORD *)(v4 + 24) == a2 && *(_DWORD *)(v4 + 28) == a3 )
    return v4;
  _InterlockedExchange((volatile __int32 *)(v4 + 44), 0);
  return 0;
}
