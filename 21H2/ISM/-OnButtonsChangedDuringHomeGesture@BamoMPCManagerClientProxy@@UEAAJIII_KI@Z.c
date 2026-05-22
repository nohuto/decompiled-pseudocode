/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxy@@UEAAJIII_KI@Z @ 0x180108D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z @ 0x180108DAC (-OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMPCManagerClientProxy::OnButtonsChangedDuringHomeGesture(
        BamoMPCManagerClientProxy *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  BamoMPCManagerClientProxy *v9; // rbx
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v9) = BamoImpl::BamoMPCManagerClientProxyImpl::OnButtonsChangedDuringHomeGesture(
                  (BamoMPCManagerClientProxy *)((char *)v9 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11);
  return (unsigned int)v9;
}
