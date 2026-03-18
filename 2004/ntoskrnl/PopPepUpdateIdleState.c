/*
 * XREFs of PopPepUpdateIdleState @ 0x1403468A8
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x140346780 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1403467F0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x14039D7DC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14039D990 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x14056EE5C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14056EF48 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14056F040 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056F5B0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1402CF950 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140346908 (PopPepGetComponentPreferedIdleState.c)
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
