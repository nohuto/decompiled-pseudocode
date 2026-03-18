/*
 * XREFs of ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023DCE8
 * Callers:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003105C (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800C8FBC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18023DCA0 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

void __fastcall CD2DContext::RemoveHwProtectedResource(CD2DContext *this)
{
  int v1; // r8d
  int v3; // eax
  CD2DContext *v4; // rcx
  char IsHardwareProtectionDisabled; // al
  __int64 v6; // rcx
  char v7; // dl

  v1 = *((_DWORD *)this + 120);
  v3 = v1 - 1;
  *((_DWORD *)this + 120) = v1 - 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v3);
    v3 = *((_DWORD *)this + 120);
  }
  if ( !v3 )
  {
    CD2DContext::IsHardwareProtectionDisabled(this);
    *((_BYTE *)this + 484) = 0;
    IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v4);
    if ( v7 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0q_EventWriteTransfer(v6, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0LL);
  }
}
