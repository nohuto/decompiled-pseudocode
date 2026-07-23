/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x1405A5FC4
 * Callers:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpGetStackExtendedHeaderItem(__int64 a1, char a2, ULONG a3, __int64 a4, char a5, signed __int64 *a6)
{
  __int64 v6; // rdi
  __int64 v7; // r15
  __int16 v8; // r13
  signed __int64 v9; // rbx
  ULONG v14; // edi
  unsigned __int8 CurrentIrql; // al
  int v16; // r14d
  __int16 v17; // di
  __int16 v18; // di

  v6 = 0LL;
  v7 = *(_QWORD *)a4 + 16LL;
  v8 = 0;
  v9 = 0LL;
  if ( a5 )
  {
    v14 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)a4 + 16LL), a3, 0x300u);
    if ( v14 > 3 )
      v6 = v14 - 3;
    else
      v6 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 && (*(_DWORD *)(a1 + 1296) & 1) == 0 )
  {
    CurrentIrql = ObGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      if ( !KeGetCurrentPrcb()->NestingLevel )
LABEL_15:
        v9 = _InterlockedIncrement64(&EtwpStackMatchId);
    }
    else if ( CurrentIrql < 2u )
    {
      if ( *(_BYTE *)(a1 + 1310) )
        goto LABEL_15;
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
        goto LABEL_15;
      v16 = a2 & 1;
      if ( v16 )
      {
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          goto LABEL_15;
      }
      if ( !v16 )
      {
        v8 = RtlWalkFrameChain((PVOID *)(v7 + 8 * v6), a3 - v6, 1u);
        if ( a6 )
          v9 = *a6;
      }
    }
  }
  v17 = v8 + v6;
  if ( v17 || v9 )
  {
    v18 = 8 * (v17 + 1);
    *(_QWORD *)(*(_QWORD *)a4 + 8LL) = v9;
    **(_WORD **)a4 = v18 + 8;
    *(_WORD *)(*(_QWORD *)a4 + 2LL) = 6;
    *(_WORD *)(*(_QWORD *)a4 + 6LL) = v18;
    *(_WORD *)(*(_QWORD *)a4 + 4LL) &= ~1u;
    *(_WORD *)(*(_QWORD *)a4 + 4LL) &= 1u;
  }
  else
  {
    if ( a3 == 256 )
      RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)(*(_QWORD *)a4 - 16LL));
    *(_QWORD *)a4 = 0LL;
  }
}
