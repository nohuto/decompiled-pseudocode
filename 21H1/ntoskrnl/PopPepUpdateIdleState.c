/*
 * XREFs of PopPepUpdateIdleState @ 0x140308AA8
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x140308980 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1403089F0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14039D200 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x14056E80C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14056E8F8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14056E9F0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056EF60 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x14023CB20 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140308B08 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1, result);
  }
  return result;
}
