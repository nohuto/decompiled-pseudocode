/*
 * XREFs of _LdrpIsCODServiceEnabled@0 @ 0x4B32FCAA
 * Callers:
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKeyEx@16 @ 0x4B2F3B80 (_ZwOpenKeyEx@16.c)
 */

bool __stdcall LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  _DWORD v2[6]; // [esp+4h] [ebp-24h] BYREF
  _DWORD v3[2]; // [esp+1Ch] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+24h] [ebp-4h] BYREF

  v3[0] = 13500620;
  Handle = 0;
  v2[2] = v3;
  v3[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  v2[0] = 24;
  v2[1] = 0;
  v2[3] = 64;
  v2[4] = 0;
  v2[5] = 0;
  v0 = ZwOpenKeyEx((int)&Handle, 131353, (int)v2, 0) >= 0;
  if ( Handle )
    NtClose(Handle);
  return v0;
}
