/*
 * XREFs of PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140571824
 * Callers:
 *     PopThermalWorker @ 0x1407BBE70 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalZoneThrottleDurationPerfTrack(int a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  __int16 v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int16 *v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]
  int v14; // [rsp+80h] [rbp+10h] BYREF

  v14 = a1;
  v7 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
    v4 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = *(_WORD *)(v5 + 128) >> 1;
      UserData.Ptr = (ULONGLONG)&v14;
      v7 = v6;
      v9 = &v7;
      *(_QWORD *)&UserData.Size = 4LL;
      v10 = 2LL;
      v11 = *(_QWORD *)(v5 + 136);
      v12 = 2 * v6;
      v13 = 0;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK, 0LL, 3u, &UserData);
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  }
}
