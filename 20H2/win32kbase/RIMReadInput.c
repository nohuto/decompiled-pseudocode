/*
 * XREFs of RIMReadInput @ 0x1C0026620
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C0022C20 (NtRIMReadInput.c)
 * Callees:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0023E10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0023ED8 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0023F98 (WPP_RECORDER_SF_qqqq.c)
 *     rimCompleteReads @ 0x1C00268A8 (rimCompleteReads.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimIssueReads @ 0x1C00276B8 (rimIssueReads.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall RIMReadInput(__int64 a1, __int64 a2, int a3, void *a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r13
  int v12; // edx
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  struct RawInputManagerObject *v16; // rbx
  char *v17; // r15
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edx
  char *v21; // rsi
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v26; // r9d
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  struct RawInputManagerObject *v29; // [rsp+60h] [rbp-49h] BYREF
  char v30[8]; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-39h] BYREF
  struct RawInputManagerObject **v32; // [rsp+90h] [rbp-19h]
  int v33; // [rsp+98h] [rbp-11h]
  int v34; // [rsp+9Ch] [rbp-Dh]

  Object = 0LL;
  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 76, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v13 >= 0 )
  {
    v16 = (struct RawInputManagerObject *)Object;
    if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 256LL, v14, v15) )
    {
      v34 = 0;
      v32 = &v29;
      v29 = v16;
      v33 = 8;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0214549, 0, 0, 3u, &v31);
    }
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v30, 1, 0);
    v17 = (char *)v16 + 104;
    RIMLockExclusive((char *)v16 + 104);
    if ( !bRimDispositionNormal(v16) )
    {
      v13 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 81, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      goto LABEL_14;
    }
    rimHandleAnyPnpRemovePendingDevices(v19);
    Handle = 0LL;
    v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 3;
        WPP_RECORDER_SF_q(
          (_DWORD)gRimLog,
          v20,
          1,
          80,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          (char)a4);
      }
      goto LABEL_14;
    }
    v21 = (char *)v16 + 568;
    RIMLockExclusive((char *)v16 + 568);
    if ( *((_QWORD *)v16 + 80) )
      rimIssueReads(v16);
    if ( !*((_BYTE *)v16 + 584) )
    {
      *((_BYTE *)v16 + 584) = 1;
      *((_QWORD *)v16 + 81) = Handle;
      *((_QWORD *)v16 + 84) = a6;
      *((_QWORD *)v16 + 83) = a7;
      *((_QWORD *)v16 + 85) = a8;
      *((_QWORD *)v16 + 86) = v10;
      *((_DWORD *)v16 + 174) = a3;
      *((_DWORD *)v16 + 164) = a5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = (struct RawInputManagerObject *)Object;
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_qqqq(
          v23,
          v22,
          v24,
          77,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          (char)Object,
          (char)a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
      rimIssueReads(v16);
      v13 = rimCompleteReads(v16);
      goto LABEL_13;
    }
    if ( *((_QWORD *)v16 + 80) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 79;
        goto LABEL_25;
      }
    }
    else
    {
      v13 = -1073740682;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 78;
LABEL_25:
        LOBYTE(v22) = 3;
        v16 = (struct RawInputManagerObject *)Object;
        WPP_RECORDER_SF_qqqq(
          v23,
          v22,
          v24,
          v26,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          (char)Object,
          (char)a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
    }
    ZwClose(Handle);
LABEL_13:
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
LABEL_14:
    *((_QWORD *)v17 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v30);
    ObfDereferenceObject(v16);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 82, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v13);
  }
  return (unsigned int)v13;
}
