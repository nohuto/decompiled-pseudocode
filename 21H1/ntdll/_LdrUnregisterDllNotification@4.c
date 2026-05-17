/*
 * XREFs of _LdrUnregisterDllNotification@4 @ 0x4B32EFC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall LdrUnregisterDllNotification(_UNKNOWN **a1)
{
  int v1; // edi
  int v2; // esi
  _UNKNOWN **i; // eax
  _UNKNOWN **v4; // ecx
  void **v6; // edx

  v1 = 0;
  v2 = -1073741515;
  RtlEnterCriticalSection((int)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
  {
    v1 = (int)i;
    v4 = (_UNKNOWN **)*i;
    if ( i == a1 )
    {
      if ( v4[1] != (_UNKNOWN *)i || (v6 = (void **)i[1], *v6 != i) )
        __fastfail(3u);
      *v6 = v4;
      v2 = 0;
      v4[1] = v6;
      break;
    }
  }
  RtlLeaveCriticalSection((int)&LdrpDllNotificationLock);
  if ( v2 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v1);
  return v2;
}
