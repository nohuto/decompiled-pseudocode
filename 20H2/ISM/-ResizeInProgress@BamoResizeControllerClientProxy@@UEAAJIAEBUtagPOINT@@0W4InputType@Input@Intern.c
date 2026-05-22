/*
 * XREFs of ?ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@UI@Windows@@@Z @ 0x1800EBC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@UI@Windows@@@Z @ 0x1800EBCC0 (-ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0W4InputType.c)
 */

__int64 __fastcall BamoResizeControllerClientProxy::ResizeInProgress(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v8; // rbx
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v8) = BamoImpl::BamoResizeControllerClientProxyImpl::ResizeInProgress(v8 + 8, a2, a3, a4, a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10);
  return (unsigned int)v8;
}
