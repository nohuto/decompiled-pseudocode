/*
 * XREFs of ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x18017C240
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180186F64 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetDestinationInformation(
        CImmersiveApp *this,
        struct IImmersiveApplicationWindow **a2,
        struct tagRECT *a3)
{
  const struct _GUID *v6; // rdx
  int Instance; // ebx
  HWND v9; // [rsp+20h] [rbp-38h] BYREF
  RECT rcSrc; // [rsp+28h] [rbp-30h] BYREF

  *a2 = 0LL;
  SetRectEmpty(a3);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Instance = (*(__int64 (__fastcall **)(char *, HWND *, RECT *))(*((_QWORD *)this + 3) + 328LL))(
               (char *)this + 24,
               &v9,
               &rcSrc);
  if ( Instance >= 0 )
  {
    Instance = CImmersiveApplicationWindow_CreateInstance(v9, v6, (void **)a2);
    if ( Instance >= 0 )
      CopyRect(a3, &rcSrc);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)Instance;
}
