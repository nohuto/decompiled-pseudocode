/*
 * XREFs of ?DragEnded@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800E5860
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DragEnded@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800E5904 (-DragEnded@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4Vir.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::DragEnded(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v11; // rbx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v11) = BamoImpl::BamoDragManagerClientProxyImpl::DragEnded(v11 + 8, a2, a3, a4, a5, a6, a7, a8);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13);
  return (unsigned int)v11;
}
