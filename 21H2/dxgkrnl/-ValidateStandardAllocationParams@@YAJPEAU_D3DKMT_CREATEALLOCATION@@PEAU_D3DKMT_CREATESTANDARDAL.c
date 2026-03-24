/*
 * XREFs of ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C0228E18
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF9B0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStandardAllocationParams(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a2,
        char a3)
{
  ULONG64 pStandardAllocation; // rdx
  __int64 v5; // rax

  pStandardAllocation = 131104LL;
  if ( (*(_DWORD *)&a1->Flags & 0x20020) == 0
    || (*(_DWORD *)&a1->Flags & 0x20020) == 0x20020
    || a1->PrivateDriverDataSize
    || a1->NumAllocations != 1 )
  {
    goto LABEL_2;
  }
  if ( a3 )
  {
    pStandardAllocation = (ULONG64)a1->pStandardAllocation;
    a1 = (struct _D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    if ( pStandardAllocation >= MmUserProbeAddress )
      pStandardAllocation = MmUserProbeAddress;
    *(_OWORD *)&a2->Type = *(_OWORD *)pStandardAllocation;
    *(_QWORD *)&a2->Flags.0 = *(_QWORD *)(pStandardAllocation + 16);
  }
  else
  {
    *a2 = *a1->pStandardAllocation;
  }
  if ( a2->Type != D3DKMT_STANDARDALLOCATIONTYPE_EXISTINGHEAP || a2->Flags.Value )
  {
LABEL_2:
    v5 = WdLogNewEntry5_WdError(a1, pStandardAllocation);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
  }
  else
  {
    if ( a2->ExistingHeapData.Size - 1 <= 0xFFFFFFFE )
      return 0LL;
    v5 = WdLogNewEntry5_WdError(4294967294LL, pStandardAllocation);
    *(_QWORD *)(v5 + 24) = a2->ExistingHeapData.Size;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
  }
  WdLogEvent5_WdError(v5);
  return 3221225485LL;
}
