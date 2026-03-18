/*
 * XREFs of rimDeviceResetApc @ 0x1C00BC610
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverDeviceResetRequest @ 0x1C0022964 (RIMDeliverDeviceResetRequest.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall rimDeviceResetApc(PVOID *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  HANDLE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  PVOID *v11; // [rsp+30h] [rbp-58h] BYREF
  char v12[8]; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-48h] BYREF
  PVOID *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v12, 1, 0);
  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v16 = 0;
    v14 = (PVOID *)&v11;
    v11 = ApcContext;
    v15 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0244A70, (unsigned __int8 *)dword_1C0216A8F, 0LL, 0LL, 3u, &v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)gRimLog,
      v5,
      1,
      12,
      (__int64)&WPP_a1cd941ed8813a57445e216c28be9b1b_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v6 = (HANDLE *)ApcContext[42];
    RIMLockExclusive((__int64)(v6 + 13));
    v10 = *((_DWORD *)ApcContext + 46);
    if ( (v10 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v10 | 0x80000;
      ZwSetEvent(v6[48], 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext, v7, v8, v9);
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(ApcContext[4]);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v12);
}
