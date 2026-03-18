/*
 * XREFs of PdcPoPpmResetProfile @ 0x1408F2150
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x1407C1914 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x1408F8488 (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  LONG result; // eax
  __int64 v4; // rdx

  result = PpmProfileStatus;
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1, v4);
      return PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      return PpmDisableProfile();
    }
  }
  return result;
}
