/*
 * XREFs of PnpPrepareDriverLoading @ 0x14073D9FC
 * Callers:
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PpCheckInDriverDatabase @ 0x14073DAC0 (PpCheckInDriverDatabase.c)
 *     IopGetRegistryValue @ 0x140742A98 (IopGetRegistryValue.c)
 *     PnpSetBlockedDriverEvent @ 0x1408ABE34 (PnpSetBlockedDriverEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, __int64 a3, int a4, _DWORD *a5)
{
  int v7; // ebx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF

  v7 = a3;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v12 = 0LL;
  v10 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v7, *(_DWORD *)(v9 + 80), a4, (__int64)&v12);
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
