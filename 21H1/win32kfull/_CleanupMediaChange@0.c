/*
 * XREFs of _CleanupMediaChange@0 @ 0xD4B5E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _FAST_MUTEX *__stdcall CleanupMediaChange()
{
  struct _FAST_MUTEX *result; // eax

  if ( gpEventMediaChange )
  {
    ObfDereferenceObject(gpEventMediaChange);
    gpEventMediaChange = 0;
  }
  result = gMediaChangeMutex;
  if ( gMediaChangeMutex )
  {
    result = (struct _FAST_MUTEX *)Win32FreePool(gMediaChangeMutex);
    gMediaChangeMutex = 0;
  }
  return result;
}
