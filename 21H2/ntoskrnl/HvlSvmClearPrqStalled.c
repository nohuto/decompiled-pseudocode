/*
 * XREFs of HvlSvmClearPrqStalled @ 0x1404F6AE0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(int a1)
{
  __int64 v1; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallFastExtended(65705LL, (__int64)v3, 8u, 0, 0);
  return HvlpHvToNtStatus(v1);
}
