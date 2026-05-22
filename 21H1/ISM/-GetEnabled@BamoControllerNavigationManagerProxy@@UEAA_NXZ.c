/*
 * XREFs of ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ @ 0x1800E6560
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0A30 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0B90 (-OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x18011E780 (-GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ.c)
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017D400 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

bool __fastcall BamoControllerNavigationManagerProxy::GetEnabled(BamoControllerNavigationManagerProxy *this)
{
  BamoControllerNavigationManagerProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v1) = *((_BYTE *)v1 + 40);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (char)v1;
}
