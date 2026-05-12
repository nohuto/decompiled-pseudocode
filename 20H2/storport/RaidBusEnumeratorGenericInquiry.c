/*
 * XREFs of RaidBusEnumeratorGenericInquiry @ 0x1C001747C
 * Callers:
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0011E1C (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016904 (RaidBusEnumeratorVisitUnit.c)
 * Callees:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0017588 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C0017A6C (RaidBusEnumeratorBuildVitalProductInquiry.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0017CD4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x1C0033704 (RaidBusEnumeratorReAllocateDataBufferResource.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1C00337AC (RaidBusEnumeratorReleaseDataBufferResource.c)
 */

__int64 __fastcall RaidBusEnumeratorGenericInquiry(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r14
  char v7; // r15
  char v8; // bp
  int UnitResources; // edi
  unsigned int v13; // eax
  char v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2 + 8;
  v16 = 0LL;
  v7 = 0;
  a6 = 0;
  v8 = 0;
  v18 = 0;
  while ( 1 )
  {
    UnitResources = RaidBusEnumeratorAllocateUnitResources(a2, v6, a5);
    if ( UnitResources < 0 )
      break;
    v13 = v18;
    if ( a5 > v18 )
      v13 = a5;
    RaidBusEnumeratorBuildVitalProductInquiry(a2, a3, v6, *(_DWORD *)a1, v13, (__int64)&v16);
    UnitResources = RaidBusEnumeratorIssueSynchronousRequest(a2, a4, v6, v16, v15);
    if ( UnitResources < 0 )
      break;
    UnitResources = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *, unsigned int *))(a1 + 8))(
                      a2,
                      v16,
                      a4,
                      &a6,
                      &v18);
    if ( !a6 )
      break;
    if ( v7 )
      break;
    UnitResources = RaidBusEnumeratorReAllocateDataBufferResource(a2, v6, v18);
    if ( UnitResources < 0 )
      break;
    v8 = 1;
    v7 = 1;
  }
  if ( v8 )
    RaidBusEnumeratorReleaseDataBufferResource(a2);
  return (unsigned int)UnitResources;
}
