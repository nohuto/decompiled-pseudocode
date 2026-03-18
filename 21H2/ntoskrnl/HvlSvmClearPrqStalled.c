/*
 * XREFs of HvlSvmClearPrqStalled @ 0x140548880
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(int a1)
{
  __int64 v1; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallFastExtended(65705LL, (__int64)v3, 8u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
