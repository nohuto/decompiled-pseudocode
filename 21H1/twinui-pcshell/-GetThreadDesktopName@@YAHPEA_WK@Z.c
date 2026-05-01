/*
 * XREFs of ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1804444C8
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1804443D8 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x18035B8BC (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 */

__int64 __fastcall GetThreadDesktopName(wchar_t *a1)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  signed __int64 v6; // r8
  wchar_t v7; // ax
  wchar_t *v8; // rax
  DWORD nLengthNeeded[4]; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pvInfo[264]; // [rsp+40h] [rbp-228h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, nLengthNeeded) )
  {
    StringCchCopyW(a1, 260LL, pvInfo);
    return 1;
  }
  else
  {
    v5 = 260LL;
    v6 = (char *)&word_1804BE2A8 - (char *)a1;
    do
    {
      if ( v5 == -2147483386 )
        break;
      v7 = *(wchar_t *)((char *)a1 + v6);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v5;
    }
    while ( v5 );
    v8 = a1 - 1;
    v4 = 0;
    if ( v5 )
      v8 = a1;
    *v8 = 0;
  }
  return v4;
}
