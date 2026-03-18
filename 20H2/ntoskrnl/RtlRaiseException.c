/*
 * XREFs of RtlRaiseException @ 0x1402E5480
 * Callers:
 *     RaiseException @ 0x1403D5A70 (RaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x140405AD0 (RtlRaiseNoncontinuableException.c)
 *     HvlpGetRegister128 @ 0x1404F85E0 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1404F8670 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404F8760 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405879F8 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1402E5A80 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403FAE50 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x140405520 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 */

__int64 __fastcall RtlRaiseException(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24)
{
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  void *v27; // rsp
  void *v28; // rsp
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 result; // rax
  unsigned int v34; // [rsp+40h] [rbp+0h] BYREF
  __int64 v35; // [rsp+48h] [rbp+8h] BYREF
  __int64 v36; // [rsp+50h] [rbp+10h] BYREF
  __int64 v37; // [rsp+58h] [rbp+18h] BYREF

  v34 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  RtlGetExtendedContextLength2(1048587LL, &v34, 0LL);
  v25 = v34 + 15LL;
  if ( v25 <= v34 )
    v25 = 0xFFFFFFFFFFFFFF0LL;
  v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
  v27 = alloca(v26);
  v28 = alloca(v26);
  v29 = RtlInitializeExtendedContext2(&v34, 1048587LL, &v34, 0LL);
  RtlpCaptureContext2(&v34, v30, v31);
  v32 = RtlLookupFunctionEntry(a24, &v35, 0LL);
  if ( !v32 )
LABEL_6:
    RtlRaiseStatus(v29);
  RtlVirtualUnwind(0, v35, a24, v32, (__int64)&v34, (__int64)&v37, (__int64)&v36, 0LL);
  *(_QWORD *)(a1 + 16) = a24;
  result = RtlDispatchException(a1, &v34);
  if ( !(_BYTE)result )
  {
    v29 = ZwRaiseException(a1, &v34, 0LL);
    goto LABEL_6;
  }
  return result;
}
