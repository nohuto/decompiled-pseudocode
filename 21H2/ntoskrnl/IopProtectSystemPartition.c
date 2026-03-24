/*
 * XREFs of IopProtectSystemPartition @ 0x140A72948
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     NtOpenKey @ 0x140693490 (NtOpenKey.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
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
    if ( (int)NtQueryValueKey(Handle, (unsigned __int64)&v7, 2u, (unsigned __int64)v14, Size, (unsigned __int64)&v4) >= 0
      && v14[12] )
    {
      IopApplySystemPartitionProt(a1);
    }
    NtClose(Handle);
  }
  return 1;
}
