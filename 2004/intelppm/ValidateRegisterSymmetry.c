/*
 * XREFs of ValidateRegisterSymmetry @ 0x1C0025168
 * Callers:
 *     ValidatePctPtcSymmetry @ 0x1C00250F0 (ValidatePctPtcSymmetry.c)
 *     ValidateCpcSymmetry @ 0x1C002EB98 (ValidateCpcSymmetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateRegisterSymmetry(_BYTE *a1, const void *a2)
{
  __int64 v2; // rbx

  v2 = 4LL;
  if ( *a1 != 10 )
    v2 = 12LL;
  return RtlCompareMemory(a1, a2, (unsigned int)v2) == v2;
}
