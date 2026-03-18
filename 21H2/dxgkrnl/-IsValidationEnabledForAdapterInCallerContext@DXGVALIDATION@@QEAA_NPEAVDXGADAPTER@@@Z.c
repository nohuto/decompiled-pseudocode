/*
 * XREFs of ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8
 * Callers:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000A488 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0016730 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C015B1B0 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C016AE0C (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01C9150 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C02C9588 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C02E2508 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(DXGVALIDATION *this, struct DXGADAPTER *a2)
{
  char v2; // bl
  int v5; // eax
  struct DXGPROCESS *Current; // rax

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    v5 = *((_DWORD *)a2 + 109);
    if ( (v5 & 0x20) == 0 && (v5 & 4) == 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( (*((_BYTE *)Current + 424) & 1) == 0 && (*((_DWORD *)Current + 106) & 2) == 0 )
        {
          if ( *(_DWORD *)this == 2 )
          {
            return 1;
          }
          else if ( *(_DWORD *)this == 1 )
          {
            return *((_BYTE *)Current + 589);
          }
        }
      }
    }
  }
  return v2;
}
