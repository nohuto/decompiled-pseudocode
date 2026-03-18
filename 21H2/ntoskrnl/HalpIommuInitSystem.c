/*
 * XREFs of HalpIommuInitSystem @ 0x140A55270
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptIsRemappingRequired @ 0x140252460 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuGetRootIommuFaultPolicy @ 0x14025E910 (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpIommuLogEarlyFault @ 0x1403BB6AC (HalpIommuLogEarlyFault.c)
 *     IommuInitializeLibrary @ 0x1403BB76C (IommuInitializeLibrary.c)
 *     HalpIommuInitializeDmar @ 0x1403BB7AC (HalpIommuInitializeDmar.c)
 *     HalpIommuEnableInterrupts @ 0x1403BB97C (HalpIommuEnableInterrupts.c)
 *     HalpIommuProcessReservations @ 0x1403BB9B8 (HalpIommuProcessReservations.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403BB9FC (HalpIommuInitializeDmaGuardPolicy.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IommupHvSetRootFaultReportingReady @ 0x140527B60 (IommupHvSetRootFaultReportingReady.c)
 *     IommupHvUnblockDefaultDma @ 0x140527B7C (IommupHvUnblockDefaultDma.c)
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 *     HalpIommuInitInterrupts @ 0x140A55474 (HalpIommuInitInterrupts.c)
 *     HalpIommuInitDiscard @ 0x140AF9238 (HalpIommuInitDiscard.c)
 */

__int64 __fastcall HalpIommuInitSystem(int a1, __int64 a2, __int64 a3)
{
  int inited; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int RootIommuFaultPolicy; // eax

  if ( !a1 || HalIommuDispatch && (*(unsigned __int8 (**)(void))HalIommuDispatch)() )
  {
    inited = 0;
    if ( !a1 )
    {
      qword_140C4BCE8 = (__int64)&HalpIommuList;
      HalpIommuList = (__int64)&HalpIommuList;
      qword_140C4BCC8 = (__int64)&HalpIommuExceptionList;
      HalpIommuExceptionList = (__int64)&HalpIommuExceptionList;
      off_140C01F00[0] = (__int64 (__fastcall *)())HalpIommuRegisterDispatchTable;
      RootIommuFaultPolicy = HalpIommuGetRootIommuFaultPolicy(a3);
      if ( RootIommuFaultPolicy > 1 )
        RootIommuFaultPolicy = 0;
      HalpIommuRootIommuFaultPolicy = RootIommuFaultPolicy;
      qword_140C02080 = (__int64)HalpIommuReportIommuFault;
      return (unsigned int)inited;
    }
    if ( a1 == 19 )
    {
      return (unsigned int)HalpIommuInitInterrupts();
    }
    else if ( a1 == 8 )
    {
      inited = HalpIommuInitDiscard();
      if ( inited < 0 )
        return (unsigned int)inited;
      return (unsigned int)HalpIommuInitializeDmaGuardPolicy(a3);
    }
    else if ( a1 == 10 )
    {
      IommuRemappingPolicy = HalpInterruptIsRemappingRequired() != 0;
      inited = HalpIommuProcessReservations(a3);
      if ( inited < 0 )
        return (unsigned int)inited;
      return (unsigned int)HalpIommuInitializeAll(0, a3, v8, v9);
    }
    else
    {
      if ( a1 != 17 )
      {
        if ( a1 == 32 )
          HalpIommuLogEarlyFault();
        return (unsigned int)inited;
      }
      inited = IommuInitializeLibrary();
      if ( inited < 0 )
        return (unsigned int)inited;
      inited = HalpIommuInitializeDmar();
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 240) + 2648LL) & 4) != 0 )
      {
        if ( HalpHvIommu )
        {
          if ( HalpHvIommuDeviceDomain )
          {
            if ( !HalpDmaGuardEnabled )
            {
              inited = IommupHvUnblockDefaultDma();
              if ( inited < 0 )
                return (unsigned int)inited;
            }
          }
        }
      }
      off_140C02010[0] = (__int64 (__fastcall *)())HalpIommuBlockDevice;
      off_140C02018[0] = (__int64 (__fastcall *)())HalpIommuUnblockDevice;
      off_140C02020[0] = (__int64 (__fastcall *)())HalpGetIommuInterface;
      off_140C02088[0] = (__int64 (__fastcall *)())HalpIommuDmaRemappingCapable;
      off_140C020A0[0] = (__int64 (__fastcall *)())HalpGetIommuInterfaceEx;
      off_140C020A8[0] = (__int64 (__fastcall *)())HalpNotifyIommuDomainPolicyChange;
      inited = HalpIommuInitInterrupts();
      if ( inited < 0 )
        return (unsigned int)inited;
      HalpIommuEnableInterrupts();
      if ( !HalpHvIommu )
        return (unsigned int)inited;
      return (unsigned int)IommupHvSetRootFaultReportingReady();
    }
  }
  if ( a1 == 8 && !(*(unsigned __int8 (**)(void))HalIommuDispatch)() )
    HalpIommuX2ApicSupport = 0;
  return 0LL;
}
