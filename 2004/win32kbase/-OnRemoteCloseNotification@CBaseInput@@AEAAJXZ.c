/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0015CE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0015D10 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RimInputTypeToDeviceInputType @ 0x1C0015E64 (RimInputTypeToDeviceInputType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8

  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36), a2, this);
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v3 + 8), v2);
}
