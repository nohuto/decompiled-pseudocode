/*
 * XREFs of PopDiagTraceThermalCoolingMode @ 0x1407C0E90
 * Callers:
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalCoolingMode(__int64 a1, __int16 a2)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  const WCHAR *v8; // rdx
  unsigned __int16 v10; // [rsp+38h] [rbp-19h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  __int16 *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  wchar_t *Buffer; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v11 = 0;
  DestinationString = 0LL;
  v10 = 0;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67446F50u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v6 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v10 = *(_WORD *)(v6 + 128) >> 1;
        UserData.Ptr = (ULONGLONG)&v10;
        *(_QWORD *)&UserData.Size = 2LL;
        v7 = *(_QWORD *)(v6 + 136);
        v8 = L"active";
        v15 = 2 * v10;
        v14 = v7;
        v16 = 0;
        if ( a2 )
          v8 = L"passive";
        RtlInitUnicodeString(&DestinationString, v8);
        v11 = DestinationString.Length >> 1;
        v17 = &v11;
        Buffer = DestinationString.Buffer;
        v20 = 2 * (DestinationString.Length >> 1);
        v18 = 2LL;
        v21 = 0;
        LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwWrite(
                                                   PopDiagHandle,
                                                   &POP_ETW_EVENT_COOLING_MODE,
                                                   0LL,
                                                   4u,
                                                   &UserData);
      }
      if ( v5 )
        LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
