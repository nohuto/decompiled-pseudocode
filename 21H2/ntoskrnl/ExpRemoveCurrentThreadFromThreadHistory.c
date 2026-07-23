/*
 * XREFs of ExpRemoveCurrentThreadFromThreadHistory @ 0x14023CFB0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

unsigned __int8 __fastcall ExpRemoveCurrentThreadFromThreadHistory(__int64 a1)
{
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdi

  result = *(_DWORD *)(a1 + 312) & 7;
  if ( result != 4 )
  {
    CurrentThread = KeGetCurrentThread();
    result = 0;
    while ( 1 )
    {
      v4 = result;
      if ( *(struct _KTHREAD **)(a1 + 8LL * result + 72) == CurrentThread )
        break;
      if ( ++result >= 4u )
        return result;
    }
    result = ObfDereferenceObjectWithTag(CurrentThread, 0x746C6644u);
    *(_QWORD *)(a1 + 8 * v4 + 72) = 0LL;
  }
  return result;
}
