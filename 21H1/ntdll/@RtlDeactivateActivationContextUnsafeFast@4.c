/*
 * XREFs of @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0
 * Callers:
 *     _RtlDispatchAPC@12 @ 0x4B2ABFD0 (_RtlDispatchAPC@12.c)
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

char __thiscall RtlDeactivateActivationContextUnsafeFast(int *this)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // edi
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // edx
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int Flags; // ebx
  int *v7; // ebx
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v8; // ecx
  unsigned int v9; // edx
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v11; // [esp+10h] [ebp-60h]
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v12; // [esp+14h] [ebp-5Ch]
  EXCEPTION_RECORD ExceptionRecord; // [esp+18h] [ebp-58h] BYREF
  int retaddr; // [esp+74h] [ebp+4h]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0;
  v4 = this[4];
  if ( (v4 & 0x40) != 0 )
  {
    ExceptionRecord.ExceptionRecord = 0;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0;
    ExceptionRecord.ExceptionInformation[1] = (unsigned int)(this + 2);
    ExceptionRecord.ExceptionInformation[2] = (unsigned int)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365551;
    ExceptionRecord.ExceptionFlags = 0;
    RtlRaiseException(&ExceptionRecord);
  }
  if ( (v4 & 0x20) == 0 )
  {
    ExceptionRecord.ExceptionRecord = 0;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0;
    ExceptionRecord.ExceptionInformation[1] = (unsigned int)(this + 2);
    ExceptionRecord.ExceptionInformation[2] = (unsigned int)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365552;
    goto LABEL_26;
  }
  LOBYTE(v5) = v4 & 0x60;
  if ( (v4 & 0x60) != 0x20 || (unsigned int)*this >= 0x24 && (this[5] != ~this[2] || (v5 = ~this[3], this[6] != v5)) )
  {
    ExceptionRecord.ExceptionRecord = 0;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned int)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = (unsigned int)ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = (unsigned int)(this + 2);
    ExceptionRecord.ExceptionInformation[3] = v4;
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_26;
  }
  if ( ActiveFrame )
  {
    Flags = ActiveFrame->Flags;
    LOBYTE(v5) = Flags & 0x70;
    if ( (Flags & 0x70) != 0x20
      || (Flags & 8) == 0
      && ActiveFrame[-1].ActivationContext >= (struct _ACTIVATION_CONTEXT *)0x24
      && (ActiveFrame[1].Previous != (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)~(int)ActiveFrame->Previous
       || (v5 = ~(int)ActiveFrame->ActivationContext,
           ActiveFrame[1].ActivationContext != (struct _ACTIVATION_CONTEXT *)v5)) )
    {
      ExceptionRecord.ExceptionRecord = 0;
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = (unsigned int)ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = (unsigned int)ActiveFrame;
      ExceptionRecord.ExceptionInformation[2] = (unsigned int)ActiveFrame;
      ExceptionRecord.ExceptionInformation[3] = ActiveFrame->Flags;
      ExceptionRecord.ExceptionCode = -1072365548;
      goto LABEL_26;
    }
  }
  if ( (v4 & 0x10) == 0 )
  {
    v7 = this + 2;
    if ( ActiveFrame != (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)(this + 2) )
    {
      v11 = ActivationContextStackPointer->ActiveFrame;
      v12 = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)*v7;
      DbgPrintEx(
        51,
        2u,
        (int)"SXS: %s() Active frame is not the frame being deactivated %p != %p\n",
        (int)"RtlDeactivateActivationContextUnsafeFast");
      v8 = v11;
      v9 = 0;
      if ( !v11 )
      {
LABEL_37:
        ExceptionRecord.ExceptionRecord = 0;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[0] = v9;
        ExceptionRecord.ExceptionInformation[1] = (unsigned int)(this + 2);
        ExceptionRecord.ExceptionInformation[2] = (unsigned int)ActivationContextStackPointer->ActiveFrame;
        if ( v8 )
        {
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionCode = 2 * (v9 == 0) - 1072365553;
        }
        else
        {
          ExceptionRecord.ExceptionCode = -1072365552;
          ExceptionRecord.ExceptionFlags = 1;
        }
        RtlRaiseException(&ExceptionRecord);
      }
      while ( 1 )
      {
        if ( v8 == v12 )
          goto LABEL_37;
        if ( (v8->Flags & 0x70) != 0x20
          || (v8->Flags & 8) == 0
          && (v8[1].Previous != (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)~(int)v8->Previous
           || v8[1].ActivationContext != (struct _ACTIVATION_CONTEXT *)~(int)v8->ActivationContext) )
        {
          break;
        }
        v8 = v8->Previous;
        ++v9;
        if ( !v8 )
          goto LABEL_37;
      }
      ExceptionRecord.ExceptionRecord = 0;
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = (unsigned int)ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = (unsigned int)v8;
      ExceptionRecord.ExceptionInformation[2] = (unsigned int)(this + 2);
      ExceptionRecord.ExceptionInformation[3] = v8->Flags;
      ExceptionRecord.ExceptionCode = -1072365548;
LABEL_26:
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
    }
    v5 = *v7;
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)*v7;
  }
  this[4] |= 0x40u;
  if ( (unsigned int)*this >= 0x24 )
  {
    LOBYTE(v5) = retaddr;
    this[8] = retaddr;
  }
  return v5;
}
