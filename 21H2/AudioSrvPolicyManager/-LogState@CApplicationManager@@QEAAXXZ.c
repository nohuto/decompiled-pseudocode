/*
 * XREFs of ?LogState@CApplicationManager@@QEAAXXZ @ 0x180020FC4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_::_Do_call @ 0x180009830 (std--_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1800018C0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 */

void __fastcall CApplicationManager::LogState(CApplicationManager *this)
{
  CApplicationManager *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+30h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+40h] BYREF

  v10 = (__int64)this;
  v1 = g_ApplicationManager;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = (_QWORD *)*((_QWORD *)v1 + 9);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    v5 = *((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 3) != 0 && (*(_QWORD *)(v5 + 24) & 3LL) == *(_QWORD *)(v5 + 24) )
    {
      LODWORD(v10) = -1;
      LODWORD(v11) = -1;
      LODWORD(v12) = -1;
      LODWORD(v13) = *(_DWORD *)(v4 + 208) != 0;
      v8 = *(_QWORD *)(v4 + 640);
      v9 = *(_QWORD *)(v4 + 24);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (unsigned __int8 *)dword_180046365,
        v6,
        v7,
        (void **)&v9,
        (__int64)&v8,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
