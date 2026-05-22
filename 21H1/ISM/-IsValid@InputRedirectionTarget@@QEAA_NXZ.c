/*
 * XREFs of ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x18017FEA4
 * Callers:
 *     ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000D570 (-OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextual.c)
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x18017F4E0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017F6B0 (-OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18017FB80 (-DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800355D8 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsValid(InputRedirectionTarget *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 4);
    v6 = 0LL;
    memset(v5, 0, sizeof(v5));
    if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v3 + 128LL))(v3, v1, v5) < 0
      || !operator==((__int64)v5, (__int64)this + 72) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 160LL))(
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  return *((_QWORD *)this + 5) != 0LL;
}
