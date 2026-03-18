/*
 * XREFs of PdcPoPpmResetProfile @ 0x1408EB2C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x1407B0854 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x1408F1588 (PpmDisableProfile.c)
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
