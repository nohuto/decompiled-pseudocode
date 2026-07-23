/*
 * XREFs of KseQueryDeviceDataList @ 0x1408BF540
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14094A348 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x140372140 (KsepShimDbChanged.c)
 *     memset @ 0x140414300 (memset.c)
 *     KsepCacheLock @ 0x1407499D0 (KsepCacheLock.c)
 *     KsepDbCacheReadDevice @ 0x14075603C (KsepDbCacheReadDevice.c)
 *     KsepCacheLookup @ 0x14075F970 (KsepCacheLookup.c)
 *     KsepDbCacheInsertDevice @ 0x1407CCE88 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1408BF6AC (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1408BF8AC (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFC20 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceFree @ 0x1408C11A0 (KsepCacheDeviceFree.c)
 *     KsepCacheUnlock @ 0x1408C12E8 (KsepCacheUnlock.c)
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
  if ( dword_140C50624 != 2 || (KseEngine & 2) != 0 )
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
      RegistryDeviceDataList = KsepDbCacheReadDevice((__int64)SourceString, (__int64 *)&v13);
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
    KsepCacheLock(qword_140C50668);
    v9 = KsepCacheLookup(qword_140C50668, (__int64)v14);
    v13 = v9;
    v10 = v9;
    if ( v9 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v9, a2, a3, a4);
    KsepCacheUnlock(qword_140C50668);
    if ( !v10 )
      goto LABEL_11;
  }
  return (unsigned int)RegistryDeviceDataList;
}
