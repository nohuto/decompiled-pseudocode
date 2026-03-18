/*
 * XREFs of KsepDbCacheReadDevice @ 0x1407ED450
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1402D84BC (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x14075C588 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14075C68C (KseShimDatabaseOpen.c)
 *     KsepStringDuplicate @ 0x14075C924 (KsepStringDuplicate.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1407ED53C (KsepDbCacheReadDeviceInternal.c)
 *     KsepCacheDeviceFree @ 0x140965070 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(_WORD *a1, _QWORD *a2)
{
  char *Paged; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  int DeviceInternal; // edi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v12; // eax
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = Paged;
  if ( Paged )
  {
    v6 = Paged + 56;
    v6[1] = v6;
    *v6 = v6;
    DeviceInternal = KsepStringDuplicate((__int64)(v5 + 40), a1);
    if ( DeviceInternal < 0 )
      goto LABEL_17;
    v8 = KseShimDatabaseOpen(&v13);
    v9 = (__int64)v13;
    DeviceInternal = v8;
    if ( v8 >= 0 )
    {
      DeviceInternal = KsepDbCacheReadDeviceInternal(*v13, &KsepMatchMachineInfo, a1, v5);
      if ( (int)(DeviceInternal + 0x80000000) < 0 || DeviceInternal == -1073741275 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        if ( !v10
          || (v12 = KsepDbCacheReadDeviceInternal(v10, &KsepMatchMachineInfo, a1, v5),
              ((v12 + 0x80000000) & 0x80000000) != 0)
          || v12 == -1073741275 )
        {
          *a2 = v5;
          v5 = 0LL;
        }
      }
    }
    if ( v9 )
      KseShimDatabaseClose(v9);
    if ( v5 )
LABEL_17:
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DeviceInternal;
}
