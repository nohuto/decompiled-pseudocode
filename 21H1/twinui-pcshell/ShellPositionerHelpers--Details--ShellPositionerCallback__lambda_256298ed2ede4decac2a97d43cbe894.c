/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_256298ed2ede4decac2a97d43cbe894d___::ShellPositionerCallback__lambda_256298ed2ede4decac2a97d43cbe894d___ @ 0x180142EA4
 * Callers:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_256298ed2ede4decac2a97d43cbe894d_____lambda_256298ed2ede4decac2a97d43cbe894d___ @ 0x180141DF4 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_2.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18000B0F0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 */

_QWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_256298ed2ede4decac2a97d43cbe894d___::ShellPositionerCallback__lambda_256298ed2ede4decac2a97d43cbe894d___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = 0LL;
  if ( a1 + 6 != a2 )
  {
    a1[6] = *a2;
    *a2 = 0LL;
  }
  a1[7] = a2[1];
  *a1 = off_1804761C8;
  a1[1] = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
