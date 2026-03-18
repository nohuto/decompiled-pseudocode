/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00BE048
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C009DBAC (IcAddSecondaryIcInstance.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00A1684 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IcAddGicInstance @ 0x1C00B70AC (IcAddGicInstance.c)
 *     IrqPolicyConfigure @ 0x1C00BDD74 (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00BDE10 (IrqPolicyUpdatePolicy.c)
 *     IrqArbUpdateInterruptLimit @ 0x1C00BE118 (IrqArbUpdateInterruptLimit.c)
 *     IrqLibpParseMadt @ 0x1C00BE180 (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1C00BE360 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C007E130);
  IrqLibRealInterruptModel = a1;
  if ( (unsigned int)(a1 - 2) <= 2 )
  {
    IrqLibInterruptModel = 1;
  }
  else
  {
    IrqLibInterruptModel = a1;
    if ( a1 != 1 )
      return 3221225485LL;
  }
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt(a2);
            result = IcAddGicInstance(0);
            goto LABEL_7;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt(a2);
LABEL_7:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy(v5);
        if ( (int)result >= 0 )
        {
          IrqArbUpdateInterruptLimit();
          IcAddSecondaryIcInstance();
          HalPrivateDispatchTable[22] = IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
