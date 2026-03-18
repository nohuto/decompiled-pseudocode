/*
 * XREFs of HalJoinDmaDomain @ 0x1403CD4E0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaReferenceDomainObject @ 0x1403B2A28 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaAllocateDomain @ 0x1403CD570 (HalpDmaAllocateDomain.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaIsDomainCompatible @ 0x1405153A4 (HalpDmaIsDomainCompatible.c)
 */

__int64 __fastcall HalJoinDmaDomain(__int64 a1, __int64 *a2)
{
  char v4; // bp
  __int64 Domain; // rsi
  int v6; // ebx

  v4 = 0;
  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 3 && !*(_QWORD *)(a1 + 504) )
  {
    if ( (unsigned __int64)a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      Domain = *a2;
      if ( Domain && (unsigned __int8)HalpDmaIsDomainCompatible(a1, Domain) )
      {
        v6 = HalpDmaReferenceDomainObject(Domain);
        if ( v6 < 0 )
          goto LABEL_12;
        goto LABEL_6;
      }
      v6 = -1073741811;
    }
    else
    {
      Domain = HalpDmaAllocateDomain(a1);
      if ( Domain )
      {
        v6 = 0;
LABEL_6:
        *(_QWORD *)(a1 + 504) = Domain;
        v4 = 1;
        if ( !*(_DWORD *)(Domain + 48) )
          return (unsigned int)v6;
        v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C4BD80)(*(_QWORD *)(Domain + 40), *(_QWORD *)(a1 + 536));
        if ( v6 >= 0 )
        {
          if ( *(_DWORD *)(Domain + 48) != 3 )
            return (unsigned int)v6;
          v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))qword_140C4BDF0)(
                 *(_QWORD *)(Domain + 40),
                 *(unsigned int *)(a1 + 244),
                 0LL,
                 0LL,
                 0LL,
                 a1 + 552);
          if ( v6 >= 0 )
            return (unsigned int)v6;
          ((void (__fastcall *)(_QWORD))qword_140C4BD88)(*(_QWORD *)(a1 + 536));
          *(_QWORD *)(a1 + 504) = 0LL;
          goto LABEL_13;
        }
LABEL_12:
        *(_QWORD *)(a1 + 504) = 0LL;
        if ( !v4 )
          return (unsigned int)v6;
LABEL_13:
        HalpDmaDereferenceDomainObject(Domain);
        return (unsigned int)v6;
      }
      v6 = -1073741670;
    }
    *(_QWORD *)(a1 + 504) = 0LL;
    return (unsigned int)v6;
  }
  return 3221225485LL;
}
