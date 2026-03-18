/*
 * XREFs of _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C0143840
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

_BOOL8 __fastcall anonymous_namespace_::lookForMatchingMinuserHwnd(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BOOL8 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v8);
  v4 = (unsigned int)((a2 - (__int64)qword_1C0250D48) >> 5);
  result = *(_BYTE *)(a2 + 24) == 23
        && (v5 = *((_QWORD *)gpKernelHandleTable + 3 * v4 + 1), v6 = a1[2], *(_QWORD *)(v5 + 416) == a1[1])
        && (!v6 || v5 == v6)
        && *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * v4) + 56LL) == *a1;
  return result;
}
