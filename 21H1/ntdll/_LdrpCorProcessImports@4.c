/*
 * XREFs of _LdrpCorProcessImports@4 @ 0x4B2A6D1F
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _AVrfDllLoadNotification@4 @ 0x4B2A6D66 (_AVrfDllLoadNotification@4.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpSendDllNotifications@12 @ 0x4B2D0BFC (_LdrpSendDllNotifications@12.c)
 */

int __thiscall LdrpCorProcessImports(_DWORD *this)
{
  int v2; // ecx
  int Notification; // edi

  *(_DWORD *)(this[20] + 32) = 6;
  Notification = AVrfDllLoadNotification();
  if ( Notification >= 0 )
  {
    LdrpSendDllNotifications(v2);
    LdrpLogDllState(5293);
    *(_DWORD *)(this[20] + 32) = 7;
  }
  return Notification;
}
