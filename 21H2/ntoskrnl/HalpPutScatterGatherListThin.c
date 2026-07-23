/*
 * XREFs of HalpPutScatterGatherListThin @ 0x1404CBCCC
 * Callers:
 *     HalPutScatterGatherListThin @ 0x1404CB4D0 (HalPutScatterGatherListThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 */

char __fastcall HalpPutScatterGatherListThin(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 i; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)&a2[6 * i + 4] & 0xFFFFFFFFFFFFF000uLL;
    v8 = a2[6 * i + 6] + (a2[6 * i + 4] & 0xFFFu);
    if ( !(_DWORD)i && v6 == *(_QWORD *)(a1 + 552) )
      v2 = 1;
    HalpIommuDomainUnmapLogicalRange(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 40LL), v6, &v8, v2);
    if ( !v2 )
      HalpDomainLaDelete(*(_QWORD *)(a1 + 504), v6);
  }
  return v2;
}
