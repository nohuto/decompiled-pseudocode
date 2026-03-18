/*
 * XREFs of IopProtectSystemPartition @ 0x140A6E9C4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     NtOpenKey @ 0x1406C2C30 (NtOpenKey.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 */

char __fastcall IopProtectSystemPartition(__int64 a1)
{
  size_t Size; // [rsp+20h] [rbp-79h]
  __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v8[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v9; // [rsp+68h] [rbp-31h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-29h]
  int v11; // [rsp+78h] [rbp-21h]
  int v12; // [rsp+7Ch] [rbp-1Dh]
  __int128 v13; // [rsp+80h] [rbp-19h]
  _BYTE v14[80]; // [rsp+90h] [rbp-9h] BYREF

  Handle = 0LL;
  v8[1] = 0;
  v12 = 0;
  LODWORD(v4) = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  v9 = 0LL;
  p_DestinationString = &DestinationString;
  v8[0] = 48;
  v11 = 64;
  v13 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097, (__int64)v8) >= 0 )
  {
    RtlInitUnicodeString(&v7, L"Protect System Partition");
    LODWORD(Size) = 20;
    if ( (int)NtQueryValueKey(Handle, (unsigned __int64)&v7, 2LL, (unsigned __int64)v14, Size, (unsigned __int64)&v4) >= 0
      && v14[12] )
    {
      IopApplySystemPartitionProt(a1);
    }
    NtClose(Handle);
  }
  return 1;
}
