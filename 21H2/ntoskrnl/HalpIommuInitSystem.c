/*
 * XREFs of HalpIommuInitSystem @ 0x14099C9D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuGetRootIommuFaultPolicy @ 0x14025227C (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpInterruptIsRemappingRequired @ 0x140378B8C (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403AA1B0 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalpIommuProcessReservations @ 0x1403AD338 (HalpIommuProcessReservations.c)
 *     HalpIommuEnableInterrupts @ 0x1403AD37C (HalpIommuEnableInterrupts.c)
 *     HalpIommuInitializeDmar @ 0x1403AD3B8 (HalpIommuInitializeDmar.c)
 *     IommuInitializeLibrary @ 0x1403AD4B8 (IommuInitializeLibrary.c)
 *     HalpIommuLogEarlyFault @ 0x1403AD4F8 (HalpIommuLogEarlyFault.c)
 *     IommupHvSetRootFaultReportingReady @ 0x1403F04B8 (IommupHvSetRootFaultReportingReady.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpInterruptSetX2ApicPolicy @ 0x1404BCB18 (HalpInterruptSetX2ApicPolicy.c)
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 *     HalpIommuInitInterrupts @ 0x14099CBB8 (HalpIommuInitInterrupts.c)
 *     HalpIommuInitDiscard @ 0x140A3AAE8 (HalpIommuInitDiscard.c)
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
      qword_140C49DF8 = (__int64)&HalpIommuList;
      HalpIommuList = (__int64)&HalpIommuList;
      qword_140C49DE8 = (__int64)&HalpIommuExceptionList;
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
