/*
 * XREFs of PopFxEnforceDirectedPowerTransition @ 0x14056567C
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1405650AC (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140577708 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140885A40 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x1408DDA9C (PopCheckTestsigningEnabled.c)
 *     PopDirectedDripsUmIsTestModeEnabled @ 0x1408F53C8 (PopDirectedDripsUmIsTestModeEnabled.c)
 */

__int64 __fastcall PopFxEnforceDirectedPowerTransition(
        ULONG_PTR BugCheckParameter2,
        int a2,
        char a3,
        unsigned __int8 a4)
{
  __int64 result; // rax
  ULONG_PTR v6; // rsi
  int v9; // edi
  char v10; // r9

  result = *(unsigned int *)(BugCheckParameter2 + 824);
  v6 = a4;
  if ( (result & 1) == 0 )
  {
    if ( a2 < 0 )
      result = PopDirectedDripsDiagTraceDfxPowerStateFailure();
    if ( PopDirectedDripsDfxEnforcementPolicy && a2 < 0 )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        NT_ASSERT(
          "*** DFX Transition Failure
    This break point indicates that a device has failed its
    Directed Power tran"
          "sition callback.
");
      v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 760LL) & 0x40;
      if ( !(_BYTE)v6 && !a3
        || (result = PopDirectedDripsUmIsTestModeEnabled(), !(_BYTE)result)
        && !v10
        && (ViVerifierEnabled || (result = PopCheckTestsigningEnabled(), (_BYTE)result))
        || PopDirectedDripsDfxEnforcementPolicy == 2 )
      {
        KeBugCheckEx(0x9Fu, 6uLL, BugCheckParameter2, v6, 0LL);
      }
      if ( !v9 )
        return DbgkWerCaptureLiveKernelDump(L"DirectedFxPowerStateFailure", 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
