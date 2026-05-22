/*
 * XREFs of ?InputAttempted@BamoInputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x1801027D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?InputAttempted@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x18010281C (-InputAttempted@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoInputAttemptedDeliveryClientProxy::InputAttempted(BamoInputAttemptedDeliveryClientProxy *this)
{
  BamoInputAttemptedDeliveryClientProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::InputAttempted((BamoInputAttemptedDeliveryClientProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
