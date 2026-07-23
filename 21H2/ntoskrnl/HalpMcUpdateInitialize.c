/*
 * XREFs of HalpMcUpdateInitialize @ 0x1407923D0
 * Callers:
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x14099C4C0 (HalpProcInitSystem.c)
 *     HalpProcInitDiscard @ 0x140A3A4E4 (HalpProcInitDiscard.c)
 * Callees:
 *     HalpMcUpdateFindDataTableEntry @ 0x1403A8F1C (HalpMcUpdateFindDataTableEntry.c)
 *     HalpIsPartitionCpuManager @ 0x1403A8F7C (HalpIsPartitionCpuManager.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcUpdateInitialize(__int64 a1, _QWORD *a2)
{
  _QWORD *DataTableEntry; // r11
  int v4; // ebx
  bool v5; // dl
  _QWORD v7[5]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v8; // [rsp+48h] [rbp-38h] BYREF
  __int128 v9; // [rsp+58h] [rbp-28h]
  __int128 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp-8h]

  v11 = 0LL;
  DataTableEntry = a2;
  v7[0] = HalMcUpdateReadPCIConfig;
  v7[1] = MmLockPagableDataSection;
  v7[2] = MmLockPagableDataSection;
  v7[3] = MmLockPagableSectionByHandle;
  v7[4] = MmUnlockPagableImageSection;
  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a1 || HalpIsPartitionCpuManager(a1) )
  {
    if ( !DataTableEntry )
    {
LABEL_9:
      HalpMcUpdatePostUpdateFunc = 0LL;
      HalpMcUpdateUnlockFunc = 0LL;
      HalpMcUpdateLockFunc = 0LL;
      HalpMcUpdateExportDataFunc = 0LL;
      HalpMcUpdateMicrocodeFuncEx = 0LL;
      HalpMcUpdateMicrocodeFunc = 0LL;
      return (unsigned int)v4;
    }
  }
  else
  {
    DataTableEntry = HalpMcUpdateFindDataTableEntry((_QWORD *)(a1 + 16));
    v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000000) != 0;
    HalpMcUpdateSelfHosting = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x8000000) != 0;
    HalpMcUpdateMinVerSupported = v5;
  }
  if ( !DataTableEntry )
    goto LABEL_9;
  v4 = ((__int64 (__fastcall *)(__int128 *, _QWORD *))DataTableEntry[7])(&v8, v7);
  if ( v4 < 0 )
    goto LABEL_9;
  HalpMcUpdateMicrocodeFuncEx = *((_QWORD *)&v8 + 1);
  HalpMcUpdateMicrocodeFunc = (PVOID)v8;
  HalpMcUpdateExportDataFunc = *((_QWORD *)&v10 + 1);
  HalpMcUpdateUnlockFunc = (__int64 (*)(void))*((_QWORD *)&v9 + 1);
  HalpMcUpdateLockFunc = (__int64 (__fastcall *)(_QWORD, _QWORD))v9;
  HalpMcUpdatePostUpdateFunc = v10;
  return (unsigned int)v4;
}
