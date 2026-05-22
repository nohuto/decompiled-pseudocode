/*
 * XREFs of ?GetConstantsForInputType@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncResult_string_Principal@@@Z @ 0x180108200
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?GetConstantsForInputType@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAVBamoAsyncResult_string_Principal@@@Z @ 0x18010826C (-GetConstantsForInputType@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAV.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::GetConstantsForInputType(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetConstantsForInputType(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
