/*
 * XREFs of LdrQueryNextListEntry32 @ 0x1800CE240
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReadMemory @ 0x180001340 (LdrpReadMemory.c)
 */

__int64 __fastcall LdrQueryNextListEntry32(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  result = LdrpReadMemory(a1, a2, (__int64)&v5, 4LL);
  if ( (int)result >= 0 )
  {
    *a3 = v5;
    return (unsigned int)result;
  }
  return result;
}
