/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01779B8
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C0170C70 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0170D50 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMRemoveFromActiveDevices @ 0x1C015F730 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FEE4 (RIMUpdatePrimaryDevice.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C0177844 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmActiveContactsBegin @ 0x1C017E3A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C017E80C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1C017EB54 (RIMCmResetContactFrameState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C01C49DC (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r14d
  int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int128 v42; // [rsp+20h] [rbp-50h] BYREF
  __int64 v43; // [rsp+30h] [rbp-40h]
  __int128 v44; // [rsp+38h] [rbp-38h] BYREF
  __int64 v45; // [rsp+48h] [rbp-28h]
  _BYTE v46[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v5 = a4;
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 712);
  v9 = v8;
  if ( (_DWORD)a3 && (_DWORD)a4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v9 = *(_QWORD *)(v4 + 712);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin(&v44, v4);
  v11 = *(_QWORD *)(active + 16);
  v42 = *(_OWORD *)active;
  v43 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v46, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v45 = v14;
    v44 = v13;
    if ( (_QWORD)v42 == v15 )
    {
      result = DWORD2(v44);
      if ( DWORD2(v42) == DWORD2(v44) && v43 == v45 )
        break;
    }
    v17 = v43 - 16;
    if ( (*(_DWORD *)(v43 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v42);
    if ( v6 && (*(_DWORD *)(v17 + 2340) & 1) != 0 )
    {
      if ( (*(_DWORD *)(v17 + 2660) & 4) == 0 )
      {
        v18 = *(unsigned int *)(v17 + 2420);
        if ( (v18 & 4) != 0 )
        {
          v22 = *(unsigned int *)(v17 + 32);
          if ( (v22 & 4) == 0 && (v18 & 0x10000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
            v22 = *(unsigned int *)(v17 + 32);
          }
          v23 = (unsigned int)(*(_DWORD *)(a1 + 468) + 1);
          *(_DWORD *)(a1 + 468) = v23;
          if ( (v22 & 4) == 0 )
            ++*(_DWORD *)(a1 + 472);
          goto LABEL_28;
        }
      }
      if ( (*(_DWORD *)(v17 + 2660) & 4) != 0 )
      {
        v24 = *(_DWORD *)(v17 + 2420);
        if ( (v24 & 4) == 0 )
        {
          v22 = *(unsigned int *)(v17 + 32);
          if ( (v22 & 4) == 0 && (v24 & 0x40000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v20, v21);
            v22 = *(unsigned int *)(v17 + 32);
          }
          v23 = (unsigned int)(*(_DWORD *)(a1 + 468) - 1);
          *(_DWORD *)(a1 + 468) = v23;
          if ( (v22 & 4) == 0 )
            --*(_DWORD *)(a1 + 472);
LABEL_28:
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(v22, v23);
        }
      }
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 && (*(_DWORD *)(v17 + 2660) & 2) != 0 && (*(_DWORD *)(v17 + 2420) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 960) != v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
        RIMResetPointerDevicePrimaryContact(v4, v18, v20, v21);
      }
      v18 = 128LL;
      v25 = *(_OWORD *)(v17 + 2360);
      *(_OWORD *)(v17 + 2584) = *(_OWORD *)(v17 + 2344);
      v26 = *(_OWORD *)(v17 + 2376);
      *(_OWORD *)(v17 + 2600) = v25;
      v27 = *(_OWORD *)(v17 + 2392);
      *(_OWORD *)(v17 + 2616) = v26;
      v28 = *(_OWORD *)(v17 + 2408);
      *(_OWORD *)(v17 + 2632) = v27;
      v29 = *(_OWORD *)(v17 + 2424);
      *(_OWORD *)(v17 + 2648) = v28;
      v30 = *(_OWORD *)(v17 + 2440);
      *(_OWORD *)(v17 + 2664) = v29;
      v31 = *(_OWORD *)(v17 + 2456);
      *(_OWORD *)(v17 + 2680) = v30;
      v19 = v17 + 2712;
      *(_OWORD *)(v17 + 2696) = v31;
      v32 = *(_OWORD *)(v17 + 2488);
      *(_OWORD *)(v17 + 2712) = *(_OWORD *)(v17 + 2472);
      v33 = *(_OWORD *)(v17 + 2504);
      *(_OWORD *)(v17 + 2728) = v32;
      v34 = *(_OWORD *)(v17 + 2520);
      *(_OWORD *)(v17 + 2744) = v33;
      v35 = *(_OWORD *)(v17 + 2536);
      *(_OWORD *)(v17 + 2760) = v34;
      v36 = *(_OWORD *)(v17 + 2552);
      *(_OWORD *)(v17 + 2776) = v35;
      v37 = *(_OWORD *)(v17 + 2568);
      *(_OWORD *)(v17 + 2792) = v36;
      *(_OWORD *)(v17 + 2808) = v37;
    }
    if ( v5 || (*(_DWORD *)(v17 + 2340) & 4) == 0 )
    {
      RIMCmResetContactFrameState(v17);
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 960) != v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
        RIMResetPointerDevicePrimaryContact(v4, v18, v20, v21);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      {
        if ( (*(_DWORD *)(v17 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
      }
      RIMCmDeactivateContact(v4, v17);
    }
  }
  if ( !v5 )
  {
    if ( v4 == *(_QWORD *)(a1 + 480) && !*(_DWORD *)(v4 + 956) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 952) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      result = 0LL;
      *(_OWORD *)(v4 + 784) = 0LL;
      *(_OWORD *)(v4 + 800) = 0LL;
      *(_OWORD *)(v4 + 816) = 0LL;
      *(_QWORD *)(v4 + 832) = 0LL;
    }
  }
  return result;
}
