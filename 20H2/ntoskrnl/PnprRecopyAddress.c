/*
 * XREFs of PnprRecopyAddress @ 0x14050DC90
 * Callers:
 *     PnprRecopyMappingReserve @ 0x14050DCE8 (PnprRecopyMappingReserve.c)
 *     PnprRecopyMirrorPages @ 0x14050DDBC (PnprRecopyMirrorPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402FE520 (MmGetPhysicalAddress.c)
 *     PnprMarkOrMirrorPages @ 0x1409B0FC8 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyAddress(__int64 a1, unsigned int a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v5; // r8
  __int64 result; // rax

  v2 = (char *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v3 = a1 + a2;
  while ( (unsigned __int64)v2 < v3 )
  {
    PhysicalAddress = MmGetPhysicalAddress(v2);
    LOBYTE(v5) = 1;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PnprMarkOrMirrorPages)(
               (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
               4096LL,
               v5);
    if ( (int)result < 0 )
      return result;
    v2 += 4096;
  }
  return 0LL;
}
