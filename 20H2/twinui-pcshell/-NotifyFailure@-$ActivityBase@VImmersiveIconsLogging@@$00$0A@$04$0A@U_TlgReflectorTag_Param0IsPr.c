/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18046FC00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180049028 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180049A50 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180137C58 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180137C58.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801AA7E0 (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x180470EC4 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned int v11; // r10d
  _DWORD *v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // r9
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  unsigned int v19; // ebx
  _DWORD *v20; // rcx
  unsigned int v21; // eax
  unsigned int v23; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v25; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+100h] [rbp-30h] BYREF
  __int64 v35; // [rsp+108h] [rbp-28h] BYREF
  __int64 v36[6]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+150h] [rbp+20h] BYREF
  __int64 v38; // [rsp+158h] [rbp+28h] BYREF
  __int64 v39; // [rsp+160h] [rbp+30h] BYREF
  __int64 v40; // [rsp+168h] [rbp+38h] BYREF

  v36[1] = -2LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, a2[2]) )
  {
    v12 = *(_DWORD **)(wil::details::static_lazy<ImmersiveIconsLogging>::get(
                         v4,
                         _lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v12 > 2u )
    {
      v13 = a2[15];
      v14 = a2[2];
      v15 = a2[24];
      v16 = a2[18];
      v17 = a2[6];
      v18 = *a2;
      v19 = a2[1];
      v33 = *((_QWORD *)a2 + 5);
      LODWORD(SRWLock) = v13;
      LODWORD(v38) = v14;
      v32 = *((_QWORD *)a2 + 14);
      v31 = *((_QWORD *)a2 + 13);
      LODWORD(v39) = v15;
      v30 = *((_QWORD *)a2 + 11);
      v29 = *((_QWORD *)a2 + 10);
      LODWORD(v40) = v16;
      v28 = *((_QWORD *)a2 + 8);
      v24 = v17;
      v27 = *((_QWORD *)a2 + 2);
      v23 = v18;
      v34 = *((_QWORD *)a2 + 15);
      LODWORD(v25) = a2[14];
      v35 = *((_QWORD *)a2 + 6);
      LODWORD(v26) = v19;
      v36[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v12,
        (int)&unk_1804F8562,
        a1[6] + 8,
        v16,
        (__int64)v36,
        (__int64)&v26,
        (const wchar_t **)&v35,
        (__int64)&v25,
        (const wchar_t **)&v34,
        (__int64)&v23,
        (const WCHAR **)&v27,
        (__int64)&v24,
        (const wchar_t **)&v28,
        (__int64)&v40,
        (const wchar_t **)&v29,
        (const WCHAR **)&v30,
        (__int64)&v39,
        (const wchar_t **)&v31,
        (const WCHAR **)&v32,
        (__int64)&v38,
        (__int64)&SRWLock,
        (const wchar_t **)&v33);
    }
  }
  else
  {
    v5 = wil::details::static_lazy<ImmersiveIconsLogging>::get(
           v4,
           _lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v5 + 8) > 2u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 0x200000000000LL) )
    {
      v7 = a2[24];
      v8 = a2[18];
      v9 = a2[6];
      v10 = *a2;
      v11 = a2[1];
      v26 = *((_QWORD *)a2 + 14);
      v25 = *((_QWORD *)a2 + 13);
      LODWORD(SRWLock) = v7;
      v27 = *((_QWORD *)a2 + 11);
      v28 = *((_QWORD *)a2 + 10);
      LODWORD(v38) = v8;
      v29 = *((_QWORD *)a2 + 8);
      LODWORD(v39) = v9;
      v30 = *((_QWORD *)a2 + 2);
      LODWORD(v40) = v10;
      v31 = *((_QWORD *)a2 + 15);
      v23 = a2[14];
      v32 = *((_QWORD *)a2 + 6);
      v24 = v11;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v6,
        (unsigned __int8 *)dword_1804F7DBD,
        (const GUID *)(a1[6] + 8LL),
        v10,
        (__int64)&v33,
        (__int64)&v24,
        (const wchar_t **)&v32,
        (__int64)&v23,
        (const wchar_t **)&v31,
        (__int64)&v40,
        (const WCHAR **)&v30,
        (__int64)&v39,
        (const wchar_t **)&v29,
        (__int64)&v38,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&SRWLock,
        (const wchar_t **)&v25,
        (const WCHAR **)&v26);
    }
  }
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v20 = (_DWORD *)a1[6];
  v21 = a2[1];
  if ( v21 != v20[21] && (v21 != v20[19] || (int)v20[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v20 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
