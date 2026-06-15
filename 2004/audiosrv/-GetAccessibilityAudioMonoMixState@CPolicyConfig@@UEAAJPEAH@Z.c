/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CPolicyConfig@@UEAAJPEAH@Z @ 0x180047AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetAccessibilityAudioMonoMixState(CPolicyConfig *this, int *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
  return 0LL;
}
