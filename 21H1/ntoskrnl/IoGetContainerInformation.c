/*
 * XREFs of IoGetContainerInformation @ 0x140890450
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     MmGetIoSessionState @ 0x1408C42A0 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  unsigned int CurrentProcessSessionId; // eax
  bool v8; // zf
  int v9; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId);
    if ( !SessionObjectById )
      return -1073741584;
  }
  v9 = 0;
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState(SessionObjectById, &v9);
  v8 = v9 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v9;
  *((_BYTE *)Buffer + 8) = v8;
  return 0;
}
