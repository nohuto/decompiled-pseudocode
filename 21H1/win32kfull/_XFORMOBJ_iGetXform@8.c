/*
 * XREFs of _XFORMOBJ_iGetXform@8 @ 0x8B07C
 * Callers:
 *     ?UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8AFFE (-UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     _NtGdiXFORMOBJ_iGetXform@8 @ 0x21B391 (_NtGdiXFORMOBJ_iGetXform@8.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall XFORMOBJ_iGetXform(XFORMOBJ *pxo, XFORML *pxform)
{
  if ( !pxo )
    return -1;
  if ( pxform )
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)pxo, pxform);
  if ( (*(_DWORD *)(pxo->ulReserved + 56) & 0x43) == 1 )
    return 2;
  if ( (*(_DWORD *)(pxo->ulReserved + 56) & 0x43) == 3 )
    return 1;
  if ( (*(_DWORD *)(pxo->ulReserved + 56) & 0x43) != 0x43 )
    return 3;
  return 0;
}
