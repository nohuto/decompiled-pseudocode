/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180044230
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18000128C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001544 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001544.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180004A28 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180033420 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rcx
  int v9; // eax
  int v11; // [rsp+B0h] [rbp-80h] BYREF
  int v12; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v13; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v15; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v22; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23; // [rsp+108h] [rbp-28h] BYREF
  __int64 v24[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  __int64 v26; // [rsp+148h] [rbp+18h] BYREF
  __int64 v27; // [rsp+150h] [rbp+20h] BYREF
  __int64 v28; // [rsp+158h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 2u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v21 = *((_QWORD *)a2 + 5);
      LODWORD(SRWLock) = a2[15];
      LODWORD(v26) = a2[2];
      v20 = *((_QWORD *)a2 + 14);
      v7 = a1[6];
      v19 = *((_QWORD *)a2 + 13);
      LODWORD(v27) = a2[24];
      v18 = *((_QWORD *)a2 + 11);
      v17 = *((_QWORD *)a2 + 10);
      LODWORD(v28) = a2[18];
      v16 = *((_QWORD *)a2 + 8);
      v12 = a2[6];
      v15 = *((_QWORD *)a2 + 2);
      v11 = *a2;
      v22 = *((_QWORD *)a2 + 15);
      LODWORD(v13) = a2[14];
      v23 = *((_QWORD *)a2 + 6);
      LODWORD(v14) = a2[1];
      v24[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v6,
        (unsigned __int8 *)dword_180170CD1,
        (const GUID *)(v7 + 8),
        (__int64)v6,
        (__int64)v24,
        (__int64)&v14,
        (const unsigned __int16 **)&v23,
        (__int64)&v13,
        (const unsigned __int16 **)&v22,
        (__int64)&v11,
        (const WCHAR **)&v15,
        (__int64)&v12,
        (const unsigned __int16 **)&v16,
        (__int64)&v28,
        (const unsigned __int16 **)&v17,
        (const WCHAR **)&v18,
        (__int64)&v27,
        (const unsigned __int16 **)&v19,
        (const WCHAR **)&v20,
        (__int64)&v26,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v21);
    }
  }
  else
  {
    v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v4 > 2u
      && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
    {
      v5 = a1[6];
      v14 = *((_QWORD *)a2 + 14);
      v13 = *((_QWORD *)a2 + 13);
      LODWORD(SRWLock) = a2[24];
      v15 = *((_QWORD *)a2 + 11);
      v16 = *((_QWORD *)a2 + 10);
      LODWORD(v26) = a2[18];
      v17 = *((_QWORD *)a2 + 8);
      LODWORD(v27) = a2[6];
      v18 = *((_QWORD *)a2 + 2);
      LODWORD(v28) = *a2;
      v19 = *((_QWORD *)a2 + 15);
      v11 = a2[14];
      v20 = *((_QWORD *)a2 + 6);
      v12 = a2[1];
      v21 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        (__int64)v4,
        (unsigned __int8 *)dword_180170EFE,
        (const GUID *)(v5 + 8),
        (__int64)v4,
        (__int64)&v21,
        (__int64)&v12,
        (const unsigned __int16 **)&v20,
        (__int64)&v11,
        (const unsigned __int16 **)&v19,
        (__int64)&v28,
        (const WCHAR **)&v18,
        (__int64)&v27,
        (const unsigned __int16 **)&v17,
        (__int64)&v26,
        (const unsigned __int16 **)&v16,
        (const WCHAR **)&v15,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v13,
        (const WCHAR **)&v14);
    }
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v8 = (_DWORD *)a1[6];
  v9 = a2[1];
  if ( v9 != v8[21] && (v9 != v8[19] || (int)v8[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v8 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
