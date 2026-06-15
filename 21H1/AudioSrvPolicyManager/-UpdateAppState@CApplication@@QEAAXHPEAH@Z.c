/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x1800161E8
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x180024B88 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180032030 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180001C68 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v4; // ecx
  unsigned int v6; // eax
  BOOL v7; // r14d
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *((_DWORD *)this + 52);
  if ( a2 )
    v6 = v4 | 2;
  else
    v6 = v4 & 0xFFFFFFFD;
  *((_DWORD *)this + 52) = v6;
  v7 = (v6 & 6) != 0;
  v8 = v7 ^ ((v4 & 6) != 0);
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)v6) & 2) != 0 && !a2 )
    *((_QWORD *)this + 76) = GetTickCount64();
  if ( a3 )
    *a3 = v8;
  if ( v8 )
  {
    v9 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v9 > 4u )
    {
      LODWORD(v17) = v7;
      LODWORD(v15) = -1;
      LODWORD(v14) = -1;
      LODWORD(v16) = -1;
      v12 = *((_QWORD *)this + 80);
      v13 = *((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_18004B816,
        v10,
        v11,
        (void **)&v13,
        (__int64)&v12,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v15);
    }
  }
}
