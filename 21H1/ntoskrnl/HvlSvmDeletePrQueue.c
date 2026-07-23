/*
 * XREFs of HvlSvmDeletePrQueue @ 0x1404F12C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDeletePrQueue(int a1)
{
  __int64 v1; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallFastExtended(65704LL, (__int64)v3, 8u, 0, 0);
  return HvlpHvToNtStatus(v1);
}
