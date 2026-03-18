/*
 * XREFs of _pGetAdditionalTiming @ 0x1C01DC484
 * Callers:
 *     ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01DC380 (-_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@.c)
 * Callees:
 *     _pGetAdditionalModeEntry @ 0x1C01DC5CC (_pGetAdditionalModeEntry.c)
 *     _pLoadAdditinalMode @ 0x1C01DC608 (_pLoadAdditinalMode.c)
 */

__int64 __fastcall pGetAdditionalTiming(int a1, char a2, _DWORD *a3, _QWORD *a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 AdditionalModeEntry; // rbx
  __int64 v11; // rdx
  int AdditinalMode; // eax
  __int64 v13; // rdx

  v4 = 0;
  v5 = a1;
  if ( a1 == -2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v5 == 15 )
  {
    *a3 = 0;
    *a4 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C0130EE8, 0LL);
    LOBYTE(v9) = a2;
    AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v5, v9);
    if ( !AdditionalModeEntry )
    {
      ExReleasePushLockEx(&qword_1C0130EE8, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C0130EE8, 0LL);
      LOBYTE(v11) = a2;
      AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v5, v11);
      if ( !AdditionalModeEntry )
      {
        AdditinalMode = pLoadAdditinalMode((unsigned int)v5);
        v4 = AdditinalMode;
        if ( AdditinalMode == -1073741772 || AdditinalMode == -1073741275 )
        {
          WdLogSingleEntry1(7LL, v5);
        }
        else if ( AdditinalMode >= 0 )
        {
          LOBYTE(v13) = a2;
          AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v5, v13);
          if ( !AdditionalModeEntry )
          {
            WdLogSingleEntry1(7LL, v5);
            v4 = -1073741275;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, v5, AdditinalMode);
        }
      }
    }
    ExReleasePushLockEx(&qword_1C0130EE8, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      if ( !AdditionalModeEntry )
        WdLogSingleEntry0(1LL);
      *a3 = *(_DWORD *)(AdditionalModeEntry + 16);
      *a4 = AdditionalModeEntry + 20;
    }
    else if ( AdditionalModeEntry )
    {
      WdLogSingleEntry0(1LL);
    }
    return (unsigned int)v4;
  }
}
