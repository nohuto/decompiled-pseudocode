/*
 * XREFs of ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x1801E6618
 * Callers:
 *     ?ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETEXTENDMODE@@@Z @ 0x1801E6940 (-ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETEX.c)
 *     ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z @ 0x1801E697C (-ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRU.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801E6AB8 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::InvalidateGradient(CGradientBrush *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_BYTE *)this + 176) = 0;
  (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v1 + 72))(this, 6LL, this);
}
