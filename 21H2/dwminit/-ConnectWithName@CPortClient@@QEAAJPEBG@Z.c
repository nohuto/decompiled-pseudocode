/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000BFE0
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000AA7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NX.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 */

__int64 __fastcall CPortClient::ConnectWithName(CPortClient *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  struct _PORT_VIEW *v6; // r9
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int ServerView; // [rsp+20h] [rbp-79h]
  ULONG ConnectionInformationLength; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v15[4]; // [rsp+90h] [rbp-9h] BYREF
  int v16; // [rsp+94h] [rbp-5h]
  int v17; // [rsp+98h] [rbp-1h]
  __int16 v18; // [rsp+9Ch] [rbp+3h]
  __int64 v19; // [rsp+A0h] [rbp+7h]

  v3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_2431961401>::GetImpl'::`2'::impl) )
  {
    memset_0(v15, 0, 0x48uLL);
    v16 = 12;
    v17 = 1;
    v18 = 257;
    v19 = 512LL;
    v4 = NtAlpcConnectPort((char *)this + 16, &DestinationString, 0LL, v15, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v4 < 0 )
    {
      ServerView = 231;
LABEL_4:
      v3 = v4 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        v5,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v4 | 0x10000000,
        ServerView);
      return v3;
    }
LABEL_15:
    *((_BYTE *)this + 24) = 1;
    return v3;
  }
  v6 = (struct _PORT_VIEW *)*((_QWORD *)this + 6);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  ConnectionInformationLength = 0;
  if ( v6 )
  {
LABEL_11:
    if ( v6->SectionHandle )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( !*((_DWORD *)this + 7) )
  {
LABEL_12:
    v6 = 0LL;
LABEL_13:
    v4 = NtConnectPort(
           (PHANDLE)this + 2,
           &DestinationString,
           &SecurityQos,
           v6,
           0LL,
           0LL,
           0LL,
           &ConnectionInformationLength);
    if ( v4 < 0 )
    {
      ServerView = 267;
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 8u, 0x30uLL);
  *((_QWORD *)this + 6) = v8;
  if ( v8 )
  {
    *v8 = 48;
    *(_DWORD *)(*((_QWORD *)this + 6) + 16LL) = 0;
    *(_QWORD *)(*((_QWORD *)this + 6) + 24LL) = *((unsigned int *)this + 7);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL) = *((_QWORD *)this + 5);
    v6 = (struct _PORT_VIEW *)*((_QWORD *)this + 6);
    if ( v6 )
      goto LABEL_11;
    goto LABEL_12;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v9, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0xFAu);
  return v3;
}
