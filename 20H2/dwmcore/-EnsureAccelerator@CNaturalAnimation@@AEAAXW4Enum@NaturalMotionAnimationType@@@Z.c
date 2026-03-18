/*
 * XREFs of ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801D6EC4
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D7510 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x1801D7F00 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x1801D8048 (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x1801D84B0 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x1801D86C0 (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C8114 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ??$?4VCGravityBounceAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravityBounceAccelerator@@@Z @ 0x1801D623C (--$-4VCGravityBounceAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravi.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1801D66E0 (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CNaturalAnimation::EnsureAccelerator(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  CGravityBounceAccelerator *v3; // rbx
  int v5; // edx
  _DWORD *v6; // rax
  CGravityBounceAccelerator *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)(a1 + 424);
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 424) )
  {
    *(_DWORD *)(a1 + 432) = a2;
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v6 = operator new(0x30uLL);
      if ( v6 )
      {
        v6[4] = 0;
        *(_QWORD *)v6 = &CSpringAccelerator::`vftable'{for `IAccelerator'};
        *((_QWORD *)v6 + 1) = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
        v6[7] = 1137180672;
        v6[8] = 1105199104;
        v6[10] = 1101004800;
        v6[9] = 1060320051;
      }
      else
      {
        v6 = 0LL;
      }
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(
        v2,
        (__int64 (__fastcall ***)(_QWORD))v6);
    }
    else
    {
      v7 = (CGravityBounceAccelerator *)operator new(0x40uLL);
      if ( v7 )
        v3 = CGravityBounceAccelerator::CGravityBounceAccelerator(v7, 10.0, 0.5);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(
        v2,
        (__int64 (__fastcall ***)(_QWORD))v3);
      *(_DWORD *)(*v2 + 56) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
    }
  }
}
