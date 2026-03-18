/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C0026EE8
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C0026E20 (DpiGetDeviceRegistryPaths.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C02BA328 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03788C4 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v7; // rdi
  NTSTATUS v8; // eax
  SIZE_T v9; // rdx
  PVOID v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Length = 0;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &KeyHandle);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    return v5;
  }
  v5 = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  if ( v5 == -1073741789 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      goto LABEL_8;
    }
    memset(PoolWithTag, 0, Length);
    v8 = ZwQueryKey(KeyHandle, KeyNameInformation, v7, Length, &Length);
    v5 = v8;
    if ( v8 < 0 )
    {
      v12 = v8;
      v13 = 2LL;
    }
    else
    {
      v9 = (unsigned __int16)(*v7 + 2);
      a3[1] = v9;
      *a3 = *v7;
      v10 = ExAllocatePoolWithTag(PagedPool, v9, 0x74727044u);
      *((_QWORD *)a3 + 1) = v10;
      if ( v10 )
      {
        memset(v10, 0, a3[1]);
        memmove(*((void **)a3 + 1), v7 + 2, *a3);
LABEL_7:
        ExFreePoolWithTag(v7, 0x74727044u);
        goto LABEL_8;
      }
      v12 = -1073741801LL;
      v5 = -1073741801;
      v13 = 6LL;
    }
    WdLogSingleEntry1(v13, v12);
    goto LABEL_7;
  }
LABEL_8:
  ZwClose(KeyHandle);
  return v5;
}
