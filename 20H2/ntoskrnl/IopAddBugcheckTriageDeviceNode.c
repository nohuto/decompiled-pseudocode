/*
 * XREFs of IopAddBugcheckTriageDeviceNode @ 0x1405096E0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405018FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405092D8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050951C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageIrp @ 0x1405097D0 (IopAddBugcheckTriageIrp.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403C96CC (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageDevice @ 0x1405095D8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x1405097D0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140509A2C (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDeviceNode(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !KiIsAddressRangeValid(MaxDataSize, 88LL) )
      break;
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x58);
    v8 = *(_OWORD *)(MaxDataSize + 40);
    IopAddBugcheckTriageUnicodeString(&v8);
    v8 = *(_OWORD *)(MaxDataSize + 56);
    IopAddBugcheckTriageUnicodeString(&v8);
    v4 = *(_QWORD *)(MaxDataSize + 72);
    if ( v4 )
      IopAddBugcheckTriageIrp(v4);
    v5 = *(_QWORD *)(MaxDataSize + 80);
    if ( v5 )
    {
      if ( KiIsAddressRangeValid(*(_QWORD *)(MaxDataSize + 80), 56LL) )
      {
        IoAddTriageDumpDataBlock(v5, (PVOID)0x38);
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
          IopAddBugcheckTriageIrp(v6);
      }
    }
    IopAddBugcheckTriageDevice(*(_QWORD *)(MaxDataSize + 32));
    MaxDataSize = *(_QWORD *)(MaxDataSize + 16);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
