/*
 * XREFs of ProcessorpClearData @ 0x1C0094540
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092040 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1C00935F0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C0093FD0 (IrqArbBootAllocation.c)
 *     ProcessorCopyData @ 0x1C00941D0 (ProcessorCopyData.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B720C (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcessorpClearData(int a1)
{
  ULONG v2; // edi
  struct _RTL_RANGE_LIST *v3; // rsi
  PRTL_RANGE i; // rax
  _QWORD *UserData; // rbx
  __int64 v6; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-38h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+18h] BYREF

  Range = 0LL;
  v2 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  ProcNumber = 0;
  if ( ProcessorInstanceCount )
  {
    do
    {
      v3 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v2);
      if ( v3 )
      {
        if ( a1 )
          ++v3;
        RtlGetFirstRange(v3, &Iterator, &Range);
        for ( i = Range; Range; i = Range )
        {
          UserData = i->UserData;
          if ( UserData )
          {
            KeGetProcessorNumberFromIndex(v2, &ProcNumber);
            v6 = *UserData & ~(1LL << ProcNumber.Number);
            *UserData = v6;
            if ( !v6 )
              ExFreePoolWithTag(UserData, 0);
            Range->UserData = 0LL;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
        RtlFreeRangeList(v3);
      }
      ++v2;
    }
    while ( v2 < ProcessorInstanceCount );
  }
}
