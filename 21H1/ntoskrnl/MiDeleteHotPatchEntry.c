/*
 * XREFs of MiDeleteHotPatchEntry @ 0x1408C5018
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x1408C51CC (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
    MiUnmapViewOfSection(Process, *((_QWORD *)Buffer + 1), 0, 0LL);
    ExFreePoolWithTag(Buffer, 0);
  }
  RtlFreeAnsiString(P + 4);
  v4 = P[2].Buffer;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
}
