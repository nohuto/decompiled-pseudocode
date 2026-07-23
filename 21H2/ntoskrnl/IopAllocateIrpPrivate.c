/*
 * XREFs of IopAllocateIrpPrivate @ 0x14035C7C0
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
 *     IoAllocateIrpEx @ 0x14021EC80 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopInitActivityIdIrp @ 0x140500C1C (IopInitActivityIdIrp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v3; // r13
  char v5; // si
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int16 v10; // bp
  __int64 v11; // r12
  __int16 v12; // bp
  __int64 v13; // r12
  char v14; // r14
  char v15; // r14
  __int64 v16; // rcx
  PVOID result; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  char v20; // [rsp+78h] [rbp+10h]

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
    ++v7[8688];
    ++CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps;
    if ( v7[8688] - v7[8709] > IopIrpStackProfilerMinSizeThreshold
      && CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KeInsertQueueDpc(&IopIrpStackProfilerDpc, 0LL, 0LL);
    }
  }
  v8 = 0LL;
  v9 = v5;
  v20 = 0;
  v10 = 72 * v5 + 208;
  if ( v5 <= (char)IopLargeIrpStackLocations && (!a3 || CurrentPrcb->LookasideIrpFloat > 0) )
  {
    v20 = 4;
    if ( v5 == 1 )
    {
      v11 = 2048LL;
    }
    else
    {
      if ( v5 <= (char)IopMediumIrpStackLocations )
      {
        v8 = 16LL;
        v11 = 2064LL;
        v12 = 9 * (char)IopMediumIrpStackLocations;
      }
      else
      {
        v8 = 32LL;
        v11 = 2080LL;
        v12 = 9 * (char)IopLargeIrpStackLocations;
      }
      v10 = 8 * v12 + 208;
    }
    v13 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v11);
    v19 = v8;
    ++*(_DWORD *)(v13 + 20);
    v8 = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)v13);
    if ( !v8 )
    {
      ++*(_DWORD *)(v13 + 24);
      v13 = *(__int64 *)((char *)&CurrentPrcb->PPLookasideList[0].L + v19);
      ++*(_DWORD *)(v13 + 20);
      v8 = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)v13);
      if ( !v8 )
        ++*(_DWORD *)(v13 + 24);
    }
    if ( (IopIrpStackProfilerFlags & 3) != 0 && v8 )
    {
      if ( *(_QWORD *)(v8 + 56) < (unsigned __int64)(unsigned __int16)(72 * v5 + 208) )
      {
        ++*(_DWORD *)(v13 + 28);
        ExFreePoolWithTag((PVOID)v8, 0);
        goto LABEL_43;
      }
      v10 = *(_QWORD *)(v8 + 56);
    }
    v9 = v5;
  }
  v14 = 0;
  if ( v8 )
  {
    if ( a3 && IopIrpCreditsEnabled > 1 )
    {
      _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
      v14 = 8;
    }
    a3 = 0;
    goto LABEL_23;
  }
LABEL_43:
  if ( a3 )
    result = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x20707249u);
  else
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
  v8 = (__int64)result;
  if ( !result )
    return result;
  v9 = v5;
  v14 = 0;
LABEL_23:
  memset((void *)v8, 0, v10);
  v15 = v20 | v14;
  *(_BYTE *)(v8 + 66) = v5;
  *(_WORD *)v8 = 6;
  *(_BYTE *)(v8 + 67) = v5 + 1;
  *(_WORD *)(v8 + 2) = v10;
  *(_BYTE *)(v8 + 70) = KeGetCurrentThread()->ApcStateIndex;
  *(_QWORD *)(v8 + 40) = v8 + 32;
  *(_QWORD *)(v8 + 32) = v8 + 32;
  v16 = v8 + 8 * (v9 + 8 * v9 + 26);
  *(_QWORD *)(v8 + 184) = v16;
  *(_WORD *)(v8 + 4) = CurrentPrcb->Number;
  *(_BYTE *)(v8 + 71) = v15;
  if ( a3 )
    *(_BYTE *)(v8 + 71) = v15 | 1;
  if ( v3 )
  {
    *(_BYTE *)(v8 + 67) -= 2;
    *(_BYTE *)(v8 + 66) -= 2;
    *(_QWORD *)(v8 + 184) = v16 - 144;
    *(_QWORD *)(v8 + 200) = v16 - 144;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(v8);
  }
  return (PVOID)v8;
}
