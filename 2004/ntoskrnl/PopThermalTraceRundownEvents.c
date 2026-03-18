/*
 * XREFs of PopThermalTraceRundownEvents @ 0x140278680
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14064EB10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAcquireRwLockShared @ 0x140278790 (PopAcquireRwLockShared.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 PopThermalTraceRundownEvents()
{
  PVOID *v0; // rbx
  char v1; // si
  __int64 v2; // rdi
  unsigned __int8 v3; // r14
  char v4; // si
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int16 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v14; // [rsp+54h] [rbp-B4h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+60h] [rbp-A8h] BYREF
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  int v22; // [rsp+94h] [rbp-74h]
  __int16 *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int16 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  PVOID v37; // [rsp+108h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+8h]
  int v39; // [rsp+114h] [rbp+Ch]

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  v0 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      v1 = *((_BYTE *)v0 + 65);
      if ( (v1 & 2) != 0 )
      {
        v2 = (__int64)v0[6];
        v3 = v1 & 1;
        LODWORD(v18) = *((unsigned __int8 *)v0 + 73);
        v4 = v1 & 4;
        v17 = *((unsigned __int8 *)v0 + 72);
        v16 = *((_DWORD *)v0 + 20);
        v15 = *((unsigned __int8 *)v0 + 69);
        v12 = 0;
        v14 = 0;
        v11 = 0;
        LOWORD(v13) = 0;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x67446F50u);
            v7 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
              v8 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
            else
              v8 = 0LL;
            if ( v8 )
            {
              v9 = *(_WORD *)(v8 + 128) >> 1;
              UserData.Ptr = (ULONGLONG)&v11;
              v11 = v9;
              *(_QWORD *)&UserData.Size = 2LL;
              v20 = *(_QWORD *)(v8 + 136);
              v21 = 2 * v9;
              v10 = *((unsigned __int16 *)v0 + 520);
              v12 = v4 != 0;
              v38 = v10;
              v23 = &v12;
              v25 = &v15;
              LOWORD(v13) = v3;
              v27 = &v13;
              v29 = &v16;
              v31 = &v17;
              v33 = &v18;
              v14 = (unsigned __int16)v10 >> 1;
              v35 = &v14;
              v37 = v0[131];
              v22 = 0;
              v24 = 2LL;
              v26 = 4LL;
              v28 = 2LL;
              v30 = 4LL;
              v32 = 4LL;
              v34 = 4LL;
              v36 = 2LL;
              v39 = 0;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 0, 0LL, 0LL, 0xAu, &UserData);
            }
            if ( v7 )
              ObfDereferenceObjectWithTag(v7, 0x67446F50u);
          }
        }
      }
      v0 = (PVOID *)*v0;
    }
    while ( v0 != &PopThermal );
  }
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
