/*
 * XREFs of RtlVirtualUnwind @ 0x14032C1B0
 * Callers:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x14032BD60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14032D9F0 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlVirtualUnwind(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-20h] BYREF

  v10[2] = a8;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  RtlpxVirtualUnwind(a1, a2, a3, a4, a5, 0LL, a6, a7, (__int64)&v9, (__int64)v10);
  return v9;
}
