/*
 * XREFs of PnpPrepareDriverLoading @ 0x14073B76C
 * Callers:
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     PpCheckInDriverDatabase @ 0x14073B530 (PpCheckInDriverDatabase.c)
 *     PnpSetBlockedDriverEvent @ 0x1408AE864 (PnpSetBlockedDriverEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(UNICODE_STRING *a1, void *a2, void *a3, int a4, _DWORD *a5)
{
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int v10; // ebx
  PVOID v12; // rcx
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-40h] BYREF

  P = 0LL;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v14 = 0LL;
  v10 = PpCheckInDriverDatabase(a1, a2, (__int64)a3, v9->OptionalHeader.SizeOfImage, a4, (__int64)&v14);
  if ( v10 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v14);
  if ( IopGetRegistryValue(a2, L"PnpFlags", 0, &P) >= 0 )
  {
    v12 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      *a5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v12, 0);
  }
  return v10;
}
