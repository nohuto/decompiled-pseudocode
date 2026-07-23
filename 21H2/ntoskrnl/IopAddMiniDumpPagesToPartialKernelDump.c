/*
 * XREFs of IopAddMiniDumpPagesToPartialKernelDump @ 0x14050BCF0
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x14050B8E0 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     IopUpdateMinidumpContext @ 0x140504764 (IopUpdateMinidumpContext.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14050BE70 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopCalculateStackInformation @ 0x14050BF0C (IopCalculateStackInformation.c)
 *     IopMarkPagesForDpcData @ 0x14050C04C (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14050C170 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14050C340 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x140538920 (MmAddUnloadedDriverInformationToCrashDump.c)
 */

__int64 __fastcall IopAddMiniDumpPagesToPartialKernelDump(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v14[5]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v15; // [rsp+80h] [rbp+27h]

  v15 = 0LL;
  v12 = 0LL;
  a8 = 0;
  if ( !AvailablePagesForPartialDump )
    return 3221225507LL;
  v10 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v11 = *(_QWORD *)(v10 + 48);
  v14[1] = 0LL;
  LODWORD(v15) = v15 | 3;
  v13[0] = v11;
  v13[1] = v10 + 56;
  v14[2] = v13;
  v14[4] = &AvailablePagesForPartialDump;
  v14[0] = IoSetDumpRangeForPartialKernelDump;
  v14[3] = v10;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, a7);
  result = MmAddUnloadedDriverInformationToCrashDump(v14);
  if ( (int)result >= 0 )
  {
    result = IopMarkPagesForLoadedDriverInformation(v14);
    if ( (int)result >= 0 )
    {
      if ( !(unsigned __int8)IopCalculateStackInformation(a7, a6, &v12, &a8)
        || (result = IopMarkPagesForRunTimeTriageDataBlocks(v14, a6, v12, v12 + a8), (int)result >= 0) )
      {
        result = IopMarkPagesForDpcData(v14);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v14, a7->ApcState.Process, 2624LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(v14, a7, 2200LL);
            if ( (int)result >= 0 )
            {
              result = MmAddRangeToCrashDump(v14, v12, a8);
              if ( (int)result >= 0 )
                return IopAddTriageDumpDataToPartialKernelDump(v14, *(_QWORD *)(CrashdmpDumpBlock + 1416));
            }
          }
        }
      }
    }
  }
  return result;
}
