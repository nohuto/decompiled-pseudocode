/*
 * XREFs of ?ValidUmpdHdev@@YGPAUHDEV__@@PAU1@@Z @ 0x2165D3
 * Callers:
 *     _NtGdiEngAssociateSurface@12 @ 0x2175AE (_NtGdiEngAssociateSurface@12.c)
 *     _NtGdiGetDhpdev@4 @ 0x21A5F4 (_NtGdiGetDhpdev@4.c)
 * Callees:
 *     <none>
 */

struct PDEV *__thiscall ValidUmpdHdev(void *this)
{
  struct PDEV *i; // esi
  struct PDEV *v4; // [esp+4h] [ebp-4h] BYREF

  if ( !this )
    return 0;
  GreAcquireSemaphore(_ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(&stru_100BA6, _ghsemDriverMgmt, 13);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v4 = i;
    if ( (*((_DWORD *)i + 6) & 0x8000) != 0 && *((void **)i + 3) == this )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v4);
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(&stru_100BA6, _ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(_ghsemDriverMgmt);
  return i;
}
