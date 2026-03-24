/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1C00917A4
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C00918B0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F770 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ArbFindSuitableRange @ 0x1C0091950 (ArbFindSuitableRange.c)
 *     ProcessorMsiSupported @ 0x1C0091A34 (ProcessorMsiSupported.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // r9
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  v3 = (_QWORD *)*((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 9);
  LOBYTE(v12) = *(_BYTE *)(v3[5] + 4LL) & 1;
  v6 = *((_QWORD *)a2 + 5);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v3[2] == 1LL && v3[3] == 1LL )
  {
    *((_WORD *)a2 + 32) |= 0x40u;
    v7 = *(_QWORD *)(v6 + 40);
  }
  v9 = v12;
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
          *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
          v7,
          v5,
          v8,
          *a2,
          v12,
          0,
          1);
  if ( v10 >= 0 )
    goto LABEL_6;
  if ( v8 > 1 )
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
            *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
            *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
            v5,
            1LL,
            *a2,
            v9,
            0,
            1);
  if ( v10 >= 0 )
  {
LABEL_6:
    LOBYTE(v12) = 0;
    if ( (int)ProcessorMsiSupported(v5 + 16, &v12) >= 0 && (_BYTE)v12 )
      return ArbFindSuitableRange(a1, a2);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x14u,
      0x1Eu,
      (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL));
  }
  return 0;
}
