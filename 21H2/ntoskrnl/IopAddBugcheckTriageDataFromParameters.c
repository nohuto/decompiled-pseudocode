/*
 * XREFs of IopAddBugcheckTriageDataFromParameters @ 0x1405033FC
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140504764 (IopUpdateMinidumpContext.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403CA40C (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckPnpTriageData @ 0x14050AFE0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14050B048 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14050B0F0 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14050B450 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14050B69C (IopAddBugcheckTriageThread.c)
 *     MmIsSpecialPoolAddress @ 0x140537730 (MmIsSpecialPoolAddress.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 */

char __fastcall IopAddBugcheckTriageDataFromParameters(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 MaxDataSize)
{
  int IsSpecialPoolAddress; // eax
  __int64 v10; // rdx
  ULONG v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // r8d

  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, (PVOID)0x1000);
  LOBYTE(IsSpecialPoolAddress) = IoAddTriageDumpDataBlock(MaxDataSize & 0xFFFFF000, (PVOID)0x1000);
  switch ( a1 )
  {
    case 205:
    case 214:
      LOBYTE(IsSpecialPoolAddress) = IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, (PVOID)0x1000);
      break;
    case 209:
      IsSpecialPoolAddress = MmIsSpecialPoolAddress(a2);
      if ( IsSpecialPoolAddress )
      {
        v10 = 4096LL;
        v11 = (a2 - 4096) & 0xFFFFF000;
LABEL_47:
        LOBYTE(IsSpecialPoolAddress) = IoAddTriageDumpDataBlock(v11, (PVOID)v10);
        return IsSpecialPoolAddress;
      }
      return IsSpecialPoolAddress;
    case 335:
    case 348:
      LOBYTE(IsSpecialPoolAddress) = KiIsAddressRangeValid(MaxDataSize, 16LL);
      if ( (_BYTE)IsSpecialPoolAddress )
      {
        LOBYTE(IsSpecialPoolAddress) = IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x10);
        v12 = *(_QWORD *)(MaxDataSize + 8);
        if ( v12 )
          LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageThread(v12);
      }
      break;
  }
  if ( a1 == 412 )
  {
    if ( !a3 )
      return IsSpecialPoolAddress;
    LOBYTE(IsSpecialPoolAddress) = a2 - 16;
    if ( (unsigned __int64)(a2 - 16) > 0x40 || (IsSpecialPoolAddress & 0xF) != 0 )
      return IsSpecialPoolAddress;
    LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageThread(a3);
  }
  if ( a1 == 159 )
  {
    if ( a2 == 4 )
    {
      if ( a4 )
        LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckPnpTriageData(a4, MaxDataSize);
      return IsSpecialPoolAddress;
    }
    if ( a2 != 3 )
      return IsSpecialPoolAddress;
    LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckPowerTriageData(a3, a4, MaxDataSize);
  }
  if ( a1 == 469 )
    LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckPnpWatchdogTriageData(a3);
  if ( a1 == 160 )
  {
    if ( a2 == 1560 )
      LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageThread(a4);
    if ( a2 == 1561 )
    {
      LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48));
      if ( !MaxDataSize )
        return IsSpecialPoolAddress;
      LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageDeviceNode(MaxDataSize);
    }
    if ( a2 != 15 )
    {
      LOBYTE(IsSpecialPoolAddress) = a2 + 16;
      if ( (unsigned __int64)(a2 - 240) > 1 )
        return IsSpecialPoolAddress;
    }
    if ( !MaxDataSize )
      return IsSpecialPoolAddress;
    LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageThread(MaxDataSize);
  }
  if ( a1 == 257 )
  {
    if ( a3 )
      return IsSpecialPoolAddress;
    LOBYTE(IsSpecialPoolAddress) = KiIsAddressRangeValid(a4, 44800LL);
    if ( !(_BYTE)IsSpecialPoolAddress )
      return IsSpecialPoolAddress;
    IoAddTriageDumpDataBlock(a4, (PVOID)0xAF00);
    IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 34240), (PVOID)0x4D0);
    v13 = *(_QWORD *)(a4 + 8);
    if ( KiIsAddressRangeValid(v13, 2200LL) )
      IopAddBugcheckTriageThread(v13);
    LOBYTE(IsSpecialPoolAddress) = IoAddTriageDumpDataBlock(
                                     (*(_DWORD *)(*(_QWORD *)(a4 + 34240) + 152LL) - 4096) & 0xFFFFF000,
                                     (PVOID)0x2000);
  }
  if ( a1 == 416 )
  {
    IopAddBugcheckTriageThread(a4);
    LOBYTE(IsSpecialPoolAddress) = PopInternalAddToDumpFile(0LL, 0LL, 0LL);
  }
  if ( a1 == 292 )
  {
    LOBYTE(IsSpecialPoolAddress) = KiIsAddressRangeValid(a3, 128LL);
    if ( (_BYTE)IsSpecialPoolAddress )
    {
      v14 = *(_DWORD *)(a3 + 20);
      v10 = 72 * (unsigned int)*(unsigned __int16 *)(a3 + 10) + 128;
      v11 = a3;
      if ( v14 >= (unsigned int)v10 )
        v10 = v14;
      goto LABEL_47;
    }
  }
  return IsSpecialPoolAddress;
}
