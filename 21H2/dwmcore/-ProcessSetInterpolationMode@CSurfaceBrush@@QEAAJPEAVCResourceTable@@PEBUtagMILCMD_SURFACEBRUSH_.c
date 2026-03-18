/*
 * XREFs of ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x1800D73AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetInterpolationMode(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE *a3)
{
  int v3; // eax
  int v4; // edx
  __int64 v5; // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 == 1 )
  {
    v4 = 1;
  }
  else if ( v3 > 1 )
  {
    if ( v3 <= 3 )
    {
      v4 = 2;
      goto LABEL_3;
    }
    switch ( v3 )
    {
      case 4:
        goto LABEL_9;
      case 5:
        v4 = 4;
        break;
      case 6:
LABEL_9:
        v4 = 3;
        break;
    }
  }
LABEL_3:
  v5 = *(_QWORD *)this;
  *((_DWORD *)this + 25) = v4;
  (*(void (__fastcall **)(CSurfaceBrush *, __int64, CSurfaceBrush *))(v5 + 72))(this, 6LL, this);
  return 0LL;
}
