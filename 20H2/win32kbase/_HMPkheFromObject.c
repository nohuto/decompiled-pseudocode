/*
 * XREFs of _HMPkheFromObject @ 0x1C0021A60
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

char *__fastcall HMPkheFromObject(_DWORD *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v3);
  return (char *)gpKernelHandleTable + 24 * (unsigned __int16)*a1;
}
