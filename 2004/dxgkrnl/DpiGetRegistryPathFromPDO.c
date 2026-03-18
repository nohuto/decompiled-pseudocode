/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C0021AC8
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C0021A00 (DpiGetDeviceRegistryPaths.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C020BF14 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0248EF8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int16 *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rsi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  SIZE_T v17; // rdx
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Length = 0;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &KeyHandle);
  v7 = v4;
  if ( v4 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v24 + 24) = v7;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    LODWORD(v7) = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v7 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v14 = ZwQueryKey(KeyHandle, KeyNameInformation, v13, Length, &Length);
        v7 = v14;
        if ( v14 < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v16, v15);
          *(_QWORD *)(v26 + 24) = v7;
          WdLogEvent5_WdError(v26);
        }
        else
        {
          v17 = (unsigned __int16)(*v13 + 2);
          a3[1] = v17;
          *a3 = *v13;
          v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x74727044u);
          *((_QWORD *)a3 + 1) = v18;
          if ( v18 )
          {
            memset(v18, 0, a3[1]);
            memmove(*((void **)a3 + 1), v13 + 2, *a3);
          }
          else
          {
            LODWORD(v7) = -1073741801;
            v27 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
            *(_QWORD *)(v27 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v27);
          }
        }
        ExFreePoolWithTag(v13, 0x74727044u);
      }
      else
      {
        LODWORD(v7) = -1073741801;
        v25 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
        *(_QWORD *)(v25 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v25);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v7;
}
