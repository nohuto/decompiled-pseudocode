/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x140389CD4
 * Callers:
 *     PopThermalSxEntry @ 0x140389B08 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14056DEF0 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1408EA580 (PopThermalZoneRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14023D318 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagSnapPassiveHistogram @ 0x14038A6B4 (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v3; // rbx
  __int64 v4; // rdi
  const size_t *v5; // r9
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v8; // [rsp+58h] [rbp-B0h]
  __int64 v9; // [rsp+60h] [rbp-A8h]
  __int64 v10; // [rsp+68h] [rbp-A0h]
  _DWORD v11[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v12[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v13; // [rsp+88h] [rbp-80h]
  int v14; // [rsp+90h] [rbp-78h]
  int v15; // [rsp+94h] [rbp-74h]
  void *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  _BYTE v19[96]; // [rsp+A8h] [rbp-60h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v3 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v4 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = PopDiagSnapPassiveHistogram(a1 + 504, v19);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag || PopThermalTelemetryVerbosity )
    {
      DeviceAttachmentBaseRefWithTag = *(void **)(a1 + 1048);
      if ( (unsigned int)dword_140C021E8 > 5 )
      {
        LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL);
        if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
        {
          v11[1] = 0;
          v8 = v11;
          v10 = *(_QWORD *)(v4 + 136);
          v11[0] = *(unsigned __int16 *)(v4 + 128);
          v9 = 2LL;
          tlgCreate1Sz_wchar_t((__int64)v12, v5);
          v15 = 0;
          v18 = 0;
          v16 = &PopThermalTrackingThresholds;
          v13 = v19;
          v14 = 84;
          v17 = 21;
          LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgWriteTransfer_EtwWriteTransfer(
                                                     (__int64)&dword_140C021E8,
                                                     (unsigned __int8 *)&dword_1400272C4,
                                                     0LL,
                                                     0LL,
                                                     7u,
                                                     &v7);
        }
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v3, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
