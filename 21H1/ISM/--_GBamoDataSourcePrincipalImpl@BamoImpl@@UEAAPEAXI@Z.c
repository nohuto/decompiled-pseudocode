/*
 * XREFs of ??_GBamoDataSourcePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801417F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoDataSourcePrincipalImpl *__fastcall BamoImpl::BamoDataSourcePrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v4 = a2;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
