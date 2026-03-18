/*
 * XREFs of KsepDbCacheReadDevice @ 0x1407403D4
 * Callers:
 *     KseQueryDeviceData @ 0x140749980 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BBEC0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14036F10C (KsepPoolAllocatePaged.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1407404BC (KsepDbCacheReadDeviceInternal.c)
 *     KseShimDatabaseClose @ 0x1407433D8 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14074564C (KseShimDatabaseOpen.c)
 *     KsepStringDuplicate @ 0x1407457E0 (KsepStringDuplicate.c)
 *     KsepCacheDeviceFree @ 0x1408BDB20 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(__int64 a1, _QWORD *a2)
{
  char *Paged; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  int DeviceInternal; // edi
  int v8; // eax
  _QWORD *v9; // rsi
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
    DeviceInternal = KsepStringDuplicate(v5 + 40, a1);
    if ( DeviceInternal >= 0 )
    {
      v8 = KseShimDatabaseOpen(&v13);
      v9 = v13;
      DeviceInternal = v8;
      if ( v8 >= 0 )
      {
        DeviceInternal = KsepDbCacheReadDeviceInternal(*v13, &KsepMatchMachineInfo, a1, v5);
        if ( (int)(DeviceInternal + 0x80000000) < 0 || DeviceInternal == -1073741275 )
        {
          v10 = v9[7];
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
    }
    if ( v5 )
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DeviceInternal;
}
