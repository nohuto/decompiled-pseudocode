/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000C3B4
 * Callers:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000AA7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NX.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x18000BFB8 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *a7,
        __int16 a8,
        int *a9)
{
  unsigned int v12; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  HANDLE v21; // rax
  int v23; // [rsp+40h] [rbp-48h] BYREF
  __int128 v24; // [rsp+44h] [rbp-44h]
  __int128 v25; // [rsp+54h] [rbp-34h]
  int v26; // [rsp+64h] [rbp-24h]

  v24 = 0LL;
  v26 = 0;
  v25 = 0LL;
  v12 = 0;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 8u, 0x34uLL);
  v16 = v14;
  if ( v14 )
  {
    v14[10] = a2;
    *v14 = 3407884;
    v14[12] = *a3;
    v23 = 0x40000000;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_2431961401>::GetImpl'::`2'::impl);
    v17 = *((_QWORD *)this + 2);
    a5 = 52LL;
    v18 = NtAlpcSendWaitReceivePort(v17, 0x20000LL, v16, &v23, v16, &a5, 0LL, 0LL);
    v19 = CPortClient::CheckStatus(this, v18);
    if ( v19 >= 0 )
    {
      *a9 = v16[11];
    }
    else
    {
      v12 = v19 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        v20,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v19 | 0x10000000,
        0x254u);
    }
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v16);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0x236u);
  }
  return v12;
}
