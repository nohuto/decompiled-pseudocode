/*
 * XREFs of KseQueryDeviceData @ 0x140758560
 * Callers:
 *     KseQueryDeviceFlags @ 0x140758B20 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x14094C9A8 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x1403710B8 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x140371F10 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x140525408 (KsepDebugPrint.c)
 *     KsepDbCacheReadDevice @ 0x14074EFB4 (KsepDbCacheReadDevice.c)
 *     KsepDbCacheQueryDevice @ 0x1407586E8 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1407589DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407C3904 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheInsertDevice @ 0x1407C8A58 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1408C1D8C (KseResetDeviceCache.c)
 *     KsepCacheDeviceFree @ 0x1408C3880 (KsepCacheDeviceFree.c)
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
  if ( dword_140C50464 != 2 || (KseEngine & 2) != 0 )
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
