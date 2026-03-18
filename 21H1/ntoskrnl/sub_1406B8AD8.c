/*
 * XREFs of sub_1406B8AD8 @ 0x1406B8AD8
 * Callers:
 *     ExpDeleteSiloState @ 0x1405ACF6C (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1406B8830 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406B8A20 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1406B8B24 @ 0x1406B8B24 (sub_1406B8B24.c)
 */

__int64 __fastcall sub_1406B8AD8(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406B8B24(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
