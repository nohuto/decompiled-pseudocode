/*
 * XREFs of rimSetDeviceDisplayConfig @ 0x1C0165D2C
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000A540 (RIMUpdatePointerDeviceScalingInfo.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C0165BE0 (rimNotifyPointerDeviceChangeClients.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimSetDeviceDisplayConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  _BOOL8 v8; // r9
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 result; // rax

  v5 = a3;
  if ( a2 && *(_DWORD *)(a2 + 24) == 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( a2
    && v5
    && (*(_DWORD *)(a1 + 1912) != *(_DWORD *)(a4 + 16)
     || *(_DWORD *)(a1 + 1916) != *(_DWORD *)(a4 + 20)
     || *(_DWORD *)(a1 + 1920) != *(_DWORD *)(a4 + 24)
     || *(_DWORD *)(a1 + 1924) != *(_DWORD *)(a4 + 28)
     || *(_DWORD *)(a1 + 2012) != *(_DWORD *)(a4 + 116)
     || *(_DWORD *)(a1 + 2016) != *(_DWORD *)(a4 + 120)
     || *(_DWORD *)(a1 + 2020) != *(_DWORD *)(a4 + 124)
     || *(_DWORD *)(a1 + 2024) != *(_DWORD *)(a4 + 128)
     || *(_DWORD *)(a1 + 1984) != *(_DWORD *)(a4 + 88)
     || *(_DWORD *)(a1 + 1988) != *(_DWORD *)(a4 + 92)
     || *(_DWORD *)(a1 + 1952) != *(_DWORD *)(a4 + 56)
     || *(_DWORD *)(a1 + 1956) != *(_DWORD *)(a4 + 60)
     || *(_DWORD *)(a1 + 2000) != *(_DWORD *)(a4 + 104)
     || *(_DWORD *)(a1 + 2004) != *(_DWORD *)(a4 + 108)
     || RtlCompareMemory((const void *)(a1 + 2036), (const void *)(a4 + 140), 0x10uLL) != 16) )
  {
    v8 = *(_DWORD *)(a1 + 1912) != *(_DWORD *)(a4 + 16)
      || *(_DWORD *)(a1 + 1916) != *(_DWORD *)(a4 + 20)
      || *(_DWORD *)(a1 + 1924) != *(_DWORD *)(a4 + 28);
    rimNotifyPointerDeviceChangeClients((_DWORD *)a1, a2, (_DWORD *)a4, v8);
  }
  *(_OWORD *)(a1 + 1896) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 1912) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 1928) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 1944) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 1960) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 1976) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a1 + 1992) = *(_OWORD *)(a4 + 96);
  v9 = *(_OWORD *)(a4 + 112);
  v10 = a4 + 128;
  *(_OWORD *)(a1 + 2008) = v9;
  *(_OWORD *)(a1 + 2024) = *(_OWORD *)v10;
  *(_OWORD *)(a1 + 2040) = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(a1 + 2056) = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(a1 + 2072) = *(_OWORD *)(v10 + 48);
  result = *(_QWORD *)(v10 + 64);
  *(_QWORD *)(a1 + 2088) = result;
  if ( a2 )
    return RIMUpdatePointerDeviceScalingInfo((_DWORD *)(a2 + 140), (_DWORD *)(a1 + 1896), (int *)(a1 + 2096), 0LL);
  return result;
}
