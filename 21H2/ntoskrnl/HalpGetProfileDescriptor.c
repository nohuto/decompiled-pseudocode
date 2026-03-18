/*
 * XREFs of HalpGetProfileDescriptor @ 0x14038A10C
 * Callers:
 *     HalpQueryProfileSource @ 0x140376F58 (HalpQueryProfileSource.c)
 *     EmonSetInterval @ 0x140389F90 (EmonSetInterval.c)
 *     HalpRemoveProfileSourceFromList @ 0x14050BA34 (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x140520330 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x14052B860 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x14052C880 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProfileDescriptor(int a1, __int64 a2, _QWORD *a3)
{
  __int64 *i; // rax

  for ( i = (__int64 *)HalpProfileSourceDescriptorListHead; i != &HalpProfileSourceDescriptorListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      *a3 = i - 1;
      return 0LL;
    }
  }
  return 3221225659LL;
}
