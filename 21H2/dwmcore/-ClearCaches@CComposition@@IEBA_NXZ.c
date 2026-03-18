/*
 * XREFs of ?ClearCaches@CComposition@@IEBA_NXZ @ 0x18007D960
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?ClearD2DCaches@CDeviceManager@@IEAA_NK@Z @ 0x18007D9DC (-ClearD2DCaches@CDeviceManager@@IEAA_NK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

char __fastcall CComposition::ClearCaches(CComposition *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // di

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0q_EventWriteTransfer(this, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, 2000LL);
  v3 = 0;
  v5 = CDeviceManager::ClearD2DCaches(this, a2);
  if ( v5 )
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 83) + 8LL))(*((_QWORD *)this + 83), 2000LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    LOBYTE(v3) = v5 != 0;
    McTemplateU0q_EventWriteTransfer(v4, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v3);
  }
  return v5;
}
