/*
 * XREFs of PopDirectedDripsDiagNotifySessionStop @ 0x1408F7304
 * Callers:
 *     PopDirectedDripsSendSessionData @ 0x1408E3AC4 (PopDirectedDripsSendSessionData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14057CBB4 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 *     PopDirectedDripsDiagRundownBroadcastTrees @ 0x1408F7510 (PopDirectedDripsDiagRundownBroadcastTrees.c)
 *     PopDirectedDripsDiagRundownDevices @ 0x1408F7924 (PopDirectedDripsDiagRundownDevices.c)
 */

char __fastcall PopDirectedDripsDiagNotifySessionStop(__int64 a1, int a2, int a3)
{
  int v5; // r14d
  ULONG HandleAttributes; // eax
  ULONG v7; // ett
  __int64 v8; // rbx
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  int *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  __int64 *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  _BYTE *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  _OWORD *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  _BYTE v42[112]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v43[13]; // [rsp+178h] [rbp+70h] BYREF

  v13 = 0LL;
  v5 = a1;
  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v7 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v7 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    PopDirectedDripsDiagQueryAndResetPnpAccounting(a1, &v13, (__int64)v42, v43);
    v8 = PopWnfCsEnterScenarioId;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    if ( PopDirectedDripsDiagTraceHandleRegistered
      && (unsigned int)dword_140D2D900 > 5
      && tlgKeywordOn((__int64)&dword_140D2D900, 0x400000000000LL) )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v18 = &v14;
      v21 = &v10;
      v24 = &v11;
      v27 = &v12;
      v15 = v13;
      v30 = &v15;
      v33 = v42;
      v36 = v43;
      v39 = &v16;
      v19 = 8;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 8;
      v40 = 8;
      v14 = v8;
      v10 = v5;
      v11 = a2;
      LODWORD(v12) = a3;
      v34 = 104;
      v37 = 208;
      v16 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D2D900,
        (unsigned __int8 *)&byte_14002A117,
        0LL,
        0LL,
        0xAu,
        &v17);
    }
    PopDirectedDripsDiagRundownBroadcastTrees();
    PopDirectedDripsDiagRundownDevices();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
    LOBYTE(HandleAttributes) = KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return HandleAttributes;
}
