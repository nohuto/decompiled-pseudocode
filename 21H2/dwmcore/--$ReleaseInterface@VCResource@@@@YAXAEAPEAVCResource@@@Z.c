/*
 * XREFs of ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x180191FDC
 * Callers:
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800BDEB8 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_C.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18025008C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CResource>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
