/*
 * XREFs of HvlSvmDisablePasid @ 0x140548B10
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDisablePasid(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v6 = 0;
  v5 = a2;
  v4 = a1;
  v2 = HvcallFastExtended(65701LL, (__int64)&v4, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v2);
}
