/*
 * XREFs of HMDestroyObject @ 0x1C005ADB0
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C005AC90 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0128370 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C01438D0 (DestroyBaseWindow.c)
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMFreeObject @ 0x1C0070730 (HMFreeObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMDestroyObject(void *a1)
{
  int v2; // eax
  void *v3; // rcx
  unsigned int v4; // edx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v6);
  v2 = HMMarkObjectDestroyWorker(a1);
  v4 = 0;
  if ( v2 )
  {
    HMFreeObject(v3);
    return 1;
  }
  return v4;
}
