/*
 * XREFs of ?ResetReusedGroupingParam@CAudioSession@@UEAAXXZ @ 0x180047B90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::ResetReusedGroupingParam(CAudioSession *this)
{
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 300) )
  {
    UuidCreate(&Uuid);
    (*(void (__fastcall **)(CAudioSession *, UUID *, _QWORD))(*(_QWORD *)this + 112LL))(this, &Uuid, 0LL);
  }
}
