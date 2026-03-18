/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x140509270
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405018FC (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403C96CC (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050951C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageThread @ 0x14050992C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140509ABC (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(ULONG a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  IopAddBugcheckTriageThread(a1);
  if ( KiIsAddressRangeValid(a2, 32LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x20);
    IopAddBugcheckTriageCompletionQueue(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 16));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
