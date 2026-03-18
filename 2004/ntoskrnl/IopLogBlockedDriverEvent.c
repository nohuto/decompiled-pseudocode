/*
 * XREFs of IopLogBlockedDriverEvent @ 0x14088EAA4
 * Callers:
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14036EF30 (RtlStringCchCopyNW.c)
 *     IoWriteErrorLogEntry @ 0x14037E510 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140500438 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall IopLogBlockedDriverEvent(__int64 a1, __int64 a2, int a3)
{
  _WORD *GenericErrorLogEntry; // rax
  void *v6; // rbx

  GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(176);
  v6 = GenericErrorLogEntry;
  if ( GenericErrorLogEntry )
  {
    *(_DWORD *)(GenericErrorLogEntry + 1) = 0x10000;
    *((_DWORD *)GenericErrorLogEntry + 3) = -1073740764;
    GenericErrorLogEntry[3] = 48;
    *((_DWORD *)GenericErrorLogEntry + 5) = a3;
    RtlStringCchCopyNW(GenericErrorLogEntry + 24, 0x40uLL, *(STRSAFE_PCNZWCH *)(a1 + 8), 0x3FuLL);
    IoWriteErrorLogEntry(v6);
  }
}
