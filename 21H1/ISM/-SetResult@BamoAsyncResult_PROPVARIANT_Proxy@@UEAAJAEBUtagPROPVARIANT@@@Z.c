/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z @ 0x18010C080
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetResult@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJAEBUtagPROPVARIANT@@@Z @ 0x18010C0DC (-SetResult@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJAEBUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall BamoAsyncResult_PROPVARIANT_Proxy::SetResult(
        BamoAsyncResult_PROPVARIANT_Proxy *this,
        const struct tagPROPVARIANT *a2)
{
  BamoAsyncResult_PROPVARIANT_Proxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetResult(
                  (BamoAsyncResult_PROPVARIANT_Proxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
