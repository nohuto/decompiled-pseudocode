/*
 * XREFs of sub_180026CA0 @ 0x180026CA0
 * Callers:
 *     sub_180026B84 @ 0x180026B84 (sub_180026B84.c)
 *     sub_1800378A4 @ 0x1800378A4 (sub_1800378A4.c)
 * Callees:
 *     sub_18000E6B0 @ 0x18000E6B0 (sub_18000E6B0.c)
 */

__int64 __fastcall sub_180026CA0(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a1) )
  {
    if ( (int)sub_18000E6B0(a2, a3) < 0 )
      return (unsigned int)-1073741584;
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v5;
}
