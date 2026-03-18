/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004C40
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180004A8C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18000E4F4 (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001F3F0 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18009FB80 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800A36AC (--1CVisual@@MEAA@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A4BBC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801E55CC (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCA.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000660C (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D270 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::InvalidateMaskContent(CProjectedShadowCaster *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 9);
  v3 = v2;
  while ( v2 != *((_QWORD *)this + 9) )
  {
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v2 + 80);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v3);
    v2 = v3;
  }
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    CProjectedShadowCaster::RequestRedraw(this);
  }
}
