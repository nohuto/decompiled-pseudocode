/*
 * XREFs of ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800987CC
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180011820 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180011C30 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180079E4C (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009A650 (--1CLightStack@@QEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18009A688 (--1CExpression@@UEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18009B384 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18009BC3C (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800DC3A4 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800DD28C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801C8670 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CHwLightCollectionBuffer>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
