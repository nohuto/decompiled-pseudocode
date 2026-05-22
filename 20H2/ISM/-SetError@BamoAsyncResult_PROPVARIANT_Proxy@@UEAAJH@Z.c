/*
 * XREFs of ?SetError@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJH@Z @ 0x18010B560
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetError@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJH@Z @ 0x18010B5BC (-SetError@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJH@Z.c)
 */

__int64 __fastcall BamoAsyncResult_PROPVARIANT_Proxy::SetError(BamoAsyncResult_PROPVARIANT_Proxy *this, int a2)
{
  BamoAsyncResult_PROPVARIANT_Proxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetError(
                  (BamoAsyncResult_PROPVARIANT_Proxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
