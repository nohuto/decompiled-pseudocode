/*
 * XREFs of MiDereferenceFailedControlArea @ 0x1407F854C
 * Callers:
 *     MiFinishCreateSection @ 0x1406FD9F0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x140287574 (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x14028799C (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x1405AA5E8 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return MiDereferenceControlAreaBySection(v2, (v1 & 1) == 0);
  result = MiAweControlArea(v2);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
