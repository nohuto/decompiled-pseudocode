/*
 * XREFs of TtmpFindDeviceByDeviceId @ 0x1408F8664
 * Callers:
 *     TtmiAssignDevice @ 0x1408F7A9C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408F7EFC (TtmiSetInputWakeCapability.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408F84C0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall TtmpFindDeviceByDeviceId(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 **v4; // rcx
  __int64 *i; // rax

  v3 = 0LL;
  v4 = (__int64 **)(a1 + 96);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) == a2 )
    {
      v3 = i;
      break;
    }
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0LL;
}
