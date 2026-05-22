/*
 * XREFs of ??_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z @ 0x18011B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010A570 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18010A570.c)
 */

MPCConstantManagerClientPrincipal *__fastcall MPCConstantManagerClientPrincipal::`vector deleting destructor'(
        MPCConstantManagerClientPrincipal *this,
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
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v6);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
