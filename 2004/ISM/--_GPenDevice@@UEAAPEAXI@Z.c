/*
 * XREFs of ??_GPenDevice@@UEAAPEAXI@Z @ 0x180131290
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

PenDevice *__fastcall PenDevice::`scalar deleting destructor'(
        PenDevice *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  struct _HIDP_PREPARSED_DATA *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  Microsoft::BamoImpl::BamoImplObject *v9; // rcx

  v4 = (char)a2;
  v6 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 11);
  if ( v6 )
    HidD_FreePreparsedData(v6);
  v7 = (void *)*((_QWORD *)this + 10);
  if ( v7 )
    operator delete(v7, a2);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9, (__int64)a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
