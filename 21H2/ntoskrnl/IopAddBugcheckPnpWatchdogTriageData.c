/*
 * XREFs of IopAddBugcheckPnpWatchdogTriageData @ 0x14050B048
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405033FC (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403CA40C (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050B28C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14050B348 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14050B450 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14050B69C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050B82C (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpWatchdogTriageData(_QWORD *MaxDataSize, ULONG a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = 0;
  IopAddBugcheckTriageThread(a2);
  if ( KiIsAddressRangeValid((__int64)MaxDataSize, 80LL) )
  {
    IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x50);
    IopAddBugcheckTriageCompletionQueue(MaxDataSize[5]);
    IopAddBugcheckTriageWorkQueue(MaxDataSize[6]);
    v4 = MaxDataSize[2];
    if ( v4 )
      IopAddBugcheckTriageThread(v4);
    v5 = MaxDataSize[3];
    if ( v5 )
      IopAddBugcheckTriageThread(v5);
    v6 = MaxDataSize[4];
    if ( v6 )
      IopAddBugcheckTriageThread(v6);
    v7 = MaxDataSize[8];
    if ( v7 )
      IopAddBugcheckTriageDevice(v7);
    v8 = MaxDataSize[7];
    if ( v8 )
      IopAddBugcheckTriageDeviceNode(v8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
