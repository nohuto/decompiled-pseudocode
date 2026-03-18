/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C00C7700
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01200F0 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013B5D0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v5,
    a2,
    a3,
    a4);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  HMDestroyUnlockedObjectWorker(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
}
