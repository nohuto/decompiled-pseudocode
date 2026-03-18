/*
 * XREFs of PiUpdateGuestAssignedState @ 0x140739488
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140741100 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x140742898 (PnpRequestDeviceRemoval.c)
 *     PipSendGuestAssignedNotification @ 0x1408B6F80 (PipSendGuestAssignedNotification.c)
 *     PipSetGuestAssignedProperty @ 0x1408B7024 (PipSetGuestAssignedProperty.c)
 */

__int64 __fastcall PiUpdateGuestAssignedState(__int64 a1, char a2)
{
  int v2; // r9d
  unsigned int v4; // eax
  int v6; // ebx
  __int64 v8; // rdx

  v2 = *(_DWORD *)(a1 + 704);
  v4 = v2 | 0x2000;
  if ( !a2 )
    v4 = v2 & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 704) = v4;
  if ( ((v2 & 0x2000) != 0) == a2 )
  {
    return 0;
  }
  else
  {
    v6 = PipSetGuestAssignedProperty();
    if ( v6 < 0 || (LOBYTE(v8) = a2, v6 = PipSendGuestAssignedNotification(a1, v8), v6 < 0) )
      PnpRequestDeviceRemoval(a1, 0LL, 57LL);
  }
  return (unsigned int)v6;
}
