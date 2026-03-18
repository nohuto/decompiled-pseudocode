/*
 * XREFs of _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C013B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

_BOOL8 __fastcall anonymous_namespace_::lookForMatchingMinuserHwnd(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BOOL8 result; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v10,
    a2,
    a3,
    a4);
  v6 = (unsigned int)((a2 - (__int64)qword_1C0248D48) >> 5);
  result = *(_BYTE *)(a2 + 24) == 23
        && (v7 = *((_QWORD *)gpKernelHandleTable + 3 * v6 + 1), v8 = a1[2], *(_QWORD *)(v7 + 424) == a1[1])
        && (!v8 || v7 == v8)
        && *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * v6) + 56LL) == *a1;
  return result;
}
