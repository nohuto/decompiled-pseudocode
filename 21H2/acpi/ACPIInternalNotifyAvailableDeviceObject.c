/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A2218
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_sqL @ 0x1C002AF3C (WPP_RECORDER_SF_sqL.c)
 *     AMLIGetNSObjectNotifyFlag @ 0x1C002D354 (AMLIGetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_sqSD @ 0x1C00532D8 (WPP_RECORDER_SF_sqSD.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0099CE0 (ACPIQueryDeviceBiosName.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C00AF084 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING P; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 720);
  P = 0LL;
  if ( v2 && AMLIGetNSObjectNotifyFlag(v2) )
  {
    v3 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 728), &P);
    if ( v3 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation(&P, *(_QWORD *)(a1 + 728));
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7, v8, v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v3;
      WPP_RECORDER_SF_sqL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x14u,
        (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
        "ACPIInternalNotifyAvailableDeviceObject",
        *(_QWORD *)(a1 + 728),
        v10);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x53706341u);
  return (unsigned int)v3;
}
