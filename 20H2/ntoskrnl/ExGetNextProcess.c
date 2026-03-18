/*
 * XREFs of ExGetNextProcess @ 0x140659A54
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 * Callees:
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 */

_DWORD *__fastcall ExGetNextProcess(PVOID Object, char a2)
{
  _DWORD *result; // rax
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    result = (_DWORD *)PsGetNextProcess(Object);
    Object = result;
    if ( !result )
      break;
    if ( (result[281] & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(result, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
  return result;
}
