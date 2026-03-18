/*
 * XREFs of IsImmersiveBandOrShellManaged @ 0x1C0121EE4
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F8640 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 */

__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1)
{
  BOOL v1; // eax
  __int64 v2; // r8
  unsigned int v3; // edx

  v1 = IsNonImmersiveBand(a1);
  v3 = 0;
  if ( !v1 || (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 234LL) & 0x20) != 0 )
    return 1;
  return v3;
}
