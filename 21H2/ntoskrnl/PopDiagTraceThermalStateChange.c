/*
 * XREFs of PopDiagTraceThermalStateChange @ 0x14057335C
 * Callers:
 *     PopDiagTraceThermalOverthrottleState @ 0x140573324 (PopDiagTraceThermalOverthrottleState.c)
 *     PopDiagTraceThermalStandbyState @ 0x140573340 (PopDiagTraceThermalStandbyState.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalStateChange(__int64 a1, int a2, const EVENT_DESCRIPTOR *a3)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rbx
  __int64 v7; // rdx
  int v8; // ecx
  __int16 v9; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int *v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+98h] [rbp+28h] BYREF

  v16 = a2;
  v9 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a3) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67446F50u);
    v6 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v8 = *(_WORD *)(v7 + 128) >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      v9 = v8;
      *(_QWORD *)&UserData.Size = 2LL;
      v11 = *(_QWORD *)(v7 + 136);
      v14 = &v16;
      v12 = 2 * v8;
      v13 = 0;
      v15 = 4LL;
      EtwWrite(PopDiagHandle, a3, 0LL, 3u, &UserData);
    }
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x67446F50u);
  }
}
