/*
 * XREFs of _RtlpFcRemoveChangeRegistration@8 @ 0x4B2AB526
 * Callers:
 *     _RtlUnregisterFeatureConfigurationChangeNotification@4 @ 0x4B2AB4A0 (_RtlUnregisterFeatureConfigurationChangeNotification@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpFcRemoveChangeRegistration(int a1, _DWORD *a2)
{
  int v3; // ecx
  _DWORD *v4; // eax

  RtlAcquireSRWLockExclusive(&SRWLock);
  v3 = *a2;
  if ( *(_DWORD **)(*a2 + 4) != a2 || (v4 = (_DWORD *)a2[1], (_DWORD *)*v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  *(_DWORD *)(v3 + 4) = v4;
  RtlReleaseSRWLockExclusive(&SRWLock);
}
