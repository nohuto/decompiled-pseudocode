/*
 * XREFs of ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x1804777D0
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180477B4C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CGITCookieObject@@QEAA@XZ @ 0x180477880 (--0CGITCookieObject@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z @ 0x180477DC4 (-RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
        _QWORD *a1,
        struct IGlobalInterfaceTable **a2,
        struct IUnknown **a3)
{
  CGITCookieObject *v6; // rax
  int v7; // edi
  CGITCookieObject *v8; // rbx

  *a1 = 0LL;
  v6 = (CGITCookieObject *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CGITCookieObject::CGITCookieObject(v6);
    v7 = CGITCookieObject::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(CGITCookieObject *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_243c720f_5a91_4b39_88bb_c16e6ec1d313,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(CGITCookieObject *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
