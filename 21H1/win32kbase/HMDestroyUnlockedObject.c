/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C00C7D70
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0128420 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0143C70 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v2);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  HMDestroyUnlockedObjectWorker(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
}
