/*
 * XREFs of HalpIommuUpdateRemappingDestination @ 0x140A61B28
 * Callers:
 *     HalpUpdateIrtDestinationId @ 0x14051DB48 (HalpUpdateIrtDestinationId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuUpdateRemappingDestination(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v8; // rbp
  __int64 *v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = (__int64 *)HalpIommuList;
  v8 = a2;
  while ( v5 != &HalpIommuList )
  {
    v9 = v5;
    v5 = (__int64 *)*v5;
    result = *((unsigned int *)v9 + 118);
    if ( (result & 0x40) != 0 )
    {
      LOBYTE(a2) = 1;
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int))v9[23])(v9[2], a2, v8, a3, a4);
    }
  }
  return result;
}
