/*
 * XREFs of ValidateHwndMinuserEx @ 0x1C0122870
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C0143990 (LookForMatchingBaseWindowPHE.c)
 */

__int64 __fastcall ValidateHwndMinuserEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = LookForMatchingBaseWindowPHE(a1, a2, 0LL);
  result = 0LL;
  if ( v2 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v4);
    return *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v2 - (__int64)qword_1C0250D48) >> 5));
  }
  return result;
}
