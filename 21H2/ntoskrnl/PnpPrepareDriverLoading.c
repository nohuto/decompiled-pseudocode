/*
 * XREFs of PnpPrepareDriverLoading @ 0x14073DBBC
 * Callers:
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PpCheckInDriverDatabase @ 0x14073DC80 (PpCheckInDriverDatabase.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PnpSetBlockedDriverEvent @ 0x1408ABF94 (PnpSetBlockedDriverEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, void *a3, int a4, _DWORD *a5)
{
  int v7; // ebx
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF

  v7 = (int)a3;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v12 = 0LL;
  v10 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v7, v9->OptionalHeader.SizeOfImage, a4, (__int64)&v12);
  if ( v10 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v12);
  if ( (int)IopGetRegistryValue(a2) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      *a5 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  return v10;
}
