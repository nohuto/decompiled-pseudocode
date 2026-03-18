/*
 * XREFs of SPCallEncryptPointer @ 0x1407B4244
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406D80E0 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1407B4290 @ 0x1407B4290 (sub_1407B4290.c)
 */

__int64 __fastcall SPCallEncryptPointer(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407B4290(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
