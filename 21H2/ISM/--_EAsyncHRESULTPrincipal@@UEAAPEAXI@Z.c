/*
 * XREFs of ??_EAsyncHRESULTPrincipal@@UEAAPEAXI@Z @ 0x18011B830
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

AsyncHRESULTPrincipal *__fastcall AsyncHRESULTPrincipal::`vector deleting destructor'(
        AsyncHRESULTPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // si
  char *v6; // rdi
  char *v7; // rcx
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx

  v4 = a2;
  v6 = (char *)this + 56;
  v7 = (char *)*((_QWORD *)this + 14);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)v6 + 7) = 0LL;
  }
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
