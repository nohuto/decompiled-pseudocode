/*
 * XREFs of _LdrUnregisterDllNotification@4 @ 0x4B32EFC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v1; // edi
  NTSTATUS v2; // esi
  _DWORD *i; // eax
  _DWORD *v4; // ecx
  _DWORD *v6; // edx

  v1 = 0;
  v2 = -1073741515;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_DWORD *)*i )
  {
    v1 = i;
    v4 = (_DWORD *)*i;
    if ( i == Cookie )
    {
      if ( (_DWORD *)v4[1] != i || (v6 = (_DWORD *)i[1], (_DWORD *)*v6 != i) )
        __fastfail(3u);
      *v6 = v4;
      v2 = 0;
      v4[1] = v6;
      break;
    }
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  if ( v2 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v1);
  return v2;
}
