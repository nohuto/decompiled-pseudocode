/*
 * XREFs of _pGetAdditionalTiming @ 0x1C0183FCC
 * Callers:
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183EE0 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 * Callees:
 *     _pGetAdditionalModeEntry @ 0x1C0184128 (_pGetAdditionalModeEntry.c)
 *     _pLoadAdditinalMode @ 0x1C0184170 (_pLoadAdditinalMode.c)
 */

__int64 __fastcall pGetAdditionalTiming(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  char v8; // bp
  __int64 v9; // rdx
  __int64 AdditionalModeEntry; // rbx
  __int64 v11; // rdx
  int AdditinalMode; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v4 = (int)a1;
  LODWORD(v5) = 0;
  v8 = a2;
  if ( (_DWORD)a1 == -2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (_DWORD)v4 == 15 )
  {
    *a3 = 0;
    *a4 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C00B0D88, 0LL);
    LOBYTE(v9) = v8;
    AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v9);
    if ( !AdditionalModeEntry )
    {
      ExReleasePushLockEx(&qword_1C00B0D88, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C00B0D88, 0LL);
      LOBYTE(v11) = v8;
      AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v11);
      if ( !AdditionalModeEntry )
      {
        AdditinalMode = pLoadAdditinalMode((unsigned int)v4);
        v5 = AdditinalMode;
        if ( AdditinalMode == -1073741275 || AdditinalMode == -1073741772 )
        {
          v25 = WdLogNewEntry5_WdDmmEvent(v14);
          *(_QWORD *)(v25 + 24) = v4;
          WdLogEvent5_WdDmmEvent(v25);
        }
        else if ( AdditinalMode < 0 )
        {
          v23 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v23 + 24) = v4;
          *(_QWORD *)(v23 + 32) = v5;
          WdLogEvent5_WdWarning(v23);
        }
        else
        {
          LOBYTE(v13) = v8;
          AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v13);
          if ( !AdditionalModeEntry )
          {
            v24 = WdLogNewEntry5_WdDmmEvent(v16);
            *(_QWORD *)(v24 + 24) = v4;
            WdLogEvent5_WdDmmEvent(v24);
            LODWORD(v5) = -1073741275;
          }
        }
      }
    }
    ExReleasePushLockEx(&qword_1C00B0D88, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v5 < 0 )
    {
      if ( AdditionalModeEntry )
      {
        v27 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v27);
      }
    }
    else
    {
      if ( !AdditionalModeEntry )
      {
        v26 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v26);
      }
      *a3 = *(_DWORD *)(AdditionalModeEntry + 16);
      *a4 = AdditionalModeEntry + 20;
    }
    return (unsigned int)v5;
  }
}
