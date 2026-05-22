/*
 * XREFs of ?PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18010065C
 * Callers:
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180100820 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?PanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801006D4 (-PanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Inpu.c)
 */

__int64 __fastcall BamoMagnifierControllerProxy::PanGestureDetected(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v7) = BamoImpl::BamoMagnifierControllerProxyImpl::PanGestureDetected(v7 + 8, a2, a3, a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
