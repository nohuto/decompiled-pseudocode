/*
 * XREFs of ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019550
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018880 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180022F90 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002752C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180034D78 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x180035684 (-HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180036BBC (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003D0DC (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180078A74 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18007F43C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_18007F43C.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007F6D0 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F818 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007F87C (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckQueueLicenseUpgradeForHost(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  int v2; // r15d
  DWORD v5; // ebp
  __int64 v6; // rdi
  _QWORD *Value; // rbx
  unsigned int *v8; // rbp
  _QWORD *v9; // rax
  unsigned int v12; // ecx
  struct _HAM_USER *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS ContextToken; // ebx
  unsigned int v17; // edi
  unsigned __int64 v18; // [rsp+A8h] [rbp+10h] BYREF
  int v19; // [rsp+B0h] [rbp+18h]
  __int64 v20; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  if ( (*((_BYTE *)a2 + 772) & 1) == 0 )
    return 0LL;
  v5 = HampLockTrackerId;
  v6 = *((_QWORD *)a2 + 81) >> 62;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 576);
  v8 = (unsigned int *)((char *)a1 + 608);
  if ( ((*((_DWORD *)a1 + 152) >> 21) & 3u) < (unsigned int)v6 )
  {
    HampAppReleaseLockShared(a1);
    HampHostReleaseLockExclusiveEx(a2);
    RmpReleaseGlobalLock();
    HampAppAcquireLockExclusive(a1);
    v12 = *v8;
    if ( ((*v8 >> 21) & 3) >= (unsigned int)v6 )
    {
LABEL_25:
      HampAppReleaseLockExclusive(a1);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a2, 0);
      return 1LL;
    }
    while ( (v12 & 0x100000) != 0 )
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      v12 = *v8;
      if ( ((*v8 >> 21) & 3) >= (unsigned int)v6 )
        goto LABEL_25;
    }
    *v8 = v12 | 0x100000;
    HampAppReleaseLockExclusive(a1);
    v13 = *(struct _HAM_USER **)(*((_QWORD *)a1 + 11) + 88LL);
    ContextToken = HampUserTryGetContextToken(v13, &v18);
    if ( ContextToken >= 0 )
    {
      while ( 1 )
      {
        ContextToken = HampSystemBeginStoreLicenseAcquisition(a1, v14, (unsigned int)v6, v18);
        if ( ContextToken >= 0 )
          break;
        if ( v2 )
          goto LABEL_18;
        ContextToken = HampUserTryRefreshContextToken(v13, &v18);
        if ( ContextToken < 0 )
          goto LABEL_18;
        v2 = 1;
      }
      if ( v2 )
      {
        if ( (unsigned int)dword_1800B3218 <= 4 )
        {
LABEL_20:
          if ( ContextToken < 0 )
            HampAppRequestLicensingActivityStops(a1, ContextToken);
          HampAppAcquireLockExclusive(a1);
          if ( ContextToken < 0 )
            v17 = *v8;
          else
            v17 = *v8 & 0xFF9FFFFF | ((_DWORD)v6 << 21);
          *v8 = v17 & 0xFFEFFFFF;
          RtlWakeAddressAll((char *)a1 + 608);
          goto LABEL_25;
        }
        if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
        {
          v19 = v2;
          LOBYTE(v18) = v6;
          LODWORD(v20) = ContextToken;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v15,
            &unk_1800A15F0);
        }
      }
    }
LABEL_18:
    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    {
      v20 = *((_QWORD *)a2 - 4);
      LOBYTE(v18) = v6;
      v19 = ContextToken;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v15,
        &unk_1800A16D7);
    }
    goto LABEL_20;
  }
  if ( HampLockTrackerId != -1 )
  {
    v9 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v9 & 0x20) == 0 )
      __int2c();
    if ( v9[6]-- == 1LL )
      *v9 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 576);
  return 0LL;
}
