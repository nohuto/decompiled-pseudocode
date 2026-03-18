/*
 * XREFs of IopAddBugcheckTriageWorkQueue @ 0x14050618C
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x140505940 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405059A8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140505A50 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403C6C3C (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageThread @ 0x140505FFC (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopAddBugcheckTriageWorkQueue(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r14d
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid(MaxDataSize, 688LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x2B0);
    v4 = (_QWORD **)(MaxDataSize + 672);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = v4;
      while ( v5 != v4 && v3 < 10 )
      {
        ++v3;
        if ( !KiIsAddressRangeValid((__int64)v5, 16LL) || (_QWORD *)v5[1] != v6 )
          return (unsigned int)-1073741823;
        IopAddBugcheckTriageThread((__int64)(v5 - 65));
        v6 = v5;
        v5 = (_QWORD *)*v5;
        if ( !v5 )
          return v1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
