/*
 * XREFs of ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x18011A880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

AsyncPVPrincipal *__fastcall AsyncPVPrincipal::`vector deleting destructor'(
        AsyncPVPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // si
  char *v6; // rdi
  char *v7; // rcx
  __int64 v8; // rcx
  Microsoft::BamoImpl::BamoImplObject *v9; // rcx

  v4 = a2;
  v6 = (char *)this + 120;
  v7 = (char *)*((_QWORD *)this + 22);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)v6 + 7) = 0LL;
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    LOBYTE(a2) = v8 != (_QWORD)this + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
    *((_QWORD *)this + 14) = 0LL;
  }
  v9 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
