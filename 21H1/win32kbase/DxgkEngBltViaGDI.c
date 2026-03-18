/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C01FD054
 * Callers:
 *     ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x1C0153B10 (-DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(__int64 a1)
{
  if ( qword_1C0256FC8 )
    return ((__int64 (__fastcall *)(__int64))qword_1C0256FC8)(a1);
  else
    return 0LL;
}
