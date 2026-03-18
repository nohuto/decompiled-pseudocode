/*
 * XREFs of IopAddBugcheckTriageThread @ 0x140505FFC
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FE02C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckPnpTriageData @ 0x140505940 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405059A8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140505A50 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050618C (IopAddBugcheckTriageWorkQueue.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403C6C3C (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x1404FECFC (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x140505EA0 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  unsigned int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid(MaxDataSize, 2200LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x898);
    if ( (*(_DWORD *)(MaxDataSize + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(MaxDataSize + 56);
      v5 = *(_QWORD *)(MaxDataSize + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v7, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, (PVOID)MaxValidMemorySize);
    }
    v9 = (_QWORD *)(MaxDataSize + 1200);
    v10 = *(_QWORD **)(MaxDataSize + 1200);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !KiIsAddressRangeValid((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
