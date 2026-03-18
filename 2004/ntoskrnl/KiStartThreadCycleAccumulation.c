/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x140214640
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140296BE0 (KeQueryTotalCycleTimeThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402EB1C0 (KiGroupSchedulingGenerationEnd.c)
 *     KiIdleSchedule @ 0x1402EB430 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeUpdateThreadTag @ 0x140369C50 (KeUpdateThreadTag.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginCounterAccumulation @ 0x140516900 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 result; // rax
  bool v14; // zf
  __int64 v15; // rax

  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 32448);
  *(_QWORD *)(a1 + 32568) += v7;
  v8 = *(unsigned __int8 *)(a2 + 2);
  if ( (v8 & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 33128);
    v10 = *(_QWORD *)(a1 + 33136);
    if ( !v9 || !v10 )
      goto LABEL_8;
    if ( *(_BYTE *)(v10 + 100) )
    {
      v11 = *(_DWORD *)(v10 + 116);
    }
    else
    {
      v11 = *(_DWORD *)(v10 + 72);
      if ( v11 >= *(_DWORD *)(v9 + 368) )
        v11 = *(_DWORD *)(v9 + 368);
    }
    if ( v11 < 0x4B )
      v12 = v11 / 0x19;
    else
LABEL_8:
      v12 = 3;
    *(_QWORD *)(a1 + 8 * (2LL * v12 + 4072 + *(unsigned __int8 *)(a1 + 33208))) += v7;
    v8 = *(unsigned __int8 *)(a2 + 2);
  }
  if ( (v8 & 0x40) != 0 )
  {
    v15 = *(_QWORD *)(a2 + 968);
    if ( v15 )
      *(_BYTE *)(v15 + 64) = 1;
  }
  *(_QWORD *)(a1 + 32448) = v6;
  result = *(unsigned __int8 *)(a2 + 2);
  if ( (result & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 32456) = v6;
    result = *(unsigned __int8 *)(a2 + 2);
  }
  if ( (result & 2) != 0 )
    result = KiBeginCounterAccumulation(a2, 0LL);
  v14 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v14 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !a3 )
    {
      LOBYTE(v8) = 2;
      return HalRequestSoftwareInterrupt(v8);
    }
  }
  return result;
}
