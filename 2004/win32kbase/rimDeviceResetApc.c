/*
 * XREFs of rimDeviceResetApc @ 0x1C0019BE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverDeviceResetRequest @ 0x1C0016958 (RIMDeliverDeviceResetRequest.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void __fastcall rimDeviceResetApc(PVOID *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  PVOID *v13; // [rsp+30h] [rbp-58h] BYREF
  char v14[8]; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-48h] BYREF
  PVOID *v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v14, 1, 0);
  if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 256LL, v6, v7) )
  {
    v18 = 0;
    v16 = (PVOID *)&v13;
    v13 = ApcContext;
    v17 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C02188FE, 0, 0, 3u, &v15);
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
    v8 = (HANDLE *)ApcContext[42];
    RIMLockExclusive(v8 + 13);
    v12 = *((_DWORD *)ApcContext + 46);
    if ( (v12 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v12 | 0x80000;
      ZwSetEvent(v8[48], 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext, v9, v10, v11);
    v8[14] = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 13, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(ApcContext[4]);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v14);
}
