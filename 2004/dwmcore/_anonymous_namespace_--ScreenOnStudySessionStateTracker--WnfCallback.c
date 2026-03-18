/*
 * XREFs of _anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback @ 0x1800DB570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  bool v5; // zf
  void (__fastcall *v7)(__int128 *); // rax
  __int128 *v8; // rcx
  __int64 Source1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF

  v5 = *(_BYTE *)a4 == 0;
  Source1 = a1;
  if ( !v5 && RtlCompareMemory(&Source1, &WNF_SRUM_SCREENONSTUDY_SESSION, 8uLL) == 8 )
  {
    v7 = *(void (__fastcall **)(__int128 *))(a4 + 8);
    if ( *a5 )
    {
      v8 = (__int128 *)(a5 + 4);
    }
    else
    {
      v8 = &v11;
      v11 = 0LL;
    }
    v7(v8);
  }
  return 0LL;
}
