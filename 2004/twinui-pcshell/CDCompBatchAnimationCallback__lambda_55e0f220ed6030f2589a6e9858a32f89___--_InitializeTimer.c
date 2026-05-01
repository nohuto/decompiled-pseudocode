/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InitializeTimer @ 0x1803B20E4
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnBeginBatchUpdate @ 0x1803B1A30 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--OnBeginBatchUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InitializeTimer(
        __int64 *a1)
{
  int Error; // ebx
  HWND v3; // rdi
  signed int LastError; // eax
  __int64 v5; // rax

  Error = 0;
  if ( !a1[5] )
  {
    v3 = (HWND)SHCreateWorkerWindowW(
                 CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::s_TimerWndProc,
                 -3LL,
                 0LL,
                 0LL,
                 0LL,
                 a1);
    if ( v3 || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      if ( !SetTimer(v3, 0x64uLL, 0x3E8u, 0LL) )
      {
        LastError = GetLastError();
        Error = LastError;
        if ( LastError > 0 )
          Error = (unsigned __int16)LastError | 0x80070000;
      }
      if ( Error < 0 )
      {
        if ( v3 )
          DestroyWindow(v3);
      }
      else
      {
        v5 = *a1;
        a1[5] = (__int64)v3;
        (*(void (__fastcall **)(__int64 *))(v5 + 8))(a1);
      }
    }
  }
  return (unsigned int)Error;
}
