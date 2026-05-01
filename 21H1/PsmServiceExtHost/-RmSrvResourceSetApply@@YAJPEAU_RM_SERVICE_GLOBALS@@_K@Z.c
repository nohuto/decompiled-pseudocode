/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180007564
 * Callers:
 *     RmCoreRpcSrvApplyResourceSet @ 0x1800074A0 (RmCoreRpcSrvApplyResourceSet.c)
 *     RmtSrv_RS_Apply @ 0x180062DD0 (RmtSrv_RS_Apply.c)
 * Callees:
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800074C4 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800076A4 (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B2BC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v5; // rdi
  int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  DWORD v9; // edi
  struct ExecutionModel::ResourceSet *v11; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+E0h] [rbp-38h] BYREF

  RmpUtilCheckStartLockTracking(&v12, (struct _CEM_LOCK_TRACKER *)v14);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009B468, 0, 0, 2u, &v15);
  v11 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), a2, &v11);
  v5 = v11;
  if ( EmSetById < 0 )
  {
    v6 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    v6 = ExecutionModel::ResourceSet::Apply(v5);
    if ( v6 >= 0 )
      v6 = 0;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 9LL) )
  {
    v13 = a2;
    LODWORD(v11) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009B180,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v13);
  }
  if ( v5 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v12 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return (unsigned int)v6;
}
