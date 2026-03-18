/*
 * XREFs of sub_1406D8388 @ 0x1406D8388
 * Callers:
 *     ExpDeleteSiloState @ 0x1405AD68C (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1406D80E0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406D82D0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1406D83D4 @ 0x1406D83D4 (sub_1406D83D4.c)
 */

__int64 __fastcall sub_1406D8388(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406D83D4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
