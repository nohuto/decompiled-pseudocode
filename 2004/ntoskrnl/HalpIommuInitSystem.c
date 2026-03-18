/*
 * XREFs of HalpIommuInitSystem @ 0x14099B5B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuGetRootIommuFaultPolicy @ 0x140360F6C (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpInterruptIsRemappingRequired @ 0x140376C1C (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403ACE88 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalpIommuProcessReservations @ 0x1403B0008 (HalpIommuProcessReservations.c)
 *     HalpIommuEnableInterrupts @ 0x1403B004C (HalpIommuEnableInterrupts.c)
 *     HalpIommuInitializeDmar @ 0x1403B0088 (HalpIommuInitializeDmar.c)
 *     IommuInitializeLibrary @ 0x1403B0188 (IommuInitializeLibrary.c)
 *     HalpIommuLogEarlyFault @ 0x1403B01C8 (HalpIommuLogEarlyFault.c)
 *     IommupHvSetRootFaultReportingReady @ 0x1403ECE78 (IommupHvSetRootFaultReportingReady.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalpInterruptSetX2ApicPolicy @ 0x1404B79F8 (HalpInterruptSetX2ApicPolicy.c)
 *     HalpIommuInitializeAll @ 0x140997E14 (HalpIommuInitializeAll.c)
 *     HalpIommuInitInterrupts @ 0x14099B798 (HalpIommuInitInterrupts.c)
 *     HalpIommuInitDiscard @ 0x140A3FDF8 (HalpIommuInitDiscard.c)
 */

__int64 __fastcall HalpIommuInitSystem(int a1, __int64 a2, __int64 a3)
{
  int inited; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int RootIommuFaultPolicy; // eax

  if ( !a1 || HalIommuDispatch && (*(unsigned __int8 (**)(void))HalIommuDispatch)() )
  {
    inited = 0;
    if ( !a1 )
    {
      qword_140C49C18 = (__int64)&HalpIommuList;
      HalpIommuList = (__int64)&HalpIommuList;
      qword_140C49BF8 = (__int64)&HalpIommuExceptionList;
      HalpIommuExceptionList = (__int64)&HalpIommuExceptionList;
      off_140C008B0[0] = (__int64 (__fastcall *)())HalpIommuRegisterDispatchTable;
      RootIommuFaultPolicy = HalpIommuGetRootIommuFaultPolicy(a3);
      if ( RootIommuFaultPolicy > 1 )
        RootIommuFaultPolicy = 0;
      HalpIommuRootIommuFaultPolicy = RootIommuFaultPolicy;
      qword_140C00A30 = (__int64)HalpIommuReportIommuFault;
      return (unsigned int)inited;
    }
    if ( a1 == 8 )
    {
      inited = HalpIommuInitDiscard(a3);
      if ( inited >= 0 )
        return (unsigned int)HalpIommuInitializeDmaGuardPolicy(a3);
    }
    else
    {
      if ( a1 != 10 )
      {
        if ( a1 == 17 )
        {
          inited = IommuInitializeLibrary();
          if ( inited < 0 )
            return (unsigned int)inited;
          inited = HalpIommuInitializeDmar(v9, v8);
          if ( inited < 0 )
            return (unsigned int)inited;
          off_140C009C0[0] = (__int64 (__fastcall *)())HalpIommuBlockDevice;
          off_140C009C8[0] = (__int64 (__fastcall *)())HalpIommuUnblockDevice;
          off_140C009D0[0] = (__int64 (__fastcall *)())HalpGetIommuInterface;
          off_140C00A38[0] = (__int64 (__fastcall *)())HalpIommuDmaRemappingCapable;
          inited = HalpIommuInitInterrupts();
          if ( inited < 0 )
            return (unsigned int)inited;
          HalpIommuEnableInterrupts();
          if ( !HalpHvIommu )
            return (unsigned int)inited;
          return (unsigned int)IommupHvSetRootFaultReportingReady();
        }
        else
        {
          if ( a1 != 19 )
          {
            if ( a1 == 32 )
              HalpIommuLogEarlyFault();
            return (unsigned int)inited;
          }
          return (unsigned int)HalpIommuInitInterrupts();
        }
      }
      IommuRemappingPolicy = HalpInterruptIsRemappingRequired() != 0;
      inited = HalpIommuProcessReservations(a3);
      if ( inited >= 0 )
        return (unsigned int)HalpIommuInitializeAll(0, a3, v10);
    }
    return (unsigned int)inited;
  }
  if ( a1 == 8 && !(*(unsigned __int8 (**)(void))HalIommuDispatch)() )
    HalpInterruptSetX2ApicPolicy(0);
  return 0LL;
}
