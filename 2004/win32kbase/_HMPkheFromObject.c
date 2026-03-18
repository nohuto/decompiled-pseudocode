/*
 * XREFs of _HMPkheFromObject @ 0x1C0017510
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C0017370 (HMRemoveHandleForObject.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

char *__fastcall HMPkheFromObject(_DWORD *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v3);
  return (char *)gpKernelHandleTable + 24 * (unsigned __int16)*a1;
}
