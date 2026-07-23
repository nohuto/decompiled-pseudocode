/*
 * XREFs of PsspDumpObject_Section @ 0x4B387FF0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySection@20 @ 0x4B2F2E90 (_ZwQuerySection@20.c)
 */

NTSTATUS __stdcall PsspDumpObject_Section(HANDLE SectionHandle, PVOID SectionInformation, unsigned int a3, _DWORD *a4)
{
  SIZE_T v5; // [esp-8h] [ebp-8h]
  ULONG_PTR *savedregs; // [esp+0h] [ebp+0h]

  *a4 = 0;
  if ( a3 < 0x10 )
    return -1073741789;
  HIDWORD(v5) = a4;
  LODWORD(v5) = 16;
  return ZwQuerySection(SectionHandle, SectionBasicInformation, SectionInformation, v5, savedregs);
}
