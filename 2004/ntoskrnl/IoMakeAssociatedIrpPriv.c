/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x1403266B8
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x1403266A0 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140500800 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x140297AFC (IopIsActivityTracingEnabled.c)
 *     IopIrpHasExtensionType @ 0x140326A20 (IopIrpHasExtensionType.c)
 *     IopSetDiskIoAttributionExtension @ 0x140326A58 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x140326AD4 (IopSetDriverFlagsExtension.c)
 *     IoSetActivityIdIrp @ 0x140377070 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  char IsActivityTracingEnabled; // al
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v10; // di
  __int64 v11; // rsi
  __int64 v12; // r12
  __int16 v13; // di
  _GENERAL_LOOKASIDE *L; // rsi
  PSLIST_ENTRY v15; // rbx
  unsigned __int8 ApcStateIndex; // cl
  _SLIST_ENTRY **v17; // rdx
  __int16 Number; // ax
  _SLIST_ENTRY *result; // rax
  char v20; // [rsp+80h] [rbp+18h]
  char v21; // [rsp+88h] [rbp+20h]

  v21 = 0;
  IsActivityTracingEnabled = IopIsActivityTracingEnabled();
  v6 = 6;
  if ( IsActivityTracingEnabled && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v6)
    || (unsigned __int8)IopIrpHasExtensionType(v7, 8LL)
    || v8 && (*(_DWORD *)(v8 + 48) & 0x8000000) != 0 )
  {
    ++a3;
    v21 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v10 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_29;
  v20 = 4;
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
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
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
  v17 = &v15[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v15[11].Next + 1) = v17;
  Number = CurrentPrcb->Number;
  LODWORD(v15[1].Next) |= 8u;
  WORD2(v15->Next) = Number;
  LODWORD(v15[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v15[4].Next) |= v20;
  *((_QWORD *)&v15[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v15[1].Next + 1) = a1;
  if ( v21 )
  {
    --BYTE3(v15[4].Next);
    --BYTE2(v15[4].Next);
    *((_QWORD *)&v15[11].Next + 1) = v17 - 9;
    *((_QWORD *)&v15[12].Next + 1) = v17 - 9;
  }
  if ( IopIsActivityTracingEnabled() && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    IoSetActivityIdIrp(v15, *(_QWORD *)(a1 + 200) + 24LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL), *((_QWORD *)&v15[9].Next + 1), 1LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 8LL) )
    IopSetDriverFlagsExtension(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  return v15;
}
