/*
 * XREFs of ValidateHwndMinuserEx @ 0x1C011A070
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013B2F0 (LookForMatchingBaseWindowPHE.c)
 */

__int64 __fastcall ValidateHwndMinuserEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = LookForMatchingBaseWindowPHE(a1, a2, 0LL);
  result = 0LL;
  if ( v3 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v7,
      v2,
      v4,
      v5);
    return *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v3 - (__int64)qword_1C0248D48) >> 5));
  }
  return result;
}
