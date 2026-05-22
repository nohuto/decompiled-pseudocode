/*
 * XREFs of ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxy@@UEAAJGMII@Z @ 0x1800EC5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z @ 0x1800EC654 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSimpleHapticsControllerProxy::SendHapticFeedbackForPlayCount(
        BamoSimpleHapticsControllerProxy *this,
        unsigned __int16 a2,
        float a3,
        unsigned int a4,
        unsigned int a5)
{
  BamoSimpleHapticsControllerProxy *v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoSimpleHapticsControllerProxyImpl::SendHapticFeedbackForPlayCount(
                  (BamoSimpleHapticsControllerProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
