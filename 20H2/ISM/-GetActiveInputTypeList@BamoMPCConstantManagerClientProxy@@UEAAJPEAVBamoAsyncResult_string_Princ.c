/*
 * XREFs of ?GetActiveInputTypeList@BamoMPCConstantManagerClientProxy@@UEAAJPEAVBamoAsyncResult_string_Principal@@@Z @ 0x180107A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?GetActiveInputTypeList@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJPEAVBamoAsyncResult_string_Principal@@@Z @ 0x180107ACC (-GetActiveInputTypeList@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJPEAVBamoAsyncResult.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::GetActiveInputTypeList(
        BamoMPCConstantManagerClientProxy *this,
        struct BamoAsyncResult_string_Principal *a2)
{
  BamoMPCConstantManagerClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetActiveInputTypeList(
                  (BamoMPCConstantManagerClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
