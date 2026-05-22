/*
 * XREFs of ?OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1800F3960
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@QEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1800F39BC (-OnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@QEAAJAEBUAPP_MOUSE_INPUT_OBSER.c)
 */

__int64 __fastcall BamoInputObserverClientProxy::OnMouseInputGenerated(
        BamoInputObserverClientProxy *this,
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a2)
{
  BamoInputObserverClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoInputObserverClientProxyImpl::OnMouseInputGenerated(
                  (BamoInputObserverClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
