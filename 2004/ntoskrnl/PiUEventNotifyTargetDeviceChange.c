/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x140648658
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140647610 (PiUEventProcessEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x140272B3C (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PiUEventApplyAdditionalFilters @ 0x140648158 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x14064824C (PiUEventNotifyClient.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1)
{
  _DWORD *v1; // rdi
  char v2; // si
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  const WCHAR *v13; // r13
  _QWORD **v14; // r12
  _QWORD *v15; // r14
  char v16; // al
  __int64 v17; // rsi
  __int64 v19; // rdx
  _DWORD *PoolWithTag; // rax
  ULONG v21; // r8d
  char v22; // [rsp+80h] [rbp+8h]
  char v23; // [rsp+88h] [rbp+10h]

  v1 = 0LL;
  v2 = 0;
  v22 = 0;
  v3 = 0;
  v23 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v10 )
  {
LABEL_16:
    v11 = *(_DWORD *)(a1 + 88) - 1;
    if ( v11 )
    {
      if ( v11 != 2 )
        return (unsigned int)v3;
      v22 = 1;
      v12 = 128LL;
    }
    else
    {
      v12 = 120LL;
    }
    v13 = (const WCHAR *)(v12 + a1);
    if ( *(_BYTE *)(a1 + 68) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x59706E50u);
      v1 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x1000uLL);
      v4 = 1;
    }
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v14 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v13));
    v15 = *v14;
    if ( *v14 != v14 )
    {
      v16 = v22;
      do
      {
        v17 = (__int64)v15;
        v15 = (_QWORD *)*v15;
        if ( !v16 || !*(_BYTE *)(v17 + 40) )
        {
          if ( wcsicmp(v13, *(const wchar_t **)(*(_QWORD *)(v17 + 24) + 16LL))
            || !PiUEventApplyAdditionalFilters(a1, v17)
            || (v3 = PiUEventNotifyClient(a1, v17), v3 < 0) )
          {
            v16 = v22;
          }
          else
          {
            v16 = v22;
            if ( v1 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v23 = 1;
                continue;
              }
              v19 = v4++;
              v1[v19] = *(_DWORD *)(v17 + 48);
            }
          }
        }
        v2 = v23;
      }
      while ( v15 != v14 );
    }
    if ( v1 && v4 > 1 )
    {
      if ( v2 )
      {
        memset(v1 + 1, 0, 0xFFCuLL);
        *v1 = -1;
        v21 = 4;
      }
      else
      {
        v21 = 4096;
        *v1 = v4 - 1;
      }
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, v1, v21, 0LL, 0LL, 0, 0);
    }
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
    if ( v1 )
      ExFreePoolWithTag(v1, 0x59706E50u);
  }
  return (unsigned int)v3;
}
