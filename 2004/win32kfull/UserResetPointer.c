/*
 * XREFs of UserResetPointer @ 0x1C004BC80
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  char v0; // bl
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = 0;
  }
  else
  {
    v0 = 1;
    EnterSharedCrit(0LL, 1LL);
  }
  SetPointer(0LL);
  result = SetPointer(1LL);
  if ( v0 )
    return UserSessionSwitchLeaveCrit(v3, v2, v4);
  return result;
}
