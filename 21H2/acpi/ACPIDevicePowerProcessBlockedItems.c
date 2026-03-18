/*
 * XREFs of ACPIDevicePowerProcessBlockedItems @ 0x1C002B950
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIIsPowerRequestBlocked @ 0x1C000DEE0 (ACPIIsPowerRequestBlocked.c)
 */

__int64 ACPIDevicePowerProcessBlockedItems()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int64 *v3; // rax
  __int64 **v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // rcx

  v0 = (__int64 *)AcpiPowerBlockedOnDependencyList;
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
  {
    do
    {
      v1 = (__int64 *)*v0;
      if ( !ACPIIsPowerRequestBlocked((__int64)v0) )
      {
        v3 = (__int64 *)*v0;
        if ( *(__int64 **)(*v0 + 8) != v0
          || (v4 = (__int64 **)v0[1], *v4 != v0)
          || (*v4 = v3, v3[1] = (__int64)v4, v5 = v0[12], v6 = *(__int64 ***)(v5 + 8), *v6 != (__int64 *)v5) )
        {
          __fastfail(3u);
        }
        *v0 = v5;
        v0[1] = (__int64)v6;
        *v6 = v0;
        *(_QWORD *)(v5 + 8) = v0;
        v0[12] = 0LL;
      }
      v0 = v1;
    }
    while ( v1 != &AcpiPowerBlockedOnDependencyList );
  }
  return 0LL;
}
