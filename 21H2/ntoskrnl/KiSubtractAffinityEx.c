/*
 * XREFs of KiSubtractAffinityEx @ 0x1402FEDA0
 * Callers:
 *     PpmParkReportParkedCores @ 0x140235F70 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x14023A820 (PpmParkReportUnparkedCores.c)
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     PpmCheckContinueExecution @ 0x140343BA0 (PpmCheckContinueExecution.c)
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 *     KeSubtractAffinityEx @ 0x14045A070 (KeSubtractAffinityEx.c)
 *     HalpRemoveProfileSourceFromList @ 0x14050BA34 (HalpRemoveProfileSourceFromList.c)
 *     KeSubtractAffinityEx2 @ 0x14056C2A0 (KeSubtractAffinityEx2.c)
 *     KiStartProfileTarget @ 0x140571A40 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140571D50 (KiStopProfileTarget.c)
 *     RtlUpdateSwapReference @ 0x1408331DC (RtlUpdateSwapReference.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x14099D834 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiSubtractAffinityEx(_WORD *a1, char *a2, _BYTE *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // dx
  unsigned int v11; // r10d
  unsigned __int16 v12; // ax
  signed __int64 v13; // rsi
  __int64 v14; // r8
  _QWORD *v15; // rdx
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v19; // rdx
  _BYTE v20[272]; // [rsp+20h] [rbp-128h] BYREF

  memset(v20, 0, 0x108uLL);
  if ( !a3 )
  {
    a3 = v20;
    a4 = 32;
  }
  v8 = *a1;
  v9 = *(_WORD *)a2;
  *((_WORD *)a3 + 1) = a4;
  v10 = *a1;
  if ( v8 >= v9 )
    v8 = v9;
  *(_WORD *)a3 = v10;
  v11 = 0;
  if ( v10 > a4 )
  {
    *(_WORD *)a3 = a4;
    v10 = a4;
  }
  if ( v8 > a4 )
    v8 = a4;
  v12 = 0;
  if ( v8 )
  {
    v13 = a2 - (char *)a1;
    v14 = v8;
    v15 = a1 + 4;
    v12 = v8;
    do
    {
      v16 = (*v15 & ~*(_QWORD *)((char *)v15 + v13)) == 0LL;
      *(_QWORD *)((char *)v15 + a3 - (_BYTE *)a1) = *v15 & ~*(_QWORD *)((char *)v15 + v13);
      if ( !v16 )
        v11 = 1;
      ++v15;
      --v14;
    }
    while ( v14 );
    v10 = *(_WORD *)a3;
  }
  if ( v12 < v10 )
  {
    do
    {
      v19 = *(_QWORD *)&a1[4 * v12 + 4];
      *(_QWORD *)&a3[8 * v12 + 8] = v19;
      if ( v19 )
        v11 = 1;
      ++v12;
    }
    while ( v12 < *(_WORD *)a3 );
  }
  if ( a3 != v20 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v12 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v17 + 8] = 0LL )
      v17 = v12++;
  }
  return v11;
}
