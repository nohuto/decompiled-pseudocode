/*
 * XREFs of PopPepUpdateIdleState @ 0x140317E58
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x140317D30 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140317DA0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x14039CBCC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14039CD80 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x14057288C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140572978 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140572A70 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140572FE0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1402D5AB0 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140317EB8 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1u, result);
  }
  return result;
}
