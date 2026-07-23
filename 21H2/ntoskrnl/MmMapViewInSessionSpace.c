/*
 * XREFs of MmMapViewInSessionSpace @ 0x140611730
 * Callers:
 *     <none>
 * Callees:
 *     MmMapViewInSessionSpaceEx @ 0x140611760 (MmMapViewInSessionSpaceEx.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MmMapViewInSessionSpaceEx((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL);
}
