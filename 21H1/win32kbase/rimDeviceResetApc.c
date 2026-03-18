/*
 * XREFs of rimDeviceResetApc @ 0x1C00574F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C005A46C (RIMDeliverDeviceResetRequest.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall rimDeviceResetApc(PVOID *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE *v8; // rsi
  int v9; // eax
  PVOID *v10; // [rsp+30h] [rbp-58h] BYREF
  char v11[8]; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-48h] BYREF
  PVOID *v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v11, 1, 0);
  if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, v6, v7) )
  {
    v15 = 0;
    v13 = (PVOID *)&v10;
    v10 = ApcContext;
    v14 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024C960, (unsigned __int8 *)dword_1C021E46E, 0LL, 0LL, 3u, &v12);
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
    v9 = *((_DWORD *)ApcContext + 46);
    if ( (v9 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v9 | 0x80000;
      ZwSetEvent(v8[48], 0LL);
    }
    RIMDeliverDeviceResetRequest(ApcContext);
    v8[14] = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 13, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(ApcContext[4]);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v11);
}
