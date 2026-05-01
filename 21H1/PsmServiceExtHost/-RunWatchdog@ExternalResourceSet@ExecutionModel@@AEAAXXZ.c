/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800739C4
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180073880 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180073B80 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180009B88 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180035E6C (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800673E8 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180073470 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempla.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x1800737F0 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE ProcessHandle; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID *v9; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  void *v11; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v12; // [rsp+60h] [rbp-20h] BYREF

  ProcessHandle = 0LL;
  if ( *((_DWORD *)this + 320) )
  {
    v2 = *((_DWORD *)this + 2);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
    {
      LODWORD(v9) = v2;
      v10 = (__int64)this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (int)&dword_1800B31E0,
        (int)&unk_18009D8EC,
        v3,
        v4,
        (__int64)&v10,
        (__int64)&v9);
    }
    if ( v2 && !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v2) )
    {
      if ( (*((_BYTE *)this + 1352) & 2) != 0 )
      {
        ExecutionModel::ResourceManager::ForceReleaseExternalResources(
          *((ExecutionModel::ResourceManager **)this + 3),
          v2);
      }
      else if ( RmpSystemOpenProcess(&ProcessHandle, 0x1001u, v2) >= 0
             && NtTerminateProcess(ProcessHandle, -2147467260) >= 0 )
      {
        if ( dword_1800B31E0 )
        {
          if ( *((_QWORD *)this + 167) )
          {
            HampSystemQueryProcessAppSessionGuid(ProcessHandle, &v12);
            if ( (unsigned int)dword_1800B31E0 > 4 )
            {
              if ( tlgKeywordOn((__int64)&dword_1800B31E0, 0x400000000001LL) )
              {
                v10 = 0x1000000LL;
                v9 = &v12;
                v11 = (void *)(*((_QWORD *)this + 167) + 88LL);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                  v5,
                  byte_18009D932,
                  v6,
                  v7,
                  &v11,
                  (__int64 *)&v9,
                  (__int64)&v10);
              }
            }
          }
        }
      }
    }
    if ( ProcessHandle )
      CloseHandle(ProcessHandle);
  }
}
