/*
 * XREFs of KseQueryDeviceDataList @ 0x1408C1C20
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14094C9A8 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x140371F10 (KsepShimDbChanged.c)
 *     memset @ 0x140411300 (memset.c)
 *     KsepCacheLock @ 0x1407440F0 (KsepCacheLock.c)
 *     KsepDbCacheReadDevice @ 0x14074EFB4 (KsepDbCacheReadDevice.c)
 *     KsepCacheLookup @ 0x1407588F0 (KsepCacheLookup.c)
 *     KsepDbCacheInsertDevice @ 0x1407C8A58 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1408C1D8C (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1408C1F8C (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408C2300 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceFree @ 0x1408C3880 (KsepCacheDeviceFree.c)
 *     KsepCacheUnlock @ 0x1408C39C8 (KsepCacheUnlock.c)
 */

__int64 __fastcall KseQueryDeviceDataList(PCWSTR SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rsi
  _QWORD *v13; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v14[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v14, 0, 0x48uLL);
  v13 = 0LL;
  if ( dword_140C50464 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList(SourceString, a2, a3, a4);
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_11:
      RegistryDeviceDataList = KsepDbCacheReadDevice((__int64)SourceString, &v13);
      if ( RegistryDeviceDataList >= 0 )
      {
        v11 = (__int64)v13;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v13, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, v11) < 0 )
          KsepCacheDeviceFree(v11);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&v14[5], SourceString);
    KsepCacheLock(qword_140C504A8);
    v9 = KsepCacheLookup(qword_140C504A8, (__int64)v14);
    v13 = v9;
    v10 = v9;
    if ( v9 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v9, a2, a3, a4);
    KsepCacheUnlock(qword_140C504A8);
    if ( !v10 )
      goto LABEL_11;
  }
  return (unsigned int)RegistryDeviceDataList;
}
