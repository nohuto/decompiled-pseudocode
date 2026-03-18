/*
 * XREFs of _CleanupShadow@4 @ 0x19D2E1
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     <none>
 */

int __thiscall CleanupShadow(void *this)
{
  struct tagSHADOW *v1; // edi
  struct tagSHADOW **v2; // edx
  int result; // eax

  v1 = gpshadowFirst;
  v2 = &gpshadowFirst;
  while ( v1 )
  {
    if ( *((void **)v1 + 1) == this )
    {
      *v2 = (struct tagSHADOW *)*((_DWORD *)v1 + 2);
      HMAssignmentUnlock(v1);
      HMAssignmentUnlock((char *)v1 + 4);
      return Win32FreePool(v1);
    }
    v2 = (struct tagSHADOW **)((char *)v1 + 8);
    v1 = (struct tagSHADOW *)*((_DWORD *)v1 + 2);
  }
  return result;
}
