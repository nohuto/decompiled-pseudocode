/*
 * XREFs of IommuDeviceQueryDomainTypes @ 0x140527CD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeviceGetDomainTypes @ 0x140510C60 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuDeviceQueryDomainTypes(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = HalpIommuDeviceGetDomainTypes(a1);
  *a2 = result;
  return result;
}
