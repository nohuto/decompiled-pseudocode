/*
 * XREFs of _LdrpSendDllNotifications@12 @ 0x4B2D0BFC
 * Callers:
 *     _LdrpCorProcessImports@4 @ 0x4B2A6D1F (_LdrpCorProcessImports@4.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __fastcall LdrpSendDllNotifications(int a1, int a2, int a3)
{
  _UNKNOWN **i; // edi
  _DWORD v6[5]; // [esp+10h] [ebp-14h] BYREF

  v6[0] = 0;
  v6[1] = a1 + 36;
  v6[2] = a1 + 44;
  v6[3] = *(_DWORD *)(a1 + 24);
  v6[4] = *(_DWORD *)(a1 + 32);
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
    ((void (__thiscall *)(void *, int, _DWORD *, void *))i[2])(i[2], a2, v6, i[3]);
  return RtlLeaveCriticalSection(&LdrpDllNotificationLock);
}
