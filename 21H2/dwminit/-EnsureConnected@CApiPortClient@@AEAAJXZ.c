/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000B454 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001658 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000AA7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000B3BC (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000B400 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000B830 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NX.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000BED8 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000BFE0 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18000D5E8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  int v2; // edi
  CPortClient *v3; // rax
  HANDLE v4; // r8
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  wchar_t Buffer[48]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t v15[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
  {
    return 0;
  }
  else
  {
    CApiPortClient::Disconnect(v1);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2431961401>::GetImpl'::`2'::impl) )
    {
      v3 = (CPortClient *)operator new(0x40uLL);
      v4 = 0LL;
    }
    else
    {
      v3 = (CPortClient *)operator new(0x40uLL);
      v4 = hObject;
    }
    v5 = (volatile signed __int32 *)v3;
    CPortClient::CPortClient(v3, g_PortClient, v4);
    *((_DWORD *)v5 + 14) = 1;
    *(_QWORD *)v5 = &CPortClientRefCounted::`vftable';
    memset_0(Buffer, 0, 0x52uLL);
    memset_0(v15, 0, 0x52uLL);
    LeaveCriticalSection(&stru_180014B90);
    if ( NtCurrentPeb()->SessionId
      && (v6 = StringCchPrintfW(Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v2 = v6, v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v6, 0x145u);
    }
    else
    {
      v8 = StringCchPrintfW(v15, 41LL, L"%s\\Windows\\DwmApiPort", Buffer);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v8, 0x14Cu);
      }
      else
      {
        v10 = CPortClient::ConnectWithName((CPortClient *)v5, v15);
        v11 = CApiPortClient::Translate(v10);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v11, 0x14Fu);
      }
    }
    EnterCriticalSection(&stru_180014B90);
    if ( v2 >= 0 && !*(&hObject + 1) )
    {
      *(&hObject + 1) = (HANDLE)v5;
      v5 = 0LL;
    }
    if ( v5 && _InterlockedExchangeAdd(v5 + 14, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v5)(v5, 1LL);
  }
  return (unsigned int)v2;
}
