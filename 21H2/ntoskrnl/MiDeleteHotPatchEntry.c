/*
 * XREFs of MiDeleteHotPatchEntry @ 0x1408C9968
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x1408C9B1C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x1408CA334 (MiHotPatchImage.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x14061F760 (MmUnsecureVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
