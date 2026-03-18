/*
 * XREFs of KseQueryDeviceData @ 0x140749980
 * Callers:
 *     KseQueryDeviceFlags @ 0x140749F40 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x140946BE8 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x14036F168 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x14036FFC0 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x140521A38 (KsepDebugPrint.c)
 *     KsepDbCacheReadDevice @ 0x1407403D4 (KsepDbCacheReadDevice.c)
 *     KsepDbCacheQueryDevice @ 0x140749B08 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140749DFC (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407B50D4 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x1407BA1C8 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1408BC02C (KseResetDeviceCache.c)
 *     KsepCacheDeviceFree @ 0x1408BDB20 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, int *a3, _DWORD *a4, void *a5)
{
  int v6; // edi
  int v9; // eax
  int RegistryDeviceData; // ebx
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rax
  void *v15; // [rsp+20h] [rbp-38h]
  int v16[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v16 = 0LL;
  v6 = (int)a3;
  if ( dword_140C503E4 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *a3;
  *a3 = 0;
  if ( (v9 & 0x20000000) == 0 )
  {
    HIDWORD(v15) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData(SourceString);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache();
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_14;
  }
  RegistryDeviceData = KsepDbCacheReadDevice((__int64)SourceString, v16);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v12 = v6;
  v13 = *(_QWORD *)v16;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v16[0], a2, v12, (int)a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
    KsepCacheDeviceFree(v13);
LABEL_14:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v14]) = 0;
    LODWORD(KsepHistoryMessages[v14]) = 592101;
    if ( (KsepDebugFlag & 1) != 0 )
    {
      LODWORD(v15) = RegistryDeviceData;
      KsepDebugPrint(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v15);
    }
    LODWORD(v15) = RegistryDeviceData;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v15);
  }
  return (unsigned int)RegistryDeviceData;
}
