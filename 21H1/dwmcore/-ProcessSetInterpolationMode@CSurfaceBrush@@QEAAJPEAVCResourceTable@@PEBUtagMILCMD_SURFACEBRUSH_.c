/*
 * XREFs of ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x1801F27A4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE840 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetInterpolationMode(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE *a3)
{
  int v3; // eax
  _DWORD *v4; // r9

  v3 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)a3 + 2));
  v4[23] = v3;
  (*(void (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)v4 + 72LL))(v4, 6LL, v4);
  return 0LL;
}
