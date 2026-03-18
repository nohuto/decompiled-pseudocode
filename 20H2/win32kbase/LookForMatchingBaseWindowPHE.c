/*
 * XREFs of LookForMatchingBaseWindowPHE @ 0x1C013B2F0
 * Callers:
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C0119D60 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHwndMinuserEx @ 0x1C011A070 (ValidateHwndMinuserEx.c)
 *     UserAddBaseWindowHandle @ 0x1C013B330 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C013B7A4 (UserFindBaseWindowHandle.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMFindEntry @ 0x1C0119610 (HMFindEntry.c)
 */

char *__fastcall LookForMatchingBaseWindowPHE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)&v5,
    a2,
    a3,
    a4);
  return HMFindEntry(
           (__int64)v6,
           (unsigned int (__fastcall *)(__int64, char *))anonymous_namespace_::lookForMatchingMinuserHwnd);
}
