/*
 * XREFs of _DrvFindRemoteDriverhdevInMDEV@12 @ 0x1D13E7
 * Callers:
 *     _GetRemoteHDEV@8 @ 0x187A5E (_GetRemoteHDEV@8.c)
 * Callees:
 *     <none>
 */

int __thiscall DrvFindRemoteDriverhdevInMDEV(_DWORD *this, _WORD *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // eax
  _DWORD *DisplayDriverNames; // eax
  _DWORD *v8; // ecx
  _WORD **v9; // eax
  _WORD *v10; // edx
  _WORD *v11; // eax
  bool v12; // cf
  unsigned __int16 v13; // di
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v19; // [esp+8h] [ebp-1Ch]
  int v20; // [esp+Ch] [ebp-18h]
  char *v21; // [esp+10h] [ebp-14h]
  int v22; // [esp+14h] [ebp-10h]
  _WORD **v24; // [esp+1Ch] [ebp-8h]
  unsigned __int16 v25; // [esp+22h] [ebp-2h]

  v2 = this;
  v3 = 0;
  v4 = WdLogNewEntry5_WdEvent();
  *(_DWORD *)(v4 + 12) = v2;
  WdLogEvent5_WdEvent(v4);
  if ( UserIsDisconnectConnection() || UserIsConsoleConnection() || !a2 )
  {
    v3 = v2[6];
    v17 = WdLogNewEntry5_WdTrace();
    *(_DWORD *)(v17 + 12) = v3;
    WdLogEvent5_WdTrace(v17);
    return v3;
  }
  GreAcquireSemaphore(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", _ghsemDynamicModeChange, 1);
  v5 = 0;
  if ( !v2[3] )
    goto LABEL_25;
  v6 = (char *)(v2 + 6);
  v21 = (char *)(v2 + 6);
  while ( 1 )
  {
    v20 = *(_DWORD *)(*(_DWORD *)v6 + 1832);
    DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v20);
    v8 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_20:
    ++v5;
    v6 = v21 + 44;
    v21 += 44;
    if ( v5 >= v2[3] )
      goto LABEL_23;
  }
  v22 = 0;
  v19 = *DisplayDriverNames;
  if ( !*DisplayDriverNames )
  {
LABEL_19:
    Win32FreePool(v8);
    v8 = 0;
    goto LABEL_20;
  }
  v9 = (_WORD **)(DisplayDriverNames + 2);
  v24 = (_WORD **)(v8 + 2);
  while ( 1 )
  {
    v10 = a2;
    v11 = *v9;
    while ( 1 )
    {
      v12 = *v11 < *v10;
      v2 = this;
      if ( *v11 != *v10 )
        break;
      if ( !*v11 )
        goto LABEL_14;
      v13 = v11[1];
      v12 = v13 < v10[1];
      v14 = v13 == v10[1];
      v25 = v13;
      v2 = this;
      if ( !v14 )
        break;
      v11 += 2;
      v10 += 2;
      if ( !v25 )
      {
LABEL_14:
        v15 = 0;
        goto LABEL_16;
      }
    }
    v15 = v12 ? -1 : 1;
LABEL_16:
    if ( !v15 && (*(_DWORD *)(v20 + 144) & 0x4000004) == 0x4000004 )
      break;
    v24 += 2;
    v12 = ++v22 < v19;
    v9 = v24;
    if ( !v12 )
      goto LABEL_19;
  }
  v3 = v2[11 * v5 + 6];
LABEL_23:
  if ( v8 )
    Win32FreePool(v8);
LABEL_25:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  v16 = WdLogNewEntry5_WdTrace();
  *(_DWORD *)(v16 + 12) = v3;
  WdLogEvent5_WdTrace(v16);
  return v3;
}
