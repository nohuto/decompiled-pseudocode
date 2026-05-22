/*
 * XREFs of ??_GMPCManagerClientPrincipal@@UEAAPEAXI@Z @ 0x18010C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010AC40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18010AC40.c)
 */

MPCManagerClientPrincipal *__fastcall MPCManagerClientPrincipal::`scalar deleting destructor'(
        MPCManagerClientPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  __int64 v6; // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  v4 = a2;
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v6);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
