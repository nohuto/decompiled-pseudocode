/*
 * XREFs of MiDereferenceFailedControlArea @ 0x140710F04
 * Callers:
 *     MiFinishCreateSection @ 0x1405FB480 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiAweControlArea @ 0x1402496E8 (MiAweControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14024A858 (MiDereferenceControlAreaBySection.c)
 *     MiDeleteSectionAwe @ 0x140546638 (MiDeleteSectionAwe.c)
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
