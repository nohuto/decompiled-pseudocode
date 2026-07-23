/*
 * XREFs of MiBadMemoryLogger @ 0x1408D7440
 * Callers:
 *     <none>
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1403805D0 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140505808 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall MiBadMemoryLogger(__int64 a1)
{
  _WORD *GenericErrorLogEntry; // rax
  int v3; // edx

  GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(48);
  if ( GenericErrorLogEntry )
  {
    *((_DWORD *)GenericErrorLogEntry + 3) = -1073740023;
    *((_DWORD *)GenericErrorLogEntry + 4) = *(_DWORD *)a1;
    *((_QWORD *)GenericErrorLogEntry + 4) = *(_QWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 8);
    GenericErrorLogEntry[1] = 4;
    *((_DWORD *)GenericErrorLogEntry + 10) = v3;
    IoWriteErrorLogEntry(GenericErrorLogEntry);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
}
