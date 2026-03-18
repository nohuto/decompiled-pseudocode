/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x1C02D35EC
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0162F00 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C012759C (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0162160 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // edi
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned int v15; // r8d
  char v16; // r9
  POWER_STATE v17; // edx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  bool v23; // [rsp+70h] [rbp+8h]
  char IsPowerRuntimeDStateTransition; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v23 = 0;
  v5 = v2[8];
  v6 = (int)v2[6];
  v7 = v2[2];
  v25 = v5;
  if ( *(_BYTE *)(v4 + 508) == 1 )
  {
    v8 = v4;
    v23 = *(_DWORD *)(v4 + 236) == 2;
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 2728);
    if ( !v9 )
    {
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v4 + 24),
             (POWER_STATE)v6,
             (unsigned __int16)v7 >> 12,
             HIWORD(v7) & 0xF,
             v5);
      if ( v3 < 0 )
      {
        v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v13 + 24) = v6;
        WdLogEvent5_WdWarning(v13);
      }
      return (unsigned int)v3;
    }
    v8 = *(_QWORD *)(v9 + 64);
  }
  v14 = 0LL;
  IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v4);
  v16 = IsPowerRuntimeDStateTransition;
  if ( *(_DWORD *)(v8 + 2736) )
  {
    while ( 1 )
    {
      v17.SystemState = v6;
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 2728) + 8 * v14) + 64LL);
      if ( !v16 )
        v17.SystemState = *(SYSTEM_POWER_STATE *)(v18 + 4LL * ((unsigned __int16)v7 >> 12) + 1312);
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v18 + 24),
             v17,
             (unsigned __int16)v7 >> 12,
             HIWORD(v7) & 0xF,
             v15);
      if ( v3 < 0 || *(_DWORD *)(v18 + 236) != 2 && v23 )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 2736) )
        return (unsigned int)v3;
      v15 = v25;
      v16 = IsPowerRuntimeDStateTransition;
    }
    v3 = -1071774666;
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v21[3] = 275LL;
    v21[4] = 21LL;
    v21[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  return (unsigned int)v3;
}
