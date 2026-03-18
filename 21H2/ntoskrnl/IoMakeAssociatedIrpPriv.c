/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x14020BA48
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14020BA30 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140557670 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020C0F0 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     IopSetDiskIoAttributionExtension @ 0x14020C178 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x14020C21C (IopSetDriverFlagsExtension.c)
 *     IopIsActivityTracingEnabled @ 0x14020C4B8 (IopIsActivityTracingEnabled.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  char IsActivityTracingEnabled; // al
  __int64 v6; // r9
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
  __int64 result; // rax
  char v22; // [rsp+80h] [rbp+18h]
  char v23; // [rsp+88h] [rbp+20h]

  v23 = 0;
  IsActivityTracingEnabled = IopIsActivityTracingEnabled(a1, a2, a2);
  LODWORD(v6) = 6;
  if ( IsActivityTracingEnabled && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, (unsigned int)v6)
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
  if ( (IopIrpStackProfilerFlags & 3) == 0 )
  {
    if ( v15 )
      goto LABEL_17;
LABEL_29:
    result = ExAllocatePool2(64LL, v10, 544240201LL, v6);
    v15 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    goto LABEL_17;
  }
  if ( !v15 )
    goto LABEL_29;
  if ( *((_QWORD *)&v15[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
  {
    ++L->TotalFrees;
    ExFreePoolWithTag(v15, 0);
    goto LABEL_29;
  }
  v10 = *((_WORD *)&v15[3].Next + 4);
LABEL_17:
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
  return (__int64)v15;
}
