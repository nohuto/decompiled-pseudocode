/*
 * XREFs of PiDmaGuardProcessRegistry @ 0x140A522BC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1403B5D4C (PnpGetRegistryDword.c)
 */

__int64 __fastcall PiDmaGuardProcessRegistry(void *a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = PnpGetRegistryDword(a1, (__int64)L"DmaGuardTestMode", &v2);
  if ( (int)result >= 0 && v2 == 1 )
    PipDmaGuardTestMode = 1;
  return result;
}
