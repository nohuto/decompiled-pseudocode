/*
 * XREFs of LookForMatchingBaseWindowPHE @ 0x1C0143990
 * Callers:
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C0122560 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHwndMinuserEx @ 0x1C0122870 (ValidateHwndMinuserEx.c)
 *     UserAddBaseWindowHandle @ 0x1C01439D0 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0143E44 (UserFindBaseWindowHandle.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMFindEntry @ 0x1C0121DE0 (HMFindEntry.c)
 */

char *__fastcall LookForMatchingBaseWindowPHE(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)&v4);
  return HMFindEntry(
           (__int64)v5,
           (unsigned int (__fastcall *)(__int64, char *))anonymous_namespace_::lookForMatchingMinuserHwnd);
}
