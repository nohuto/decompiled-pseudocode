/*
 * XREFs of ?OnEnumerationCompleted@BamoKeyboardDockClientProxy@@UEAAJXZ @ 0x180128E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnEnumerationCompleted@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x180128E8C (-OnEnumerationCompleted@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoKeyboardDockClientProxy::OnEnumerationCompleted(BamoKeyboardDockClientProxy *this)
{
  BamoKeyboardDockClientProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoKeyboardDockClientProxyImpl::OnEnumerationCompleted((BamoKeyboardDockClientProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
