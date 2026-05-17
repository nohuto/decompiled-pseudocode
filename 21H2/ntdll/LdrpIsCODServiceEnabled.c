/*
 * XREFs of LdrpIsCODServiceEnabled @ 0x1800CEF3C
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CECD0 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenKeyEx @ 0x18009FA50 (NtOpenKeyEx.c)
 */

bool LdrpIsCODServiceEnabled()
{
  int v1; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-38h]
  int v3; // [rsp+30h] [rbp-30h]
  __int64 v4; // [rsp+38h] [rbp-28h]
  int *v5; // [rsp+40h] [rbp-20h]
  int v6; // [rsp+48h] [rbp-18h]
  __int128 v7; // [rsp+50h] [rbp-10h]

  v1 = 13500620;
  v2 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  v3 = 48;
  v5 = &v1;
  v4 = 0LL;
  v6 = 64;
  v7 = 0LL;
  return (int)NtOpenKeyEx() >= 0;
}
