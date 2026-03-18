/*
 * XREFs of ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x1801BDD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801BDDBC (-OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderProxy::OnAddDataSourceError(BamoDataProviderProxy *this, unsigned int a2)
{
  BamoDataProviderProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoDataProviderProxyImpl::OnAddDataSourceError((BamoDataProviderProxy *)((char *)v3 + 8), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v5);
  return (unsigned int)v3;
}
