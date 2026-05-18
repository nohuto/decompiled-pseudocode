/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8
 * Callers:
 *     DwmpRequestProcessShutdown @ 0x18000AB90 (DwmpRequestProcessShutdown.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x18000ABFC (DwmpRequestUnloadUserRegKeys.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000AA7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000B400 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000B830 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NX.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x18000C240 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000C3B4 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(
        CApiPortClient *this,
        unsigned int *a2,
        __int16 a3,
        void *a4,
        unsigned int a5,
        int *a6,
        void *a7,
        unsigned int a8)
{
  unsigned int v9; // ebx
  CApiPortClient *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rsi
  __int16 v14; // r9
  unsigned int v15; // ebp
  CPortClient *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  CApiPortClient *v20; // rcx
  int IsConnected; // ebp
  int v22; // eax
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rsi
  __int16 v25; // r9
  unsigned int v26; // r14d
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  void *v31; // [rsp+20h] [rbp-48h]
  unsigned int v32; // [rsp+28h] [rbp-40h]
  void *v33; // [rsp+30h] [rbp-38h]
  __int16 v34; // [rsp+38h] [rbp-30h]
  int v35; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v35) = a3;
  v9 = -2144980991;
  EnterCriticalSection(&stru_180014B90);
  if ( !byte_180014BB8 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2431961401>::GetImpl'::`2'::impl) )
    {
      v11 = CApiPortClient::EnsureConnected(v10);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v11, 0xACu);
      }
      else
      {
        v13 = (volatile signed __int32 *)*(&hObject + 1);
        if ( *(&hObject + 1) )
          _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 14, 1u);
        LeaveCriticalSection(&stru_180014B90);
        v15 = CPortClient::SendComplexSyncRequest((CPortClient *)v13, *a2, a2, v14, v31, v32, v33, v34, &v35);
        if ( v13 && _InterlockedExchangeAdd(v13 + 14, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v13)(v13, 1LL);
        EnterCriticalSection(&stru_180014B90);
        v16 = (CPortClient *)*(&hObject + 1);
        if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 14, 1, 1) == 1 )
          CPortClient::DisconnectIfDeferred(v16);
        v17 = CApiPortClient::Translate(v15);
        v9 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v17, 0xC9u);
        }
        else
        {
          v19 = v35;
LABEL_14:
          *a6 = CApiPortClient::Translate(v19);
        }
      }
    }
    else
    {
      IsConnected = CApiPortClient::IsConnected(v10);
      do
      {
        v22 = CApiPortClient::EnsureConnected(v20);
        v9 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v22, 0xD5u);
          goto LABEL_33;
        }
        v24 = (volatile signed __int32 *)*(&hObject + 1);
        if ( *(&hObject + 1) )
          _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 14, 1u);
        LeaveCriticalSection(&stru_180014B90);
        v26 = CPortClient::SendComplexSyncRequest((CPortClient *)v24, *a2, a2, v25, v31, v32, v33, v34, (int *)&a8);
        if ( v24 && _InterlockedExchangeAdd(v24 + 14, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v24)(v24, 1LL);
        EnterCriticalSection(&stru_180014B90);
        v20 = (CApiPortClient *)*(&hObject + 1);
        if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 14, 1, 1) == 1 )
          CPortClient::DisconnectIfDeferred(v20);
        if ( v26 != -805306313 )
          break;
        v27 = IsConnected--;
      }
      while ( v27 > 0 );
      v28 = CApiPortClient::Translate(v26);
      v9 = v28;
      if ( v28 >= 0 )
      {
        v19 = a8;
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v29, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v28, 0xF6u);
    }
  }
LABEL_33:
  LeaveCriticalSection(&stru_180014B90);
  return v9;
}
