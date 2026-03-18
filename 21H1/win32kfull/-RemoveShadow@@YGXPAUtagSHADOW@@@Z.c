/*
 * XREFs of ?RemoveShadow@@YGXPAUtagSHADOW@@@Z @ 0x19D190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RemoveShadow(struct tagSHADOW *a1)
{
  struct tagSHADOW *v1; // edi
  struct tagSHADOW **v2; // ecx

  v1 = gpshadowFirst;
  v2 = &gpshadowFirst;
  if ( gpshadowFirst )
  {
    while ( v1 != a1 )
    {
      v2 = (struct tagSHADOW **)((char *)v1 + 8);
      v1 = (struct tagSHADOW *)*((_DWORD *)v1 + 2);
      if ( !v1 )
        return;
    }
    *v2 = (struct tagSHADOW *)*((_DWORD *)v1 + 2);
    HMAssignmentUnlock(a1);
    HMAssignmentUnlock((char *)a1 + 4);
    Win32FreePool(v1);
  }
}
