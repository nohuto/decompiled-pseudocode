/*
 * XREFs of ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z @ 0x18023A610
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x18004185C (-InvalidateGradient@CGradientBrush@@AEAAXXZ.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetInterpolationSpace(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 40) )
  {
    *((_DWORD *)this + 40) = v3;
    CGradientBrush::InvalidateGradient(this);
  }
  return 0LL;
}
