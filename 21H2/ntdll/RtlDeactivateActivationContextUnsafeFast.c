/*
 * XREFs of RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     LdrShutdownProcess @ 0x18005EFD0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006BA04 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D154 (LdrpInitializeNode.c)
 *     RtlpTpWorkCallback @ 0x180070B90 (RtlpTpWorkCallback.c)
 *     LdrpQuerySxSMUIFile @ 0x1800775AC (LdrpQuerySxSMUIFile.c)
 *     RtlDispatchAPC @ 0x18007FB40 (RtlDispatchAPC.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 * Callees:
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

void __fastcall RtlDeactivateActivationContextUnsafeFast(__int64 a1)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdi
  unsigned __int64 ActiveFrame; // rdx
  unsigned __int64 v4; // rcx
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME **v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v8; // r12
  unsigned int v9; // r15d
  EXCEPTION_RECORD ExceptionRecord; // [rsp+38h] [rbp-79h] BYREF
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v4 = *(unsigned int *)(a1 + 32);
  if ( (v4 & 0x40) != 0 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365551;
    ExceptionRecord.ExceptionFlags = 0;
LABEL_26:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  if ( (v4 & 0x20) == 0 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365552;
LABEL_25:
    ExceptionRecord.ExceptionFlags = 1;
    goto LABEL_26;
  }
  if ( (v4 & 0x60) != 0x20 )
  {
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
LABEL_29:
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[3] = v4;
LABEL_32:
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_25;
  }
  if ( *(_QWORD *)a1 >= 0x48uLL
    && (*(_QWORD *)(a1 + 40) != ~*(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 48) != ~*(_QWORD *)(a1 + 24)) )
  {
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    goto LABEL_29;
  }
  if ( ActiveFrame
    && ((*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20
     || (*(_BYTE *)(ActiveFrame + 16) & 8) == 0
     && *(_QWORD *)(ActiveFrame - 16) >= 0x48uLL
     && (*(_QWORD *)(ActiveFrame + 24) != ~*(_QWORD *)ActiveFrame
      || *(_QWORD *)(ActiveFrame + 32) != ~*(_QWORD *)(ActiveFrame + 8))) )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    v6 = *(unsigned int *)(ActiveFrame + 16);
LABEL_31:
    ExceptionRecord.ExceptionInformation[3] = v6;
    goto LABEL_32;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v5 = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME **)(a1 + 16);
    if ( ActiveFrame != a1 + 16 )
    {
      v7 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      v8 = *v5;
      v9 = 0;
      DbgPrintEx(
        0x33u,
        2u,
        "SXS: %s() Active frame is not the frame being deactivated %p != %p\n",
        "RtlDeactivateActivationContextUnsafeFast",
        ActivationContextStackPointer->ActiveFrame,
        (const void *)(a1 + 16));
      while ( v7 && (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v7 != v8 )
      {
        if ( (*(_DWORD *)(v7 + 16) & 0x70) != 0x20
          || (*(_BYTE *)(v7 + 16) & 8) == 0
          && (*(_QWORD *)(v7 + 24) != ~*(_QWORD *)v7 || *(_QWORD *)(v7 + 32) != ~*(_QWORD *)(v7 + 8)) )
        {
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
          ExceptionRecord.ExceptionInformation[1] = v7;
          ExceptionRecord.ExceptionInformation[2] = a1 + 16;
          v6 = *(unsigned int *)(v7 + 16);
          goto LABEL_31;
        }
        v7 = *(_QWORD *)v7;
        ++v9;
      }
      ExceptionRecord.ExceptionInformation[0] = v9;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 3;
      ExceptionRecord.ExceptionInformation[1] = a1 + 16;
      ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      if ( v7 )
      {
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionCode = v9 != 0 ? -1072365553 : -1072365551;
      }
      else
      {
        ExceptionRecord.ExceptionCode = -1072365552;
        ExceptionRecord.ExceptionFlags = 1;
      }
      RtlRaiseException(&ExceptionRecord);
    }
    ActivationContextStackPointer->ActiveFrame = *v5;
  }
  *(_DWORD *)(a1 + 32) |= 0x40u;
  if ( *(_QWORD *)a1 >= 0x48uLL )
    *(_QWORD *)(a1 + 64) = retaddr;
}
