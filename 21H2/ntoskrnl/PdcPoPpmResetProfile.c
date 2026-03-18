/*
 * XREFs of PdcPoPpmResetProfile @ 0x1408310F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x14083113C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14099D66C (PpmDisableProfile.c)
 */

void __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1);
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      PpmDisableProfile();
    }
  }
}
