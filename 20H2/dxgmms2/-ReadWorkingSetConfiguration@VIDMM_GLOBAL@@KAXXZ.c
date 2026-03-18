/*
 * XREFs of ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00938B0
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0090764 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     memset @ 0x1C00185C0 (memset.c)
 */

void VIDMM_GLOBAL::ReadWorkingSetConfiguration(void)
{
  int v0; // [rsp+30h] [rbp-79h] BYREF
  int v1; // [rsp+34h] [rbp-75h] BYREF
  _QWORD v2[22]; // [rsp+40h] [rbp-69h] BYREF

  v0 = 90;
  dword_1C0051300 = 90;
  v1 = 65;
  dword_1C0051304 = 65;
  memset(v2, 0, 0xA8uLL);
  v2[7] = 0LL;
  v2[2] = L"WorkingSet.DefaultMaximumPercentile";
  LODWORD(v2[1]) = 288;
  LODWORD(v2[4]) = 67108868;
  v2[3] = &dword_1C0051300;
  LODWORD(v2[6]) = 4;
  v2[5] = &v0;
  v2[9] = L"WorkingSet.DefaultMinimumPercentile";
  v2[10] = &dword_1C0051304;
  LODWORD(v2[8]) = 288;
  LODWORD(v2[11]) = 67108868;
  LODWORD(v2[13]) = 4;
  v2[12] = &v1;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v2, 0LL, 0LL);
}
