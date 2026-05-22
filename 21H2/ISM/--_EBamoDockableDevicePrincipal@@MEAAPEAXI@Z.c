/*
 * XREFs of ??_EBamoDockableDevicePrincipal@@MEAAPEAXI@Z @ 0x180126540
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18003A130 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoDockableDevicePrincipal *__fastcall BamoDockableDevicePrincipal::`vector deleting destructor'(
        BamoDockableDevicePrincipal *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  wil::details *v6; // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  v4 = (char)a2;
  v6 = (wil::details *)*((_QWORD *)this + 7);
  if ( v6 )
    wil::details::FreeProcessHeap(v6, a2);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, (__int64)a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
