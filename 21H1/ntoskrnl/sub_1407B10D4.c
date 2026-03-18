/*
 * XREFs of sub_1407B10D4 @ 0x1407B10D4
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406B8830 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1407B1120 @ 0x1407B1120 (sub_1407B1120.c)
 */

__int64 __fastcall sub_1407B10D4(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407B1120(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
