/*
 * XREFs of KiSetSystemTimeDpc @ 0x14039E100
 * Callers:
 *     <none>
 * Callees:
 *     KiSelectActiveTimerTable @ 0x1402EC2B0 (KiSelectActiveTimerTable.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeAdjustInterruptTime @ 0x14038D96C (KeAdjustInterruptTime.c)
 *     KiUpdateSystemTime @ 0x140397FF8 (KiUpdateSystemTime.c)
 *     KiAdjustTimerDueTimes @ 0x14039E2BC (KiAdjustTimerDueTimes.c)
 */

char __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 active; // r14
  signed __int32 v14; // eax
  unsigned int v15; // esi
  signed __int32 v16; // eax
  unsigned int v17; // edi
  int v19; // eax
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  _DWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+88h] [rbp+20h] BYREF

  v25 = 0;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v25, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  active = KiSelectActiveTimerTable((__int64)CurrentPrcb, 1);
  if ( CurrentPrcb->ClockOwner )
  {
    **(_QWORD **)(a2 + 16) = MEMORY[0xFFFFF78000000014];
    v19 = *(_DWORD *)(a2 + 4);
    v20 = **(_QWORD **)(a2 + 8);
    v21 = *(_QWORD **)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v20;
    v22 = v20 - *v21;
    *(_QWORD *)(a2 + 24) = v22;
    if ( (v19 & 1) != 0 )
    {
      if ( KeAdjustInterruptTime(v22, (v19 & 2) != 0) )
      {
        v23 = -*(_QWORD *)(a2 + 24);
        *(_BYTE *)a2 = 1;
        *(_QWORD *)(a2 + 24) = v23;
      }
    }
    else
    {
      KiUpdateSystemTime(v22, 0LL, v19);
    }
  }
  v26 = 0;
  v14 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v15 = ~v14 & 0x80000000;
  if ( (v14 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v15 )
      KeYieldProcessorEx(&v26, v10, v11, v12);
  }
  else
  {
    *(_DWORD *)a4 = v15 | *(_DWORD *)(a4 + 4);
  }
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( active )
      KiAdjustTimerDueTimes(CurrentPrcb, active, a2);
    v16 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v17 = ~v16 & 0x80000000;
    if ( (v16 & 0x7FFFFFFF) != 0 )
    {
      v24[0] = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v17 )
        KeYieldProcessorEx(v24, v10, v11, v12);
    }
    else
    {
      *(_DWORD *)a4 = v17 | *(_DWORD *)(a4 + 4);
    }
  }
  _InterlockedDecrement(a3);
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, 2u);
}
