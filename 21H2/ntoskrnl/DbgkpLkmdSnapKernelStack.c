/*
 * XREFs of DbgkpLkmdSnapKernelStack @ 0x1405403CC
 * Callers:
 *     DbgkpLkmdSnapThreadInContext @ 0x14092B55C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140298A3C (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStack(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5, __int64 a6)
{
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+51h] [rbp-AFh]
  __int16 v16; // [rsp+55h] [rbp-ABh]
  char v17; // [rsp+57h] [rbp-A9h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  _QWORD v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[154]; // [rsp+A0h] [rbp-60h] BYREF

  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( a5 )
  {
    v10 = a5[19];
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 88);
    if ( a4 )
    {
      memset(v20, 0, sizeof(v20));
      v20[19] = v10;
      v20[20] = v10;
    }
  }
  v13[0] = a1;
  v13[1] = v10;
  v14 = a4;
  v18 = a6;
  KeEnumerateKernelStackSegments(
    a2,
    (__int64 (__fastcall *)(__int64, _OWORD *, __int64))DbgkpLkmdSnapKernelStackSegmentCallback,
    (__int64)v13);
  if ( a4 )
  {
    v11 = v20;
    if ( a5 )
      v11 = a5;
    memset(v19, 0, sizeof(v19));
    v19[7] = v11[31];
    v19[6] = v11[20];
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64, _QWORD))(a1 + 16448))(
      a1 + 0x4000,
      v19,
      64LL,
      5LL,
      v10 - 64,
      0LL);
    *(_QWORD *)(a3 + 88) = v10 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
