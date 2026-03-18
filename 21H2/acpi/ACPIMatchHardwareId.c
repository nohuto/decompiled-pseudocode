/*
 * XREFs of ACPIMatchHardwareId @ 0x1C00930D8
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00932F8 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_SqLL @ 0x1C000692C (WPP_RECORDER_SF_SqLL.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0093610 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h]
  _DWORD v12[18]; // [rsp+60h] [rbp-19h] BYREF

  *a3 = 0;
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 4891;
  v12[2] = 1;
  DestinationString = 0LL;
  v6 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v6 >= 0 )
    ExFreePoolWithTag(0LL, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v7, v8, v10, String2->Buffer);
  return (unsigned int)v6;
}
