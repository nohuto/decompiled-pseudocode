/*
 * XREFs of PoThermalCounterSetCallback @ 0x140990360
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcspbrk @ 0x1403E39D0 (wcspbrk.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x140990634 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2)
{
  NTSTATUS v2; // ebp
  struct _KTHREAD *CurrentThread; // rax
  char v4; // r15
  struct _PCW_BUFFER *v7; // r12
  PVOID *i; // rbx
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rdi
  const UNICODE_STRING *v11; // r14
  char *v12; // rax
  signed __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  ULONG v16; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  if ( a1 == 2 )
  {
    v7 = (struct _PCW_BUFFER *)a2[3];
LABEL_6:
    v4 = 1;
    goto LABEL_7;
  }
  if ( a1 != 3 )
    goto LABEL_26;
  v7 = (struct _PCW_BUFFER *)a2[3];
  if ( wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") )
    goto LABEL_6;
LABEL_7:
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    if ( (*((_BYTE *)i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)i[6], 0x6D546F50u);
      v10 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag
        && (v11 = *(const UNICODE_STRING **)(DeviceAttachmentBaseRefWithTag[39] + 40LL)) != 0LL )
      {
        if ( v4 )
          goto LABEL_16;
        v12 = *(char **)(a2[1] + 8LL);
        v13 = (char *)v11[8].Buffer - v12;
        do
        {
          v14 = *(unsigned __int16 *)&v12[v13];
          v15 = *(unsigned __int16 *)v12 - v14;
          if ( v15 )
            break;
          v12 += 2;
        }
        while ( v14 );
        if ( !v15 )
        {
LABEL_16:
          v19 = 0LL;
          if ( a1 == 3 )
          {
            v2 = PopThermalReadCounters(i, *a2, &v19);
            if ( v2 < 0 )
            {
              ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
              break;
            }
          }
          v16 = *((_DWORD *)i + 124);
          Data.Data = &v19;
          Data.Size = 16;
          v2 = PcwAddInstance(v7, v11 + 8, v16, 1u, &Data);
        }
        ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
        if ( v2 < 0 )
          break;
      }
      else
      {
        ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x6D546F50u);
      }
    }
  }
LABEL_26:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  return (unsigned int)v2;
}
