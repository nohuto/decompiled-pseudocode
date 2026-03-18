/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0023790
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C002375C (RimInputTypeToDeviceInputType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0025AD0 (RIMDirectPnpRemoveDevicesOfType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v1; // eax
  __int64 v2; // r8

  v1 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v2 + 8), v1);
}
