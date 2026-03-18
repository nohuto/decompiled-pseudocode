/*
 * XREFs of IopAllocateIrpPrivate @ 0x1402AACD0
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14020B830 (IopAllocateIrpWithExtension.c)
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IovAllocateIrp @ 0x140A7FE00 (IovAllocateIrp.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopInitActivityIdIrp @ 0x140556BE4 (IopInitActivityIdIrp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v3; // r13
  char v5; // si
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int *v7; // rcx
  __int64 v8; // r12
  unsigned __int16 v9; // bp
  __int64 v10; // r12
  __int16 v11; // bp
  _GENERAL_LOOKASIDE *L; // r12
  PSLIST_ENTRY v13; // rbx
  char v14; // r14
  char v15; // r14
  _SLIST_ENTRY **v16; // rcx
  __int64 result; // rax
  char v18; // [rsp+68h] [rbp+10h]
  __int64 v19; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v5 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v5 = a2 + 2;
    v3 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v5 < 20 )
  {
    v7 = &CurrentPrcb->MxCsr + v5;
    ++v7[8944];
    ++CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps;
    if ( v7[8944] - v7[8965] > IopIrpStackProfilerMinSizeThreshold
      && CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KeInsertQueueDpc(&IopIrpStackProfilerDpc, 0LL, 0LL);
    }
  }
  v8 = v5;
  v18 = 0;
  v9 = 72 * v5 + 208;
  if ( v5 > (char)IopLargeIrpStackLocations || a3 && CurrentPrcb->LookasideIrpFloat <= 0 )
    goto LABEL_38;
  v18 = 4;
  if ( v5 == 1 )
  {
    v19 = 0LL;
    v10 = 2048LL;
  }
  else
  {
    if ( v5 <= (char)IopMediumIrpStackLocations )
    {
      v19 = 1LL;
      v10 = 2064LL;
      v11 = 9 * (char)IopMediumIrpStackLocations;
    }
    else
    {
      v19 = 2LL;
      v10 = 2080LL;
      v11 = 9 * (char)IopLargeIrpStackLocations;
    }
    v9 = 8 * v11 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v10);
  ++L->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v13 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v19].L;
    ++L->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v13 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( v13 )
    {
      if ( *((_QWORD *)&v13[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * v5 + 208) )
      {
        v9 = *((_QWORD *)&v13[3].Next + 1);
        goto LABEL_19;
      }
      ++L->TotalFrees;
      ExFreePoolWithTag(v13, 0);
    }
  }
  else if ( v13 )
  {
LABEL_19:
    v14 = 0;
    if ( a3 && IopIrpCreditsEnabled > 1 )
    {
      _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
      v14 = 8;
    }
    v8 = v5;
    a3 = 0;
    goto LABEL_21;
  }
  v8 = v5;
LABEL_38:
  result = ExAllocatePool2((a3 != 0) + 64LL, v9, 544240201LL);
  v13 = (PSLIST_ENTRY)result;
  if ( !result )
    return result;
  v14 = 0;
LABEL_21:
  memset(v13, 0, v9);
  v15 = v18 | v14;
  BYTE2(v13[4].Next) = v5;
  LOWORD(v13->Next) = 6;
  BYTE3(v13[4].Next) = v5 + 1;
  WORD1(v13->Next) = v9;
  BYTE6(v13[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v13[2].Next + 1) = v13 + 2;
  v13[2].Next = v13 + 2;
  v16 = &v13[4 * v8 + 13].Next + v8;
  *((_QWORD *)&v13[11].Next + 1) = v16;
  WORD2(v13->Next) = CurrentPrcb->Number;
  HIBYTE(v13[4].Next) = v15;
  if ( a3 )
    HIBYTE(v13[4].Next) = v15 | 1;
  if ( v3 )
  {
    BYTE3(v13[4].Next) -= 2;
    BYTE2(v13[4].Next) -= 2;
    *((_QWORD *)&v13[11].Next + 1) = v16 - 18;
    *((_QWORD *)&v13[12].Next + 1) = v16 - 18;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(v13);
  }
  return (__int64)v13;
}
