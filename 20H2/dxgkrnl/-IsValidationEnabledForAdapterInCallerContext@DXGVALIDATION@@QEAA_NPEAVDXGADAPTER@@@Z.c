/*
 * XREFs of ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0002788
 * Callers:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0009868 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014560 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0014A20 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6044 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00E94E0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C014CB60 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C015C3B8 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0219D90 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(DXGVALIDATION *this, struct DXGADAPTER *a2)
{
  char v2; // bl
  int v5; // eax
  struct DXGPROCESS *Current; // rax

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    v5 = *((_DWORD *)a2 + 87);
    if ( (v5 & 0x20) == 0 && (v5 & 4) == 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( !*((_BYTE *)Current + 344) && !*((_BYTE *)Current + 345) )
        {
          if ( *(_DWORD *)this == 2 )
          {
            return 1;
          }
          else if ( *(_DWORD *)this == 1 )
          {
            return *((_BYTE *)Current + 477);
          }
        }
      }
    }
  }
  return v2;
}
