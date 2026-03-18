/*
 * XREFs of IopAddBugcheckTriageDataFromParameters @ 0x140553A48
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1405550FC (IopUpdateMinidumpContext.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403D7FD4 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055C354 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055C3BC (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055C464 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055C7C4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14055CA14 (IopAddBugcheckTriageThread.c)
 *     MmIsSpecialPoolAddress @ 0x140592348 (MmIsSpecialPoolAddress.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 */

char __fastcall IopAddBugcheckTriageDataFromParameters(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 MaxDataSize)
{
  int IsSpecialPoolAddress; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  ULONG v14; // ecx
  __int64 v15; // rbx
  unsigned int v16; // r8d

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
        LODWORD(v11) = (a2 - 4096) & 0xFFFFF000;
LABEL_48:
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
  switch ( a1 )
  {
    case 412:
      if ( !a3 )
        return IsSpecialPoolAddress;
      v13 = a2 - 16;
      if ( v13 > 0x40 || (v13 & 0xF) != 0 )
        return IsSpecialPoolAddress;
      v14 = a3;
      goto LABEL_35;
    case 159:
      if ( a2 == 4 )
      {
        if ( a4 )
          LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckPnpTriageData(a4, MaxDataSize);
      }
      else if ( a2 == 3 )
      {
        LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckPowerTriageData(a3, a4, MaxDataSize);
      }
      return IsSpecialPoolAddress;
    case 469:
      LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckPnpWatchdogTriageData(a3);
      return IsSpecialPoolAddress;
    case 160:
      if ( a2 == 1560 )
      {
        v14 = a4;
      }
      else
      {
        if ( a2 == 1561 )
        {
          LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48));
          if ( MaxDataSize )
            LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageDeviceNode(MaxDataSize);
          return IsSpecialPoolAddress;
        }
        if ( a2 != 15 )
        {
          LOBYTE(IsSpecialPoolAddress) = a2 + 16;
          if ( (unsigned __int64)(a2 - 240) > 1 )
            return IsSpecialPoolAddress;
        }
        if ( !MaxDataSize )
          return IsSpecialPoolAddress;
        v14 = MaxDataSize;
      }
LABEL_35:
      LOBYTE(IsSpecialPoolAddress) = IopAddBugcheckTriageThread(v14);
      return IsSpecialPoolAddress;
    case 257:
      if ( !a3 )
      {
        LOBYTE(IsSpecialPoolAddress) = KiIsAddressRangeValid(a4, 48896LL);
        if ( (_BYTE)IsSpecialPoolAddress )
        {
          IoAddTriageDumpDataBlock(a4, (PVOID)0xBF00);
          IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 35264), (PVOID)0x4D0);
          v15 = *(_QWORD *)(a4 + 8);
          if ( KiIsAddressRangeValid(v15, 2288LL) )
            IopAddBugcheckTriageThread(v15);
          v10 = 0x2000LL;
          v11 = (*(_QWORD *)(*(_QWORD *)(a4 + 35264) + 152LL) - 4096LL) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_48;
        }
      }
      break;
    case 416:
      IopAddBugcheckTriageThread(a4);
      LOBYTE(IsSpecialPoolAddress) = PopInternalAddToDumpFile(0LL, 0LL, 0LL);
      break;
    case 292:
      LOBYTE(IsSpecialPoolAddress) = KiIsAddressRangeValid(a3, 128LL);
      if ( (_BYTE)IsSpecialPoolAddress )
      {
        v16 = *(_DWORD *)(a3 + 20);
        v10 = 72 * (unsigned int)*(unsigned __int16 *)(a3 + 10) + 128;
        LODWORD(v11) = a3;
        if ( v16 >= (unsigned int)v10 )
          v10 = v16;
        goto LABEL_48;
      }
      break;
  }
  return IsSpecialPoolAddress;
}
