/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x1402ED8C8
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x1402ED8B0 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140505C50 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402EDEC0 (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEnabled @ 0x1402EDEF0 (IopIsActivityTracingEnabled.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402EDF0C (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402EDF88 (IopSetDriverFlagsExtension.c)
 *     IoSetActivityIdIrp @ 0x140379200 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

struct _SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  char IsActivityTracingEnabled; // al
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v10; // di
  __int64 v11; // rsi
  __int64 v12; // r12
  __int16 v13; // di
  _GENERAL_LOOKASIDE *L; // rsi
  PSLIST_ENTRY v15; // rbx
  __int64 v16; // r8
  unsigned __int8 ApcStateIndex; // cl
  _SLIST_ENTRY **v18; // rdx
  __int16 Number; // ax
  __int64 v20; // rcx
  struct _SLIST_ENTRY *result; // rax
  char v22; // [rsp+80h] [rbp+18h]
  char v23; // [rsp+88h] [rbp+20h]

  v23 = 0;
  IsActivityTracingEnabled = IopIsActivityTracingEnabled(a1, a2, a2);
  v6 = 6;
  if ( IsActivityTracingEnabled && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v6)
    || (unsigned __int8)IopIrpHasExtensionType(v7, 8LL)
    || v8 && (*(_DWORD *)(v8 + 48) & 0x8000000) != 0 )
  {
    a3 += 2;
    v23 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  v10 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_29;
  v22 = 4;
  if ( a3 == 1 )
  {
    v12 = 0LL;
    v11 = 2048LL;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v11 = 2064LL;
      v12 = 1LL;
      v13 = 9 * (char)IopMediumIrpStackLocations;
    }
    else
    {
      v11 = 2080LL;
      v12 = 2LL;
      v13 = 9 * (char)IopLargeIrpStackLocations;
    }
    v10 = 8 * v13 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v11);
  ++L->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v15 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v12].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v15 )
      goto LABEL_29;
    if ( *((_QWORD *)&v15[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v10 = *((_WORD *)&v15[3].Next + 4);
      goto LABEL_17;
    }
    ++L->TotalFrees;
    ExFreePoolWithTag(v15, 0);
LABEL_29:
    result = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
    v15 = result;
    if ( !result )
      return result;
    goto LABEL_18;
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_29;
LABEL_18:
  memset(v15, 0, v10);
  BYTE2(v15[4].Next) = a3;
  LOWORD(v15->Next) = 6;
  BYTE3(v15[4].Next) = a3 + 1;
  WORD1(v15->Next) = v10;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v15[2].Next + 1) = v15 + 2;
  v15[2].Next = v15 + 2;
  BYTE6(v15[4].Next) = ApcStateIndex;
  v18 = &v15[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v15[11].Next + 1) = v18;
  Number = CurrentPrcb->Number;
  LODWORD(v15[1].Next) |= 8u;
  WORD2(v15->Next) = Number;
  v20 = *(_DWORD *)(a1 + 16) & 0xE0002;
  LODWORD(v15[1].Next) |= v20;
  HIBYTE(v15[4].Next) |= v22;
  *((_QWORD *)&v15[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v15[1].Next + 1) = a1;
  if ( v23 )
  {
    BYTE3(v15[4].Next) -= 2;
    BYTE2(v15[4].Next) -= 2;
    *((_QWORD *)&v15[11].Next + 1) = v18 - 18;
    *((_QWORD *)&v15[12].Next + 1) = v18 - 18;
  }
  if ( (unsigned __int8)IopIsActivityTracingEnabled(v20, v18, v16) && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    IoSetActivityIdIrp(v15, *(_QWORD *)(a1 + 200) + 24LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL), *((_QWORD *)&v15[9].Next + 1), 1LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 8LL) )
    IopSetDriverFlagsExtension(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  return v15;
}
