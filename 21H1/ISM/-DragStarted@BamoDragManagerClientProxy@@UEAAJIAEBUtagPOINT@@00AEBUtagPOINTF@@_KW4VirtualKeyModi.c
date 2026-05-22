/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@W4InputType@Input@Internal@UI@6@2@Z @ 0x1800E5D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@W4InputType@Input@Internal@UI@7@2@Z @ 0x1800E5E54 (-DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDragManagerClientProxy::DragStarted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v13; // rbx
  Microsoft::BamoImpl::BamoImplObject *v15; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v15,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v13) = BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(v13 + 8, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v15);
  return (unsigned int)v13;
}
