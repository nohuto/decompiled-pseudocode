/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x1C005A46C
 * Callers:
 *     rimDeviceResetApc @ 0x1C00574F0 (rimDeviceResetApc.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *ApcContext, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v5; // edi
  int v6; // edx
  char *v8; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-40h] BYREF
  char **v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+80h] [rbp-18h]
  int v12; // [rsp+84h] [rbp-14h]

  if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, a3, a4) )
  {
    v12 = 0;
    v10 = &v8;
    v8 = ApcContext;
    v11 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024C960, (unsigned __int8 *)dword_1C021E4A5, 0LL, 0LL, 3u, &v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_a1cd941ed8813a57445e216c28be9b1b_Traceguids,
      (char)ApcContext);
  ObfReferenceObject(*((PVOID *)ApcContext + 4));
  v5 = ZwDeviceIoControlFile(
         *((HANDLE *)ApcContext + 28),
         0LL,
         (PIO_APC_ROUTINE)rimDeviceResetApc,
         ApcContext,
         (PIO_STATUS_BLOCK)(ApcContext + 168),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v5 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)ApcContext + 4));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 11, (__int64)&WPP_a1cd941ed8813a57445e216c28be9b1b_Traceguids);
    }
  }
  return (unsigned int)v5;
}
