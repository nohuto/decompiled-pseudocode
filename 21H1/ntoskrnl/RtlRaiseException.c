/*
 * XREFs of RtlRaiseException @ 0x14032B960
 * Callers:
 *     RaiseException @ 0x1403D1FA0 (RaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1403FE570 (RtlRaiseNoncontinuableException.c)
 *     HvlpGetRegister128 @ 0x1404F4720 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1404F47B0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404F48A0 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x140583968 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x14032BD60 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x14032C1B0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x14032E660 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x14032EEA0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14032F8A0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403F4FF0 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1403FDFC0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
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
  __int64 v30; // rax
  __int64 result; // rax
  unsigned int v32; // [rsp+40h] [rbp+0h] BYREF
  __int64 v33; // [rsp+48h] [rbp+8h] BYREF
  __int64 v34; // [rsp+50h] [rbp+10h] BYREF
  __int64 v35; // [rsp+58h] [rbp+18h] BYREF

  v32 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  RtlGetExtendedContextLength2(1048587LL, &v32, 0LL);
  v25 = v32 + 15LL;
  if ( v25 <= v32 )
    v25 = 0xFFFFFFFFFFFFFF0LL;
  v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
  v27 = alloca(v26);
  v28 = alloca(v26);
  v29 = RtlInitializeExtendedContext2(&v32, 1048587LL, &v32, 0LL);
  RtlpCaptureContext2(&v32);
  v30 = RtlLookupFunctionEntry(a24, &v33, 0LL);
  if ( !v30 )
LABEL_6:
    RtlRaiseStatus(v29);
  RtlVirtualUnwind(0, v33, a24, v30, (__int64)&v32, (__int64)&v35, (__int64)&v34, 0LL);
  *(_QWORD *)(a1 + 16) = a24;
  result = RtlDispatchException(a1, &v32);
  if ( !(_BYTE)result )
  {
    v29 = ZwRaiseException(a1, &v32, 0LL);
    goto LABEL_6;
  }
  return result;
}
