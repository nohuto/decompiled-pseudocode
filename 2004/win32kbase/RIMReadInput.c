/*
 * XREFs of RIMReadInput @ 0x1C00ABA70
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C00503D0 (NtRIMReadInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0054770 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0056724 (WPP_RECORDER_SF_qqqq.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00576E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimIssueReads @ 0x1C00AB7E4 (rimIssueReads.c)
 *     rimCompleteReads @ 0x1C00AB9B0 (rimCompleteReads.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall RIMReadInput(char *a1, __int64 a2, int a3, void *a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r13
  int v12; // edx
  int v13; // edi
  struct RawInputManagerObject *v14; // rbx
  char *v15; // r15
  int v16; // edx
  __int64 v17; // rcx
  int v18; // edx
  char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 v27; // r9
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  struct RawInputManagerObject *v30; // [rsp+60h] [rbp-49h] BYREF
  char v31[8]; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-39h] BYREF
  struct RawInputManagerObject **v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+98h] [rbp-11h]
  int v35; // [rsp+9Ch] [rbp-Dh]

  Object = 0LL;
  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 76, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    v14 = (struct RawInputManagerObject *)Object;
    if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
    {
      v35 = 0;
      v33 = &v30;
      v30 = v14;
      v34 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0246A70,
        (unsigned __int8 *)dword_1C02163B8,
        0LL,
        0LL,
        3u,
        &v32);
    }
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v31, 1, 0);
    v15 = (char *)v14 + 104;
    RIMLockExclusive((__int64)v14 + 104);
    if ( !bRimDispositionNormal(v14) )
    {
      v13 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 81, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      goto LABEL_14;
    }
    rimHandleAnyPnpRemovePendingDevices(v17);
    Handle = 0LL;
    v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_q(
          (_DWORD)gRimLog,
          v18,
          1,
          80,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          (char)a4);
      }
      goto LABEL_14;
    }
    v19 = (char *)v14 + 568;
    RIMLockExclusive((__int64)v14 + 568);
    if ( *((_QWORD *)v14 + 80) )
      rimIssueReads((__int64)v14, v20, v22);
    if ( !*((_BYTE *)v14 + 584) )
    {
      *((_BYTE *)v14 + 584) = 1;
      *((_QWORD *)v14 + 81) = Handle;
      *((_QWORD *)v14 + 84) = a6;
      *((_QWORD *)v14 + 83) = a7;
      *((_QWORD *)v14 + 85) = a8;
      *((_QWORD *)v14 + 86) = v10;
      *((_DWORD *)v14 + 174) = a3;
      *((_DWORD *)v14 + 164) = a5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = (struct RawInputManagerObject *)Object;
        WPP_RECORDER_SF_qqqq(
          v21,
          4u,
          v22,
          0x4Du,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          Object,
          a4,
          Handle,
          KeGetCurrentThread());
      }
      rimIssueReads((__int64)v14, v20, v22);
      v13 = rimCompleteReads(v14, v23, v24, v25);
      goto LABEL_13;
    }
    if ( *((_QWORD *)v14 + 80) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 79;
        goto LABEL_25;
      }
    }
    else
    {
      v13 = -1073740682;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 78;
LABEL_25:
        v14 = (struct RawInputManagerObject *)Object;
        WPP_RECORDER_SF_qqqq(
          v21,
          3u,
          v22,
          v27,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          Object,
          a4,
          Handle,
          KeGetCurrentThread());
      }
    }
    ZwClose(Handle);
LABEL_13:
    *((_QWORD *)v19 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
LABEL_14:
    *((_QWORD *)v15 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v31);
    ObfDereferenceObject(v14);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 82, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v13);
  }
  return (unsigned int)v13;
}
