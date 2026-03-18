/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1C009D410
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C009D510 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ArbFindSuitableRange @ 0x1C009D5B0 (ArbFindSuitableRange.c)
 *     ProcessorMsiSupported @ 0x1C009D690 (ProcessorMsiSupported.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r9
  __int64 v4; // r10
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // ebx
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 5);
  v11 = 0;
  v6 = *((_QWORD *)a2 + 9);
  LOBYTE(v11) = *(_BYTE *)(v2[5] + 4LL) & 1;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v2[2] == 1LL && v2[3] == 1LL )
  {
    *((_WORD *)a2 + 32) |= 0x40u;
    v7 = *(_QWORD *)(v4 + 40);
  }
  v9 = v11;
  if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
              v7,
              v6,
              v8,
              *a2,
              v11,
              0,
              1) >= 0
    || v8 > 1
    && (int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
              *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
              v6,
              1LL,
              *a2,
              v9,
              0,
              1) >= 0 )
  {
    LOBYTE(v11) = 0;
    if ( (int)ProcessorMsiSupported(v6 + 16, &v11) >= 0 && (_BYTE)v11 )
      return ArbFindSuitableRange(a1, a2);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x14u,
      0x1Eu,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL));
  }
  return 0;
}
