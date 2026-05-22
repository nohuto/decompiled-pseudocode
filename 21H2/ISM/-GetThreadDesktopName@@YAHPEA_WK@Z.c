/*
 * XREFs of ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18003291C
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180032734 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800329D0 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

__int64 __fastcall GetThreadDesktopName(wchar_t *a1)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // r10d
  __int64 v7; // rcx
  signed __int64 v8; // rdx
  wchar_t v9; // ax
  wchar_t *v10; // rax
  DWORD nLengthNeeded[4]; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pvInfo[264]; // [rsp+40h] [rbp-228h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, nLengthNeeded) )
  {
    StringCchCopyW(a1, v4, pvInfo);
    return 1;
  }
  else
  {
    v7 = 260LL;
    v8 = (char *)&word_1801C2344 - (char *)a1;
    do
    {
      if ( v7 == -2147483386 )
        break;
      v9 = *(wchar_t *)((char *)a1 + v8);
      if ( !v9 )
        break;
      *a1++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = a1 - 1;
    v5 = 0;
    if ( v7 )
      v10 = a1;
    *v10 = 0;
  }
  return v5;
}
