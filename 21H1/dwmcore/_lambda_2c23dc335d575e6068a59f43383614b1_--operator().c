/*
 * XREFs of _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x180178C2C
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18017A588 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801A3090 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_2c23dc335d575e6068a59f43383614b1_::operator()(_QWORD *a1)
{
  __int64 *v1; // rdx
  unsigned __int64 v2; // rbx
  __int64 i; // r8
  __int64 v5; // rcx

  v1 = (__int64 *)a1[1];
  v2 = 0LL;
  for ( i = *v1; v2 < (v1[1] - i) >> 3; ++v2 )
  {
    v5 = *(_QWORD *)(i + 8 * v2);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL);
      v1 = (__int64 *)a1[1];
      i = *v1;
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 40LL))(*a1);
}
