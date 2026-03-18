/*
 * XREFs of _GetpwndNotifypMenuState@4 @ 0x8F366
 * Callers:
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _IsModelessMenuNotificationWindow@4 @ 0x8F356 (_IsModelessMenuNotificationWindow@4.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall GetpwndNotifypMenuState(_DWORD *this)
{
  _DWORD *i; // edx

  for ( i = *(_DWORD **)(this[2] + 328); i && *(_DWORD **)(*i + 4) != this; i = (_DWORD *)i[8] )
    ;
  return i;
}
