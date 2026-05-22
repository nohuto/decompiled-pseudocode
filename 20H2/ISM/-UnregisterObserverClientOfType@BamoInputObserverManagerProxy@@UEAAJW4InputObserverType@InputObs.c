/*
 * XREFs of ?UnregisterObserverClientOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z @ 0x1800ED0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?UnregisterObserverClientOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z @ 0x1800ED12C (-UnregisterObserverClientOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserver.c)
 */

__int64 __fastcall BamoInputObserverManagerProxy::UnregisterObserverClientOfType(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoInputObserverManagerProxyImpl::UnregisterObserverClientOfType(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
