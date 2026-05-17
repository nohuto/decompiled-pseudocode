/*
 * XREFs of RtlpGetTargetRvaFlag @ 0x18004767C
 * Callers:
 *     RtlGuardIsExportSuppressedAddress @ 0x18004764C (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800FD570 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008EDC0 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlpGetTargetRvaFlag(unsigned __int64 a1, _BYTE *a2)
{
  int v4; // ebx
  _DWORD *Config; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  unsigned __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+40h] [rbp-28h]
  __int128 Key; // [rsp+48h] [rbp-20h] BYREF

  Key = 0LL;
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v13, 24LL, 0LL) < 0 )
    return 0;
  v4 = v13;
  if ( !v13 )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( a1 < v13 )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig(v13);
  if ( !Config )
    return 0;
  if ( *Config < 0x94u )
    return 0;
  v6 = Config[36];
  v7 = (unsigned int)Config[34];
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = (const void *)*((_QWORD *)Config + 16);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key) = a1 - v4;
  v10 = bsearch_s(&Key, v8, v7, v9, RtlpTargetCompare, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
