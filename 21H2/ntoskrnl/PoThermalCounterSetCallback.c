/*
 * XREFs of PoThermalCounterSetCallback @ 0x1408E7B20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAcquireRwLockShared @ 0x140272D04 (PopAcquireRwLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcspbrk @ 0x1403D47C0 (wcspbrk.c)
 *     PcwAddInstance @ 0x1405E7060 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x1408E7DD0 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2)
{
  NTSTATUS v4; // ebp
  char v5; // r15
  struct _PCW_BUFFER *v6; // r13
  PVOID *i; // rbx
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rdi
  const UNICODE_STRING *v10; // rsi
  char *v11; // rcx
  signed __int64 v12; // r8
  int v13; // edx
  int v14; // eax
  ULONG v15; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF

  v18 = 0LL;
  v4 = 0;
  v5 = 0;
  PopAcquireRwLockShared((ULONG_PTR)&PopPolicyDeviceLock);
  if ( a1 == 2 )
  {
    v6 = (struct _PCW_BUFFER *)a2[3];
LABEL_6:
    v5 = 1;
    goto LABEL_7;
  }
  if ( a1 != 3 )
    goto LABEL_27;
  v6 = (struct _PCW_BUFFER *)a2[3];
  if ( wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") )
    goto LABEL_6;
LABEL_7:
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    if ( (*((_BYTE *)i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)i[6], 0x6D546F50u);
      v9 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v10 = *(const UNICODE_STRING **)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
      else
        v10 = 0LL;
      if ( v10 )
      {
        if ( v5 )
          goto LABEL_19;
        v11 = *(char **)(a2[1] + 8LL);
        v12 = (char *)v10[8].Buffer - v11;
        do
        {
          v13 = *(unsigned __int16 *)&v11[v12];
          v14 = *(unsigned __int16 *)v11 - v13;
          if ( v14 )
            break;
          v11 += 2;
        }
        while ( v13 );
        if ( !v14 )
        {
LABEL_19:
          v18 = 0LL;
          if ( a1 == 3 )
          {
            v4 = PopThermalReadCounters(i, *a2, &v18);
            if ( v4 < 0 )
            {
              ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
              break;
            }
          }
          v15 = *((_DWORD *)i + 124);
          Data.Data = &v18;
          Data.Size = 16;
          v4 = PcwAddInstance(v6, v10 + 8, v15, 1u, &Data);
        }
        ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
        if ( v4 < 0 )
          break;
      }
      else
      {
        ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x6D546F50u);
      }
    }
  }
LABEL_27:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  return (unsigned int)v4;
}
