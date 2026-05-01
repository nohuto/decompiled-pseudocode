/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x180036BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x180036D10 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800633AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v5; // rsi
  int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  DWORD v13; // edi
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[144]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  RmpUtilCheckStartLockTracking(&v17, (struct _CEM_LOCK_TRACKER *)v22);
  if ( (_DWORD)v5 || a4 )
  {
    if ( a2 > 0x31 )
    {
      v8 = -805306129;
    }
    else
    {
      LODWORD(v18) = a2;
      *((_QWORD *)&v18 + 1) = v5;
      WORD2(v19) = a4 ^ 1;
      LODWORD(v19) = 101;
      v20 = v18;
      v21 = v19;
      RmpAcquireGlobalLock();
      v8 = ExecutionModel::BaseResourceSet::InitializeResource(
             *(ExecutionModel::BaseResourceSet **)(a1 + 24),
             (const struct ExecutionModel::_ResourceInfo *)&v20);
      if ( v8 >= 0 )
        v8 = 0;
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    v8 = -805306128;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v14 = v5;
    v15 = a2;
    v16 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_18009AFE5,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  if ( v17 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v8;
}
