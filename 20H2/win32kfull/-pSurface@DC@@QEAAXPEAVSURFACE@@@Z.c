/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0097BA0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00A0FA0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00A0FEC (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00A1070 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00A10C0 (UntrapAppContainerRenderingWrap.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E7F70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00F4C9C (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     GreResetDCInternal @ 0x1C014F87C (GreResetDCInternal.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272D54 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272DFC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011C2E8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0272F18 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0272FF4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax

  *((_QWORD *)this + 62) = a2;
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    DC::vSetDpiScaling(
      v3,
      _mm_unpacklo_ps((__m128)*(unsigned int *)(v2 + 660), (__m128)*(unsigned int *)(v2 + 664)).m128_u64[0]);
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 520);
    if ( (v4 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 36) |= 0x10u;
      *(_QWORD *)(v3 + 524) = 0LL;
      *(_QWORD *)(v3 + 532) = 0LL;
      *(_DWORD *)(v3 + 520) = v4 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue((DC *)v3);
    }
  }
}
