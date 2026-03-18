/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x140505940
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FE02C (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403C6C3C (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140505BEC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageThread @ 0x140505FFC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050618C (IopAddBugcheckTriageWorkQueue.c)
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
