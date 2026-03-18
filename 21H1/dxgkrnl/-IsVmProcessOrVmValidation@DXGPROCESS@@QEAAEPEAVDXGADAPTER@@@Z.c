/*
 * XREFs of ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000A0C8
 * Callers:
 *     CallDPDdiEscape @ 0x1C004DA68 (CallDPDdiEscape.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C014D144 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3E0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DXGPROCESS::IsVmProcessOrVmValidation(DXGPROCESS *this, struct DXGADAPTER *a2)
{
  struct DXGGLOBAL *Global; // rax
  char v4; // bl

  if ( (*((_BYTE *)this + 347) & 0x20) != 0 )
    return 1;
  Global = DXGGLOBAL::GetGlobal();
  v4 = 0;
  if ( *((_BYTE *)Global + 1443) )
  {
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1436), a2) )
      return 1;
  }
  return v4;
}
