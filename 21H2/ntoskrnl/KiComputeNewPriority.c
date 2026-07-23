/*
 * XREFs of KiComputeNewPriority @ 0x14027A840
 * Callers:
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewPriority(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // dl
  char v6; // r8
  char v7; // r10
  unsigned int v8; // eax
  int v9; // r8d
  char v10; // r8
  unsigned __int8 v11; // cl
  char v12; // r8
  char v13; // cl

  result = *(unsigned __int8 *)(a1 + 195);
  if ( (char)result < 16 )
  {
    if ( KiForegrounBoostVelocityFlag
      && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2
      && (v10 = *(_BYTE *)(a1 + 564), (v10 & 0xF) != 0 && (*(_BYTE *)(a1 + 120) & 8) == 0) )
    {
      v11 = *(_BYTE *)(a1 + 564);
      v12 = v10 & 0xF;
      *(_BYTE *)(a1 + 564) = v12;
      v13 = result - (v11 >> 4) - a2;
      v7 = v12 + *(_BYTE *)(a1 + 563);
      if ( v13 >= v7 )
        v7 = v13;
    }
    else
    {
      v5 = *(_BYTE *)(a1 + 564);
      v6 = *(_BYTE *)(a1 + 563);
      if ( (char)(result - (v5 >> 4) - (v5 & 0xF) - a2) >= v6 )
        v6 = result - (v5 >> 4) - (v5 & 0xF) - a2;
      v7 = v6;
      if ( v5 )
      {
        if ( (v5 & 0xF) != 0 )
          *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(a1 + 564) = 0;
      }
    }
    v8 = *(_DWORD *)(a1 + 856);
    if ( v8 )
    {
      _BitScanReverse((unsigned int *)&v9, v8);
      if ( v7 < v9 )
        return (unsigned __int8)v9;
    }
    return (unsigned __int8)v7;
  }
  return result;
}
