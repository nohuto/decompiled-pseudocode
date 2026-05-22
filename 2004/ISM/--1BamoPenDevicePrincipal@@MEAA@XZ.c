/*
 * XREFs of ??1BamoPenDevicePrincipal@@MEAA@XZ @ 0x18013118C
 * Callers:
 *     _PenDevice::PenDevice_::_1_::dtor$0 @ 0x18013114D (_PenDevice--PenDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoPenDevicePrincipal::~BamoPenDevicePrincipal(
        BamoPenDevicePrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
}
