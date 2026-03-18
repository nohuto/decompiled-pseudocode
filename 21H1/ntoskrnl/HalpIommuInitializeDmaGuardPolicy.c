/*
 * XREFs of HalpIommuInitializeDmaGuardPolicy @ 0x1403A5DC8
 * Callers:
 *     HalpIommuInitSystem @ 0x140997040 (HalpIommuInitSystem.c)
 * Callees:
 *     strstr @ 0x1403CD440 (strstr.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuInitializeDmaGuardPolicy(__int64 a1)
{
  bool v2; // si
  const char *v3; // rcx
  char v4; // al
  __int64 result; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpHvIommu )
  {
    v6 = 0;
    result = ((__int64 (__fastcall *)(char *))qword_140C4A510)(&v6);
    if ( (int)result >= 0 && v6 )
    {
      HalpIommuPolicy = 3;
      HalpIommuSecurityPolicy = 1;
    }
  }
  else
  {
    v2 = 0;
    if ( a1 )
    {
      v3 = *(const char **)(a1 + 216);
      if ( v3 )
        v2 = strstr(v3, "DMAGUARDPOLICY=ENABLE") != 0LL;
      v4 = v2;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2616LL) & 8) != 0 )
        v4 = 1;
      if ( v4 )
        goto LABEL_14;
    }
    if ( HalpIommuDmaGuardTableOptIn )
    {
LABEL_14:
      HalpIommuPolicy = 3;
      HalpIommuSecurityPolicy = 1;
    }
    return 0LL;
  }
  return result;
}
