/*
 * XREFs of RaidAdapterLogIoError @ 0x1C002D198
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     StorPortLogError @ 0x1C00396E0 (StorPortLogError.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidScsiErrorToIoError @ 0x1C00458CC (RaidScsiErrorToIoError.c)
 */

void __fastcall RaidAdapterLogIoError(__int64 a1, int a2, unsigned int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi
  int v9; // eax

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
    v9 = RaidScsiErrorToIoError(a3);
    *((_DWORD *)v8 + 3) = v9;
    *((_DWORD *)v8 + 13) = v9;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
