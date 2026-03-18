/*
 * XREFs of HalpMcUpdateInitialize @ 0x14082481C
 * Callers:
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140A54E70 (HalpProcInitSystem.c)
 *     HalpProcInitDiscard @ 0x140AF8908 (HalpProcInitDiscard.c)
 * Callees:
 *     HalpMcUpdateFindDataTableEntry @ 0x1403BAE44 (HalpMcUpdateFindDataTableEntry.c)
 *     HalpIsPartitionCpuManager @ 0x1403BAEA4 (HalpIsPartitionCpuManager.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcUpdateInitialize(__int64 a1, _QWORD *a2)
{
  _QWORD *DataTableEntry; // r11
  int v4; // ebx
  bool v5; // dl
  bool v6; // zf
  _QWORD v8[5]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+48h] [rbp-38h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int128 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+78h] [rbp-8h]

  v12 = 0LL;
  DataTableEntry = a2;
  v8[0] = HalMcUpdateReadPCIConfig;
  v8[1] = MmLockPagableDataSection;
  v8[2] = MmLockPagableDataSection;
  v8[3] = MmLockPagableSectionByHandle;
  v8[4] = MmUnlockPagableImageSection;
  v4 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a1 || HalpIsPartitionCpuManager() )
  {
    v6 = DataTableEntry == 0LL;
  }
  else
  {
    DataTableEntry = HalpMcUpdateFindDataTableEntry((_QWORD *)(a1 + 16));
    v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000000) != 0;
    HalpMcUpdateSelfHosting = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x8000000) != 0;
    v6 = DataTableEntry == 0LL;
    HalpMcUpdateMinVerSupported = v5;
  }
  if ( v6 || (v4 = ((__int64 (__fastcall *)(__int128 *, _QWORD *))DataTableEntry[7])(&v9, v8), v4 < 0) )
  {
    HalpMcUpdatePostUpdateFunc = 0LL;
    HalpMcUpdateUnlockFunc = 0LL;
    HalpMcUpdateLockFunc = 0LL;
    HalpMcUpdateExportDataFunc = 0LL;
    HalpMcUpdateMicrocodeFuncEx = 0LL;
    HalpMcUpdateMicrocodeFunc = 0LL;
  }
  else
  {
    HalpMcUpdateMicrocodeFuncEx = *((_QWORD *)&v9 + 1);
    HalpMcUpdateMicrocodeFunc = (PVOID)v9;
    HalpMcUpdateExportDataFunc = *((_QWORD *)&v11 + 1);
    HalpMcUpdateUnlockFunc = (__int64 (*)(void))*((_QWORD *)&v10 + 1);
    HalpMcUpdateLockFunc = (__int64 (__fastcall *)(_QWORD, _QWORD))v10;
    HalpMcUpdatePostUpdateFunc = v11;
  }
  return (unsigned int)v4;
}
