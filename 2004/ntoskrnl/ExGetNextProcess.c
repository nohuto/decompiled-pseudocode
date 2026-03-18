/*
 * XREFs of ExGetNextProcess @ 0x14069873C
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 * Callees:
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
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
