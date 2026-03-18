/*
 * XREFs of ?ReadOnlyMode@CSettingsManager@@UEAA_NW4DwmSettingType@@@Z @ 0x140006D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CSettingsManager::ReadOnlyMode(__int64 a1, int a2)
{
  bool v4; // zf
  char v5; // si

  AcquireSRWLockShared((PSRWLOCK)(a1 + 40));
  if ( a2 )
    v4 = *(_QWORD *)(a1 + 16) == 0LL;
  else
    v4 = *(_QWORD *)(a1 + 8) == 0LL;
  v5 = v4 | *(_BYTE *)(a1 + 24);
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 40));
  return v5;
}
