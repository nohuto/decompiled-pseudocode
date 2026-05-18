/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000446C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004154 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001310 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180003D0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800040BC (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004100 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004440 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000473C (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000483C (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180004D34 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180004E60 (__security_check_cookie.c)
 *     memset_0 @ 0x18000580A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180006350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  int v2; // edi
  unsigned __int64 v3; // rcx
  CPortClient *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  wchar_t Buffer[48]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t v16[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
  {
    return 0;
  }
  else
  {
    CApiPortClient::Disconnect(v1);
    v4 = (CPortClient *)operator new(v3);
    v6 = (volatile signed __int32 *)v4;
    if ( v4 )
    {
      CPortClient::CPortClient(v4, g_PortClient, hObject);
      *((_DWORD *)v6 + 14) = 1;
      *(_QWORD *)v6 = &CPortClientRefCounted::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      memset_0(Buffer, 0, 0x52uLL);
      memset_0(v16, 0, 0x52uLL);
      LeaveCriticalSection(&CriticalSection);
      if ( NtCurrentPeb()->SessionId
        && (v7 = StringCchPrintfW(Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v2 = v7, v7 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v7, 0x10Cu);
      }
      else
      {
        v9 = StringCchPrintfW(v16, 41LL, L"%s\\Windows\\DwmApiPort", Buffer);
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v9, 0x113u);
        }
        else
        {
          v11 = CPortClient::ConnectWithName((CPortClient *)v6, v16);
          v12 = CApiPortClient::Translate(v11);
          v2 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              v13,
              &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v12,
              0x116u);
        }
      }
      EnterCriticalSection(&CriticalSection);
      if ( v2 >= 0 && !*(&hObject + 1) )
      {
        *(&hObject + 1) = (HANDLE)v6;
        v6 = 0LL;
      }
      if ( v6 && _InterlockedExchangeAdd(v6 + 14, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v6)(v6, 1LL);
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        v5,
        &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0xF7u);
    }
  }
  return (unsigned int)v2;
}
