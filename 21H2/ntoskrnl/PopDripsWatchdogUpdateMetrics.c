/*
 * XREFs of PopDripsWatchdogUpdateMetrics @ 0x140996A20
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1409965B0 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x140369AB0 (PopDeepSleepEnabled.c)
 *     PpmConvertTimeTo @ 0x140387A68 (PpmConvertTimeTo.c)
 *     PopBatteryCapacityToRate @ 0x1403978C0 (PopBatteryCapacityToRate.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1405D6B94 (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopDripsWatchdogUpdateMetrics(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int v7; // esi
  unsigned int v8; // r10d
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r11d
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r9
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 result; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_DWORD *)(a3 + 28);
  v8 = dword_140C229E4;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a3 + 24);
  v22 = 0LL;
  *(_BYTE *)(a1 + 592) = byte_140C54208 & 1;
  v11 = v7 - *(_DWORD *)(a1 + 636);
  v12 = v9 - *(_QWORD *)(a1 + 616);
  v13 = a2 - *(_QWORD *)(a1 + 560);
  v14 = a5;
  *a4 = v11;
  *v14 = v12;
  LODWORD(v12) = v10 - *(_DWORD *)(a1 + 632);
  *a6 = v12;
  v15 = v13 / 0x2710;
  *(_DWORD *)(a1 + 576) = v13 / 0x2710;
  if ( (_DWORD)v12 )
  {
    *(_DWORD *)(a1 + 568) = 0;
    *(_DWORD *)(a1 + 588) = 0;
    *(_DWORD *)(a1 + 632) = v10;
    *(_QWORD *)(a1 + 616) = v9;
    *(_DWORD *)(a1 + 596) = v8;
  }
  else
  {
    v16 = (_DWORD)v15 + *(_DWORD *)(a1 + 568) == 0;
    *(_DWORD *)(a1 + 568) += v15;
    if ( !v16 && (unk_140C229F4 & 0x40000000) == 0 )
    {
      v17 = *(_DWORD *)(a1 + 596);
      if ( v8 < v17 )
        *(_DWORD *)(a1 + 588) = PopBatteryCapacityToRate(v17 - v8, 1000LL * *(unsigned int *)(a1 + 568));
    }
  }
  if ( v11 || !PopDeepSleepEnabled() )
  {
    *(_DWORD *)(a1 + 572) = 0;
    *(_DWORD *)(a1 + 636) = v7;
  }
  else
  {
    *(_DWORD *)(a1 + 572) += v18;
  }
  PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 600), &v22);
  v19 = PpmConvertTimeTo(v22, 0x3E8uLL);
  v20 = *(_DWORD *)(a1 + 576);
  *(_DWORD *)(a1 + 580) = v19;
  if ( v19 <= v20 )
    result = 100 * v19 / v20;
  else
    result = 100LL;
  *(_DWORD *)(a1 + 584) = result;
  return result;
}
