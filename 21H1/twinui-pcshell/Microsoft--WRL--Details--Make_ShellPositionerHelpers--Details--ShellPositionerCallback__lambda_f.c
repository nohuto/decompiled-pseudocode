/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa6951919_____lambda_f92d1ded2f5a789bc6502d5fa6951919___ @ 0x18000B064
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___ @ 0x18000B904 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18000B0F0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa6951919_____lambda_f92d1ded2f5a789bc6502d5fa6951919___(
        _QWORD *a1,
        _OWORD *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx
  __int128 v6; // xmm1

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(v4);
    v5[3] = *a2;
    v6 = a2[1];
    *(_QWORD *)v5 = off_1804650D0;
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5[4] = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release();
    *a1 = v5;
  }
  return a1;
}
