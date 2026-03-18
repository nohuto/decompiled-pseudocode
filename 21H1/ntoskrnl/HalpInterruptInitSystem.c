/*
 * XREFs of HalpInterruptInitSystem @ 0x140996F00
 * Callers:
 *     <none>
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     HalpInterruptInitializeGlobals @ 0x140323408 (HalpInterruptInitializeGlobals.c)
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 *     HalpInterruptEnableNmi @ 0x1403A024C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0480 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInitializeInterruptsPn @ 0x1403A5B60 (HalpInitializeInterruptsPn.c)
 *     HalpInterruptInitPowerManagement @ 0x1403B9AFC (HalpInterruptInitPowerManagement.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403C974C (HalpInitializeInterruptsBspLate.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpInterruptInitDiscard @ 0x140A6EB50 (HalpInterruptInitDiscard.c)
 *     HalpPreAllocateKInterrupts @ 0x140A6FA6C (HalpPreAllocateKInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = 0;
  if ( (int)a1 <= 16 )
  {
    if ( (_DWORD)a1 == 16 )
    {
      HalpInterruptRegistrationAllowed = 0;
    }
    else if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 4:
          HalpInitializeInterruptsPn(a1, a2, a3, a4);
          break;
        case 7:
          HalpInterruptInitializeGlobals();
          break;
        case 9:
          HalpInterruptInitDiscard(a3);
          break;
        case 0xB:
          _enable();
          break;
      }
    }
    else
    {
      off_140C00790[0] = (__int64 (__fastcall *)())HaliAddInterruptRemapping;
      off_140C00798[0] = (__int64 (__fastcall *)())HaliRemoveInterruptRemapping;
      off_140C007C8[0] = (__int64 (__fastcall *)())HalpInterruptGetIdentifiers;
      off_140C00808[0] = (__int64 (__fastcall *)())xHalQueryProcessorRestartEntryPoint;
      off_140C00868[0] = (__int64 (__fastcall *)())HalpInterruptSetDestination;
      off_140C00938[0] = (__int64 (__fastcall *)())HalpConnectThermalInterrupt;
      off_140C00978[0] = (__int64 (__fastcall *)())HalpPreprocessNmi;
    }
    return v4;
  }
  if ( (_DWORD)a1 == 19 )
    goto LABEL_17;
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 == 21 )
    {
      if ( HalpInterruptLastProblem && HalpInterruptLastProblem != 14 )
        KeBugCheckEx(
          0x5Cu,
          0x203uLL,
          *(int *)(HalpInterruptController + 216),
          HalpInterruptController,
          HalpInterruptLastProblem);
    }
    else if ( (_DWORD)a1 == 29 )
    {
      return (unsigned int)HalpInterruptInitPowerManagement();
    }
    return v4;
  }
  HalpPreAllocateKInterrupts();
  HalpInitializeInterruptsBspLate();
  result = HalSystemVectorDispatchEntry();
  v4 = result;
  if ( (int)result >= 0 )
  {
LABEL_17:
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpInterruptEnableNmi();
    if ( (HalpFeatureBits & 1) != 0 )
      HalpInterruptEnablePerformanceEvents(0LL);
    return v4;
  }
  return result;
}
