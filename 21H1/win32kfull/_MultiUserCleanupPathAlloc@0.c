/*
 * XREFs of _MultiUserCleanupPathAlloc@0 @ 0xD492C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
HSEMAPHORE __stdcall MultiUserCleanupPathAlloc()
{
  HSEMAPHORE result; // eax

  result = PATHALLOC::hsemFreelist;
  if ( PATHALLOC::hsemFreelist )
  {
    GreDeleteSemaphore(PATHALLOC::hsemFreelist);
    result = PATHALLOC::hsemFreelist;
    PATHALLOC::hsemFreelist = 0;
  }
  while ( PATHALLOC::freelist )
  {
    PATHALLOC::freelist = *(struct PATHALLOC **)PATHALLOC::freelist;
    result = (HSEMAPHORE)Win32FreePool(PATHALLOC::freelist);
  }
  return result;
}
