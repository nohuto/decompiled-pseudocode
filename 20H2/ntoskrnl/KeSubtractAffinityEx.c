/*
 * XREFs of KeSubtractAffinityEx @ 0x1402EACC0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402878E0 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     PpmCheckContinueExecution @ 0x140305FF0 (PpmCheckContinueExecution.c)
 *     PpmParkReportParkedCores @ 0x14030C580 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x14030F870 (PpmParkReportUnparkedCores.c)
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 *     HalpRemoveProfileSourceFromList @ 0x1404BD75C (HalpRemoveProfileSourceFromList.c)
 *     KiStartProfileTarget @ 0x14051A5C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x14051A880 (KiStopProfileTarget.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407C6A5C (RtlUpdateSwapReference.c)
 *     PpmPostProcessMediaBuffering @ 0x1408F8648 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall KeSubtractAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned int v6; // r9d
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r8
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v14; // rdx
  _BYTE v15[176]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v15, 0, 0xA8uLL);
  if ( !a3 )
    a3 = v15;
  *((_WORD *)a3 + 1) = 20;
  v6 = 0;
  v7 = 0;
  *(_WORD *)a3 = *a1;
  v8 = *a1;
  v9 = *a1;
  if ( *a1 >= *a2 )
    v9 = *a2;
  if ( v9 )
  {
    do
    {
      v10 = 4LL * v7;
      v11 = (*(_QWORD *)&a1[v10 + 4] & ~*(_QWORD *)&a2[v10 + 4]) == 0LL;
      *(_QWORD *)&a3[v10 * 2 + 8] = *(_QWORD *)&a1[v10 + 4] & ~*(_QWORD *)&a2[v10 + 4];
      if ( !v11 )
        v6 = 1;
      ++v7;
    }
    while ( v7 < v9 );
    v8 = *a1;
  }
  if ( v7 < v8 )
  {
    do
    {
      v14 = *(_QWORD *)&a1[4 * v7 + 4];
      *(_QWORD *)&a3[8 * v7 + 8] = v14;
      if ( v14 )
        v6 = 1;
      ++v7;
    }
    while ( v7 < *a1 );
  }
  if ( a3 != v15 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v7 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v12 + 8] = 0LL )
      v12 = v7++;
  }
  return v6;
}
