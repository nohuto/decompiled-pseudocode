/*
 * XREFs of ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x1802481F0
 * Callers:
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F1B60 (-IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F23B0 (-IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 */

char __fastcall CLegacySwapChain::IsComputeScribbleSupported(CLegacySwapChain *this)
{
  __int64 v2; // r8
  char *v3; // rcx

  if ( *((_QWORD *)this - 34) )
  {
    v3 = (char *)this + *(int *)(*((_QWORD *)this - 41) + 8LL) - 328;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 24LL))(v3) || *((_DWORD *)this - 22) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      {
        v2 = 4LL;
        goto LABEL_16;
      }
    }
    else if ( *((_DWORD *)this - 44) >= 2u )
    {
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks || *((_DWORD *)this - 42) )
        return 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      {
        v2 = 12LL;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    {
      v2 = 13LL;
      goto LABEL_16;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
  {
    v2 = 11LL;
LABEL_16:
    McTemplateU0q_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v2);
  }
  return 0;
}
