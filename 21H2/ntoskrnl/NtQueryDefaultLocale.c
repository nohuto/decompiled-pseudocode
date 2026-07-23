/*
 * XREFs of NtQueryDefaultLocale @ 0x1405FEA80
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x140689EB0 (MmGetSessionLocaleId.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  BOOLEAN v2; // r9
  NTSTATUS v3; // r8d
  DWORD SessionLocaleId; // eax

  v2 = UserProfile;
  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    *(_QWORD *)&UserProfile = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
      *(_QWORD *)&UserProfile = DefaultLocaleId;
    *(_DWORD *)UserProfile = *(_DWORD *)UserProfile;
  }
  if ( v2 )
    SessionLocaleId = MmGetSessionLocaleId(UserProfile, DefaultLocaleId, 0LL);
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return v3;
}
