/*
 * XREFs of StorLogIoError @ 0x1C00460B4
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002CD08 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0030114 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0049AF0 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 */

void __fastcall StorLogIoError(__int64 a1, int a2, int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi

  v4 = a2;
  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*(PVOID *)(a1 + 8), 0x40u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0x40uLL);
    *((_DWORD *)v8 + 5) = 0;
    *((_WORD *)v8 + 1) = 24;
    *(_WORD *)(v8 + 49) = *(_WORD *)((char *)&a2 + 1);
    *v8 = 15;
    *((_DWORD *)v8 + 4) = a4;
    v8[48] = v4;
    *((_DWORD *)v8 + 3) = a3;
    *((_DWORD *)v8 + 13) = a3;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
