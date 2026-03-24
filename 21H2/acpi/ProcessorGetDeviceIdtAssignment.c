/*
 * XREFs of ProcessorGetDeviceIdtAssignment @ 0x1C00936A0
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C0092578 (IrqArbpSetDeviceProperties.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C0092F20 (ProcessorpFindIdtEntriesApic.c)
 *     IrqTranslateResources @ 0x1C0093510 (IrqTranslateResources.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0093FBC (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbGetDeviceIrql @ 0x1C0095178 (IrqArbGetDeviceIrql.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6730 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B6C80 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B6F40 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorGetDeviceIdtAssignment(PVOID a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  struct _RTL_RANGE_LIST *v9; // rcx
  PRTL_RANGE v10; // rcx
  _DWORD *UserData; // rax
  __int64 result; // rax
  __int128 v13; // xmm1
  PRTL_RANGE Range; // [rsp+20h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0;
  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  while ( 1 )
  {
    v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v4);
    if ( v9 )
    {
      if ( a3 )
        ++v9;
      RtlGetFirstRange(v9, &Iterator, &Range);
      v10 = Range;
      if ( Range )
        break;
    }
LABEL_9:
    if ( ++v4 >= ProcessorInstanceCount )
      return 3221226021LL;
  }
  while ( 1 )
  {
    UserData = v10->UserData;
    if ( UserData )
    {
      if ( UserData[4] == a2 && (!a1 || v10->Owner == a1) )
        break;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v10 = Range;
    if ( !Range )
      goto LABEL_9;
  }
  *a4 = *(_OWORD *)UserData;
  v13 = *((_OWORD *)UserData + 1);
  result = 0LL;
  a4[1] = v13;
  return result;
}
