/*
 * XREFs of RtlUnwind @ 0x14035E150
 * Callers:
 *     _local_unwind @ 0x1403CE590 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 */

__int64 __fastcall RtlUnwind(unsigned __int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v8; // r10
  void *v9; // rsp
  __int64 v11; // [rsp+30h] [rbp+0h] BYREF

  LODWORD(v11) = 0;
  RtlGetExtendedContextLength2(1048587LL, &v11, 0LL);
  v8 = (unsigned int)v11 + 15LL;
  if ( v8 <= (unsigned int)v11 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((__int64)&v11, 1048587, &v11, 0LL);
  return RtlUnwindEx(a1, a2, a3, a4, (__int64)&v11, 0LL);
}
