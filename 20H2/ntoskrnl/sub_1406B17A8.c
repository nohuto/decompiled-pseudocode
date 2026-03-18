/*
 * XREFs of sub_1406B17A8 @ 0x1406B17A8
 * Callers:
 *     ExpDeleteSiloState @ 0x1405B11EC (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1406B1500 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406B16F0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1406B17F4 @ 0x1406B17F4 (sub_1406B17F4.c)
 */

__int64 __fastcall sub_1406B17A8(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406B17F4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
