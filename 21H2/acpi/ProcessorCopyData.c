/*
 * XREFs of ProcessorCopyData @ 0x1C009B4BC
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009A2E0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C009B2C0 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009C700 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C009D86C (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     ProcessorpInsertAssignment @ 0x1C009B6FC (ProcessorpInsertAssignment.c)
 *     ProcessorpClearData @ 0x1C009B828 (ProcessorpClearData.c)
 */

__int64 __fastcall ProcessorCopyData(__int64 a1)
{
  unsigned int v1; // esi
  int v2; // eax
  __int64 v3; // rbx
  struct _RTL_RANGE_LIST *v4; // rcx
  struct _RTL_RANGE_LIST *v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // rbx
  struct _RTL_RANGE_LIST *v8; // rcx
  __int64 v9; // rdi
  struct _RTL_RANGE_LIST *v10; // r14
  struct _RTL_RANGE_LIST *v11; // rcx
  _WORD *UserData; // rbx
  __int64 v13; // r14
  _OWORD *Pool2; // rax
  _OWORD *v16; // rdx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR v18; // [rsp+40h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+38h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+40h] BYREF
  PRTL_RANGE v21; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0LL;
  Range = 0LL;
  ProcNumber = 0;
  v1 = a1;
  memset(&v18, 0, sizeof(v18));
  memset(&Iterator, 0, sizeof(Iterator));
  ProcessorpClearData(a1);
  v2 = ProcessorInstanceCount;
  v3 = 0LL;
  if ( ProcessorInstanceCount )
  {
    while ( 1 )
    {
      v4 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
      if ( v4 )
      {
        v5 = v4 + 1;
        if ( v1 )
        {
          v5 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
          ++v4;
        }
        v6 = RtlCopyRangeList(v4, v5);
        if ( v6 < 0 )
          break;
      }
      v2 = ProcessorInstanceCount;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= ProcessorInstanceCount )
        goto LABEL_7;
    }
LABEL_33:
    ProcessorpClearData(v1);
  }
  else
  {
LABEL_7:
    v7 = 0LL;
    if ( v2 )
    {
      do
      {
        v8 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v7);
        if ( v8 )
        {
          if ( v1 )
            ++v8;
          RtlGetFirstRange(v8, &Iterator, &Range);
          while ( Range )
          {
            Range->UserData = 0LL;
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v2 = ProcessorInstanceCount;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < ProcessorInstanceCount );
    }
    v9 = 0LL;
    if ( v2 )
    {
      do
      {
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v9);
        if ( v10 )
        {
          v11 = v10 + 1;
          if ( v1 )
            v11 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v9);
          RtlGetFirstRange(v11, &v18, &v21);
          if ( v1 )
            ++v10;
          RtlGetFirstRange(v10, &Iterator, &Range);
          while ( v21 )
          {
            UserData = v21->UserData;
            if ( UserData )
            {
              v13 = *(_QWORD *)UserData;
              KeGetProcessorNumberFromIndex(v9, &ProcNumber);
              if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v13 ^ (v13 - 1)) & v13) != 0 )
              {
                Pool2 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1232102209LL);
                if ( !Pool2 )
                {
                  v6 = -1073741670;
                  goto LABEL_33;
                }
                v16 = v21->UserData;
                *Pool2 = *v16;
                Pool2[1] = v16[1];
                ProcessorpInsertAssignment(v21->Owner, Pool2, v1);
              }
            }
            RtlGetNextRange(&v18, &v21, 1u);
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < ProcessorInstanceCount );
    }
    return 0;
  }
  return (unsigned int)v6;
}
