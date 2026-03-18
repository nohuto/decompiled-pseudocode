/*
 * XREFs of KiComputeNewPriority @ 0x1402BA000
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiIsForegroundThread @ 0x1402F8020 (KiIsForegroundThread.c)
 */

__int64 __fastcall KiComputeNewPriority(__int64 a1, char a2, char a3)
{
  char v3; // r9
  char v4; // r11
  __int64 v5; // r10
  unsigned __int8 v6; // dl
  char v7; // cl
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  char v11; // dl
  char v12; // dl
  char v13; // cl
  int v14; // r8d

  v3 = *(_BYTE *)(a1 + 195);
  v4 = a2;
  v5 = a1;
  if ( v3 < 16 )
  {
    if ( (KiVelocityFlags & 0x8000) != 0
      && (unsigned __int8)KiIsForegroundThread(a1)
      && (v11 = *(_BYTE *)(v10 + 564), (v11 & 0xF) != 0 && (*(_BYTE *)(v5 + 120) & 8) == 0) )
    {
      v12 = v11 & 0xF;
      v13 = v3 - (*(_BYTE *)(v10 + 564) >> 4) - v4;
      v3 = v12 + *(_BYTE *)(v5 + 563);
      if ( v13 >= v3 )
        v3 = v13;
      if ( a3 )
        *(_BYTE *)(v5 + 564) = v12;
    }
    else
    {
      v6 = *(_BYTE *)(v5 + 564);
      v7 = *(_BYTE *)(v5 + 563);
      if ( (char)(v3 - (v6 >> 4) - (v6 & 0xF) - v4) >= v7 )
        v7 = v3 - (v6 >> 4) - (v6 & 0xF) - v4;
      v3 = v7;
      if ( a3 && v6 )
      {
        if ( (v6 & 0xF) != 0 )
          *(_DWORD *)(v5 + 872) = MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v5 + 564) = 0;
      }
    }
  }
  v8 = *(_DWORD *)(v5 + 856);
  if ( !v8 )
    return (unsigned __int8)v3;
  _BitScanReverse((unsigned int *)&v14, v8);
  result = (unsigned __int8)v3;
  if ( v3 < v14 )
    return (unsigned __int8)v14;
  return result;
}
