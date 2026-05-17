/*
 * XREFs of _LdrpNotifyLoadOfGraph@4 @ 0x4B2D189B
 * Callers:
 *     _LdrpNotifyLoadOfGraph@4 @ 0x4B2D189B (_LdrpNotifyLoadOfGraph@4.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 * Callees:
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpNotifyLoadOfGraph@4 @ 0x4B2D189B (_LdrpNotifyLoadOfGraph@4.c)
 */

int __thiscall LdrpNotifyLoadOfGraph(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  int result; // eax

  v2 = (_DWORD *)this[6];
  if ( !v2 )
  {
    result = 0;
    goto LABEL_7;
  }
  v3 = (_DWORD *)this[6];
  while ( 1 )
  {
    v3 = (_DWORD *)*v3;
    v4 = v3[1];
    if ( *(_DWORD *)(v4 + 32) == 6 )
    {
      result = LdrpNotifyLoadOfGraph(v3[1]);
      goto LABEL_12;
    }
    if ( *(int *)(v4 + 32) >= 7 )
    {
      result = 0;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(v4 + 32) == -4 )
      break;
    result = -1073741595;
LABEL_12:
    if ( result < 0 )
      return result;
LABEL_6:
    if ( v3 == v2 )
      goto LABEL_7;
  }
  result = -1073741502;
LABEL_7:
  if ( result >= 0 )
  {
    this[8] = 7;
    result = LdrpSendPostSnapNotifications(this);
    if ( result < 0 )
      this[8] = 6;
  }
  return result;
}
