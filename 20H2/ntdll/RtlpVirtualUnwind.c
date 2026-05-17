/*
 * XREFs of RtlpVirtualUnwind @ 0x180051B48
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800516B0 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x180051CA8 (RtlpSanitizeContext.c)
 */

__int64 __fastcall RtlpVirtualUnwind(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        _QWORD *a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  _QWORD v15[4]; // [rsp+50h] [rbp-28h] BYREF

  RtlpSanitizeContext(a5);
  v15[2] = 0LL;
  v15[0] = a10;
  v15[1] = a11;
  return RtlpxVirtualUnwind(0, a2, a3, a4, a5, a6, a7, a8, 0LL, (__int64)v15);
}
