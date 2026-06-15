/*
 * XREFs of ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x180038EB4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ef92fad5d387f4ec2c28fdba8b86f656__void_::_Do_call @ 0x180046E80 (std--_Func_impl_no_alloc__lambda_ef92fad5d387f4ec2c28fdba8b86f656__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1800F6474 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     _lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator() @ 0x1800F65CC (_lambda_74d71b7a0097c5326e8481b5c6ad637e_--operator().c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800F711C (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioJournal::CheckAndLogTelemetry(AudioJournal *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // esi
  _DWORD *v4; // rcx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rax
  const char *v9; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+90h] [rbp+28h] BYREF
  int v12; // [rsp+98h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A0h] [rbp+38h] BYREF
  void *v14; // [rsp+A8h] [rbp+40h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v11 = v2;
  if ( *(_BYTE *)this )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( (__int64)((*(_QWORD *)&SystemTimeAsFileTime - *((_QWORD *)this + 28)) / 0x989680uLL) >= 86400 )
    {
      v14 = 0LL;
      v10[0] = this;
      v10[1] = &v14;
      v3 = lambda_74d71b7a0097c5326e8481b5c6ad637e_::operator()(v10);
      SystemTimeAsFileTime = (struct _FILETIME)*((_QWORD *)this + 28);
      v4 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       SystemTimeAsFileTime.dwHighDateTime,
                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v4 > 4u && (unsigned __int8)tlgKeywordOn(v4, 0x400000000000LL) )
      {
        v8 = "none";
        if ( v3 >= 0 )
          v8 = (const char *)v14;
        v9 = v8;
        v10[0] = SystemTimeAsFileTime;
        LODWORD(v11) = 1;
        v12 = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
          v5,
          (unsigned int)&unk_18016A018,
          v6,
          v7,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)v10,
          (__int64)&v9);
      }
      AudioJournal::ResetData(this, 1);
      if ( v14 )
        operator delete(v14);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
