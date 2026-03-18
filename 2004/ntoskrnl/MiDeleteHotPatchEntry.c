/*
 * XREFs of MiDeleteHotPatchEntry @ 0x1408C6368
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x1408C651C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x1408C6D34 (MiHotPatchImage.c)
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x140600750 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteHotPatchEntry(UNICODE_STRING *P)
{
  _KPROCESS *Process; // rsi
  wchar_t *Buffer; // rdi
  wchar_t *v4; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  while ( 1 )
  {
    Buffer = P[3].Buffer;
    if ( !Buffer )
      break;
    P[3].Buffer = *(wchar_t **)Buffer;
    MmUnsecureVirtualMemory(*((HANDLE *)Buffer + 2));
    MiUnmapViewOfSection(Process, *((_QWORD *)Buffer + 1), 0, 0);
    ExFreePoolWithTag(Buffer, 0);
  }
  RtlFreeAnsiString(P + 4);
  v4 = P[2].Buffer;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
}
