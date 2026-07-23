/*
 * XREFs of KeAddTriageDumpDataBlock @ 0x1403CA270
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     RtlMarkHiberPhase @ 0x140592F14 (RtlMarkHiberPhase.c)
 *     IopInitializeTriageDumpData @ 0x1407C9478 (IopInitializeTriageDumpData.c)
 * Callees:
 *     KiValidateTriageDumpDataArray @ 0x1403CA32C (KiValidateTriageDumpDataArray.c)
 *     KiIsAddressRangeValid @ 0x1403CA40C (KiIsAddressRangeValid.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeAddTriageDumpDataBlock(
        PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
        ULONG MaxDataSize,
        PVOID Address,
        SIZE_T Size)
{
  ULONG v4; // edi
  char *v6; // rsi
  ULONG NumBlocksUsed; // r9d
  char *v9; // rdx
  struct _LIST_ENTRY *v10; // rdx
  SIZE_T v12; // r8
  char *v13; // rcx

  v4 = 0;
  v6 = *(char **)&MaxDataSize;
  if ( !KtriageDumpDataArray
    || !(unsigned __int8)KiValidateTriageDumpDataArray(KtriageDumpDataArray, MaxDataSize, 0LL, Size)
    || !(unsigned __int8)KiIsAddressRangeValid(v6, Address) )
  {
    return -1073741811;
  }
  if ( !Address )
    return 0;
  NumBlocksUsed = KtriageDumpDataArray->NumBlocksUsed;
  v9 = (char *)Address + (_QWORD)v6;
  if ( NumBlocksUsed )
  {
    do
    {
      v12 = KtriageDumpDataArray->Blocks[v4].Size;
      v13 = (char *)(&KtriageDumpDataArray[1].List.Flink)[2 * v4] + v12;
      if ( v6 < v13 && (unsigned __int64)v9 > v12 )
      {
        if ( (unsigned __int64)v6 < v12 )
        {
          if ( v9 <= v13 )
            v9 = (char *)KtriageDumpDataArray->Blocks[v4].Size;
        }
        else
        {
          if ( v9 <= v13 )
            return 0;
          v6 = (char *)(&KtriageDumpDataArray[1].List.Flink)[2 * v4] + v12;
        }
      }
      ++v4;
    }
    while ( v4 < NumBlocksUsed );
  }
  if ( NumBlocksUsed == KtriageDumpDataArray->NumBlocksTotal )
    return -1073741789;
  v10 = (struct _LIST_ENTRY *)(v9 - v6);
  if ( (unsigned __int64)v10 <= KtriageDumpDataArray->ComponentNameBufferLength - KtriageDumpDataArray->VirtMemSize )
  {
    (&KtriageDumpDataArray[1].List.Flink)[2 * v4] = v10;
    KtriageDumpDataArray->Blocks[v4].Size = (SIZE_T)v6;
    ++KtriageDumpDataArray->NumBlocksUsed;
    KtriageDumpDataArray->VirtMemSize += (unsigned int)v10;
    return 0;
  }
  return -1073741670;
}
