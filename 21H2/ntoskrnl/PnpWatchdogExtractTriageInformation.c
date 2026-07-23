/*
 * XREFs of PnpWatchdogExtractTriageInformation @ 0x14050F180
 * Callers:
 *     PnpWatchdogBugcheck @ 0x14050EDB0 (PnpWatchdogBugcheck.c)
 *     PnpWatchdogEtwWrite @ 0x1408AB9F4 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PnpWatchdogExtractTriageInformation(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // r11
  int v8; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *result; // rax

  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0LL;
  *a2 = 0LL;
  v7 = 0LL;
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            __fastfail(5u);
          v12 = *(_QWORD *)(a1 + 24);
          v6 = *(_QWORD *)(v12 + 8);
          *a3 = *(_QWORD *)(v12 + 16);
        }
        else
        {
          v13 = *(_QWORD **)(a1 + 24);
          v6 = v13[2];
          *a3 = v13[3];
          *a2 = v13[1];
        }
      }
      else
      {
        v14 = *(_QWORD **)(a1 + 24);
        *a3 = PnpDelayedRemoveWorkerThread;
        v7 = v14[1];
        *a2 = *v14;
      }
    }
    else
    {
      *a3 = PnpDeviceActionThread[0];
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      *a2 = v15;
      if ( v15 )
        v7 = *(_QWORD *)(v15 + 32);
    }
  }
  else
  {
    *a3 = PnpDeviceEventThread;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 152LL);
    if ( v7 )
      *a2 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
  }
  if ( a4 )
    *a4 = v7;
  result = a5;
  if ( a5 )
    *a5 = v6;
  return result;
}
