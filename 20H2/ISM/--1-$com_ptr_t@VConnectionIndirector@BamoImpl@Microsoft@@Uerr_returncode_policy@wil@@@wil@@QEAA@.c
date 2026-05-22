/*
 * XREFs of ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EDB4
 * Callers:
 *     _Microsoft::Bamo::Lock::Lock_::_1_::dtor$0 @ 0x18004D54D (_Microsoft--Bamo--Lock--Lock_--_1_--dtor$0.c)
 *     _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$8 @ 0x18004FBF0 (_ForegroundManager--OnActivationObjectNotification_--_1_--dtor$8.c)
 *     _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$10 @ 0x18004FC30 (_ForegroundManager--OnActivationObjectNotification_--_1_--dtor$10.c)
 *     _Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl_::_1_::dtor$1 @ 0x180050BDE (_Microsoft--BamoImpl--BamoPrincipalImpl--BamoPrincipalImpl_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$0 @ 0x180050E61 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Join_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
        Microsoft::BamoImpl::BamoImplObject **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    return Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
  return result;
}
