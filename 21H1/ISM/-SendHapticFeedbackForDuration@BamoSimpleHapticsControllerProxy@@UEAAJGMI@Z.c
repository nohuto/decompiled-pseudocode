/*
 * XREFs of ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxy@@UEAAJGMI@Z @ 0x1800EC500
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z @ 0x1800EC57C (-SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSimpleHapticsControllerProxy::SendHapticFeedbackForDuration(
        BamoSimpleHapticsControllerProxy *this,
        unsigned __int16 a2,
        float a3,
        unsigned int a4)
{
  BamoSimpleHapticsControllerProxy *v6; // rbx
  Microsoft::BamoImpl::BamoImplObject *v8; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v8,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v6) = BamoImpl::BamoSimpleHapticsControllerProxyImpl::SendHapticFeedbackForDuration(
                  (BamoSimpleHapticsControllerProxy *)((char *)v6 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v8);
  return (unsigned int)v6;
}
