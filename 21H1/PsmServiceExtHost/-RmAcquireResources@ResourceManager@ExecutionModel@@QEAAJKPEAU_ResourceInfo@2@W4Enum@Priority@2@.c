/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800018C0
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180001700 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x180001C4C (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@-$_HashTable@PE.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F08 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180004484 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB9C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x180067100 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemp.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        _QWORD *a12)
{
  struct _RM_SERVICE_GLOBALS **v12; // rbx
  unsigned int v14; // edi
  __int64 v15; // r13
  struct _RM_ACTIVITY_HOST *v16; // r15
  unsigned int v17; // edx
  _DWORD *v18; // rcx
  char v19; // di
  unsigned int *v20; // r14
  __int64 v21; // rsi
  int v22; // ebx
  __int64 v23; // r9
  int v24; // r14d
  ExecutionModel::ResourceManager *v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  DWORD v31; // edi
  char v33; // [rsp+38h] [rbp-C8h]
  char v34; // [rsp+70h] [rbp-90h]
  unsigned int v35; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  ExecutionModel::ResourceManager *v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  struct _RM_ACTIVITY_HOST *v40; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v42; // [rsp+A8h] [rbp-58h] BYREF
  int v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v44[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v45[560]; // [rsp+150h] [rbp+50h] BYREF

  v12 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v14 = a2;
  v39 = a11;
  v42 = a12;
  v38 = g_pResourceManager;
  v36 = a4;
  v35 = a2;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v44);
  v15 = 0LL;
  v16 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  if ( v14 >= 0x32 || !v14 || !a3 || !a12 || !a7 )
  {
    v22 = -2147024809;
    v24 = a8;
    goto LABEL_28;
  }
  v34 = 1;
  v17 = 0;
  v18 = a3;
  while ( (unsigned int)(*v18 - 22) <= 4 )
  {
    ++v17;
    v18 += 6;
    if ( v17 >= v14 )
      goto LABEL_11;
  }
  v34 = 0;
LABEL_11:
  RmpAcquireGlobalLock();
  if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*v12 + 5))(v12, a5, v45) >= 0 )
  {
    RmpActivityHostFindByPsmId(v12[16], (struct _RM_PSM_HOST_INFO *)v45, &v40);
    v16 = v40;
  }
  v19 = 0;
  v20 = a3;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v12, *v20, a5, 0LL);
    if ( v22 < 0 )
      break;
    v12 = (struct _RM_SERVICE_GLOBALS **)v38;
    v21 = (unsigned int)(v21 + 1);
    v20 += 6;
    if ( (unsigned int)v21 >= v35 )
    {
      v24 = a8;
      v25 = v38;
      goto LABEL_22;
    }
  }
  v24 = a8;
  if ( (a8 & 1) == 0 )
    goto LABEL_24;
  if ( !v34 )
  {
    v25 = v38;
    goto LABEL_21;
  }
  v26 = (unsigned int)a3[6 * v21];
  LOBYTE(v23) = 1;
  v25 = v38;
  v22 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v38, v26, a5, v23);
  if ( v22 < 0 )
  {
LABEL_24:
    v14 = v35;
    goto LABEL_25;
  }
LABEL_21:
  v19 = 1;
LABEL_22:
  v33 = v19;
  v14 = v35;
  v27 = ExecutionModel::ExternalResourceSet::CreateInstance(
          *((_QWORD *)v25 + 3),
          v35,
          a3,
          v36,
          a5,
          a6,
          a7,
          v33,
          v24,
          a9,
          a10,
          v16,
          v39,
          &v37);
  v15 = v37;
  v22 = v27;
  if ( v27 >= 0 )
  {
    *v42 = v37;
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &>(
      (_DWORD)v25 + 88,
      (int)v43);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v22 = 0;
  }
LABEL_25:
  RmpReleaseGlobalLock();
  if ( v16 )
    RmpObjectRelease(v16);
LABEL_28:
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 9LL) )
  {
    v35 = (unsigned __int8)v30;
    v41 = a10;
    LODWORD(v42) = a9;
    LODWORD(v40) = a5;
    LODWORD(v39) = v24;
    LODWORD(v37) = v14;
    *(_QWORD *)v43 = v15;
    LODWORD(v38) = v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      (unsigned int)&unk_18009AF8F,
      v29,
      v30,
      (__int64)&v38,
      (__int64)v43,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v35);
  }
  v31 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v31, 0LL);
  }
  return (unsigned int)v22;
}
