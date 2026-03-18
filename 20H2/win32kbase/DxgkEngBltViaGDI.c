/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C01F5CF4
 * Callers:
 *     ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x1C014B370 (-DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(__int64 a1)
{
  if ( qword_1C024F008 )
    return ((__int64 (__fastcall *)(__int64))qword_1C024F008)(a1);
  else
    return 0LL;
}
