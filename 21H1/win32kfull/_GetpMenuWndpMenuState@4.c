/*
 * XREFs of _GetpMenuWndpMenuState@4 @ 0x1974C5
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall GetpMenuWndpMenuState(_DWORD *this)
{
  _DWORD *i; // edx

  for ( i = *(_DWORD **)(*(_DWORD *)(*this + 8) + 328); i; i = (_DWORD *)i[8] )
  {
    if ( *i == *(_DWORD *)(this[1] + 32) )
      break;
  }
  return i;
}
