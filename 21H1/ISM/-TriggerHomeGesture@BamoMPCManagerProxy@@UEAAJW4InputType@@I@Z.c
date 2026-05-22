/*
 * XREFs of ?TriggerHomeGesture@BamoMPCManagerProxy@@UEAAJW4InputType@@I@Z @ 0x180046C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?TriggerHomeGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@I@Z @ 0x180046CBC (-TriggerHomeGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMPCManagerProxy::TriggerHomeGesture(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCManagerProxyImpl::TriggerHomeGesture(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
