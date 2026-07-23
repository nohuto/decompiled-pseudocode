/*
 * XREFs of MiDeleteHotPatchEntry @ 0x1408C9AC8
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x1408C9C7C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x1408CA494 (MiHotPatchImage.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1406893D0 (MmUnsecureVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
