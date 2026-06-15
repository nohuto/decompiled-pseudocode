/*
 * XREFs of ?SetAccessibilityAudioMonoMixState@CPolicyConfig@@UEAAJH@Z @ 0x1800D8A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::SetAccessibilityAudioMonoMixState(CPolicyConfig *this)
{
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 200LL))(g_PolicyManager);
}
