/*
 * XREFs of DwmpIsInitialSessionInteractive @ 0x18000A720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DwmpIsInitialSessionInteractive()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  if ( dword_180018480 )
  {
    return (unsigned int)dword_180014BC0;
  }
  else
  {
    v2 = 0;
    v3 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"\\SYSTEM\\CurrentControlSet\\Control\\Session Manager",
      L"NumberOfInitialSessions",
      0x20000010u,
      0LL,
      &v2,
      &v3);
    dword_180018480 = 1;
    LOBYTE(v0) = v2 <= 1;
    dword_180014BC0 = v0;
  }
  return v0;
}
