/*
 * XREFs of ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C0292FF8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TriggerSDRWhiteLevelChangedWnf(__int64 a1)
{
  int updated; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v4 = updated;
  if ( updated < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v4;
}
