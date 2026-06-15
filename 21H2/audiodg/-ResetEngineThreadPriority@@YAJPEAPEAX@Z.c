/*
 * XREFs of ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x140051928
 * Callers:
 *     OnThreadDetach @ 0x1400445F0 (OnThreadDetach.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x140051988 (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEngineThreadPriority(void **a1)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( *a1 )
  {
    if ( AvRevertMmThreadCharacteristics(*a1) )
    {
      *a1 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  return v1;
}
