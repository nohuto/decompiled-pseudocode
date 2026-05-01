/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180004484
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800018C0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x1800043E0 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18006770C (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000477C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB9C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18006259C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        DWORD a3,
        char a4)
{
  struct _RM_ACTIVITY_HOST *v4; // rsi
  int v5; // r14d
  void *v10; // rbx
  HANDLE v11; // rax
  int v12; // edi
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  struct ExecutionModel::ResourceManager *v18; // rcx
  struct _RM_ACTIVITY_HOST *v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v21; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h]
  __int16 v25; // [rsp+64h] [rbp-9Ch]
  _BYTE v26[560]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  if ( a2 > 0x31 )
  {
    v13 = -2147024809;
  }
  else
  {
    if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v26) >= 0
      && (RmpActivityHostFindByPsmId(a1[16], (struct _RM_PSM_HOST_INFO *)v26, &v19), (v4 = v19) != 0LL) )
    {
      v22 = a2;
      v23 = 1LL;
      v24 = 101;
      v25 = 256;
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v18,
        (a4 != 0) + 2,
        1u,
        (struct ExecutionModel::_ResourceInfo *)&v22,
        v19);
      LOBYTE(v5) = v24 != 101;
      v12 = 0;
    }
    else
    {
      v10 = 0LL;
      v11 = OpenProcess(0x100000u, 0, a3);
      v12 = 1;
      if ( v11 )
      {
        v10 = v11;
        if ( WaitForSingleObject(v11, 0) == 258 )
          v5 = 1;
      }
      if ( v10 )
        CloseHandle(v10);
    }
    v13 = -2147024891;
    if ( v5 )
      v13 = v12;
    if ( v4 )
      RmpObjectRelease(v4);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 9LL) )
  {
    v20 = a2;
    v21 = a3;
    LODWORD(v19) = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (unsigned int)&unk_18009AD2C,
      v15,
      v16,
      (__int64)&v19,
      (__int64)&v21,
      (__int64)&v20);
  }
  return v13;
}
