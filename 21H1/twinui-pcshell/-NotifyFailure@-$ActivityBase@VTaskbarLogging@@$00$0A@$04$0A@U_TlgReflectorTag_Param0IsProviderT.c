/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18017A9F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180056CE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180057710 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801137A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801137A8.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180147068 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18017C978 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 */

char __fastcall wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  _DWORD *v12; // rcx
  int v13; // eax
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+100h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp-28h] BYREF
  __int64 v28[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  __int64 v30; // [rsp+148h] [rbp+18h] BYREF
  __int64 v31; // [rsp+150h] [rbp+20h] BYREF
  __int64 v32; // [rsp+158h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v9 = *(_DWORD **)(wil::details::static_lazy<TaskbarLogging>::get(
                        v4,
                        _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v9 > 2u )
    {
      v25 = *((_QWORD *)a2 + 5);
      LODWORD(SRWLock) = a2[15];
      LODWORD(v30) = a2[2];
      v24 = *((_QWORD *)a2 + 14);
      v11 = a1[6];
      v23 = *((_QWORD *)a2 + 13);
      LODWORD(v31) = a2[24];
      v22 = *((_QWORD *)a2 + 11);
      v21 = *((_QWORD *)a2 + 10);
      LODWORD(v32) = a2[18];
      v20 = *((_QWORD *)a2 + 8);
      v16 = a2[6];
      v19 = *((_QWORD *)a2 + 2);
      v15 = *a2;
      v26 = *((_QWORD *)a2 + 15);
      LODWORD(v17) = a2[14];
      v27 = *((_QWORD *)a2 + 6);
      LODWORD(v18) = a2[1];
      v28[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v9,
        (unsigned __int8 *)&unk_1804D1662,
        (const GUID *)(v11 + 8),
        v10,
        (__int64)v28,
        (__int64)&v18,
        (const wchar_t **)&v27,
        (__int64)&v17,
        (const wchar_t **)&v26,
        (__int64)&v15,
        (const WCHAR **)&v19,
        (__int64)&v16,
        (const wchar_t **)&v20,
        (__int64)&v32,
        (const wchar_t **)&v21,
        (const WCHAR **)&v22,
        (__int64)&v31,
        (const wchar_t **)&v23,
        (const WCHAR **)&v24,
        (__int64)&v30,
        (__int64)&SRWLock,
        (const wchar_t **)&v25);
    }
  }
  else
  {
    v5 = *(_DWORD **)(wil::details::static_lazy<TaskbarLogging>::get(
                        v4,
                        _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    {
      v8 = a1[6];
      v18 = *((_QWORD *)a2 + 14);
      v17 = *((_QWORD *)a2 + 13);
      LODWORD(SRWLock) = a2[24];
      v19 = *((_QWORD *)a2 + 11);
      v20 = *((_QWORD *)a2 + 10);
      LODWORD(v30) = a2[18];
      v21 = *((_QWORD *)a2 + 8);
      LODWORD(v31) = a2[6];
      v22 = *((_QWORD *)a2 + 2);
      LODWORD(v32) = *a2;
      v23 = *((_QWORD *)a2 + 15);
      v15 = a2[14];
      v24 = *((_QWORD *)a2 + 6);
      v16 = a2[1];
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v6,
        (unsigned __int8 *)dword_1804D0EBD,
        (const GUID *)(v8 + 8),
        v7,
        (__int64)&v25,
        (__int64)&v16,
        (const wchar_t **)&v24,
        (__int64)&v15,
        (const wchar_t **)&v23,
        (__int64)&v32,
        (const WCHAR **)&v22,
        (__int64)&v31,
        (const wchar_t **)&v21,
        (__int64)&v30,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19,
        (__int64)&SRWLock,
        (const wchar_t **)&v17,
        (const WCHAR **)&v18);
    }
  }
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v12 = (_DWORD *)a1[6];
  v13 = a2[1];
  if ( v13 != v12[21] && (v13 != v12[19] || (int)v12[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v12 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
