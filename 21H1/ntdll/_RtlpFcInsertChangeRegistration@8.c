/*
 * XREFs of _RtlpFcInsertChangeRegistration@8 @ 0x4B2B2428
 * Callers:
 *     _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0 (_RtlRegisterFeatureConfigurationChangeNotification@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(int a1, _DWORD *a2)
{
  _DWORD *v3; // eax

  RtlAcquireSRWLockExclusive(&SRWLock);
  v3 = (_DWORD *)dword_4B3A4778;
  if ( *(int **)dword_4B3A4778 != &dword_4B3A4774 )
    __fastfail(3u);
  *a2 = &dword_4B3A4774;
  a2[1] = v3;
  *v3 = a2;
  dword_4B3A4778 = (int)a2;
  RtlReleaseSRWLockExclusive(&SRWLock);
}
