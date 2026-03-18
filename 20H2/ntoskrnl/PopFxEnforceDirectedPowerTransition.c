/*
 * XREFs of PopFxEnforceDirectedPowerTransition @ 0x14056907C
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x140568A8C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     Feature_Servicing_2206c_38536160__private_IsEnabled @ 0x1403F6778 (Feature_Servicing_2206c_38536160__private_IsEnabled.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14057B138 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x1408E38DC (PopCheckTestsigningEnabled.c)
 *     PopDirectedDripsUmIsTestModeEnabled @ 0x1408FAFD8 (PopDirectedDripsUmIsTestModeEnabled.c)
 */

__int64 __fastcall PopFxEnforceDirectedPowerTransition(
        ULONG_PTR BugCheckParameter2,
        int a2,
        char a3,
        unsigned __int8 a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // rbp
  bool v9; // bl
  int v10; // esi

  result = *(unsigned int *)(BugCheckParameter2 + 824);
  v5 = a4;
  if ( (result & 1) == 0 )
  {
    if ( a2 < 0 )
      result = PopDirectedDripsDiagTraceDfxPowerStateFailure();
    if ( PopDirectedDripsDfxEnforcementPolicy && a2 < 0 )
    {
      v9 = 0;
      if ( (_BYTE)KdDebuggerEnabled )
        v9 = (_BYTE)KdDebuggerNotPresent == 0;
      if ( (unsigned int)Feature_Servicing_2206c_38536160__private_IsEnabled() )
      {
        if ( v9 && PopDirectedDripsDfxEnforcementPolicy == 3 )
          NT_ASSERT(
            "*** DFX Transition Failure
    This break point indicates that a device has failed its
    Directed Power tr"
            "ansition callback.
");
      }
      else if ( v9 )
      {
        NT_ASSERT(
          "*** DFX Transition Failure
    This break point indicates that a device has failed its
    Directed Power tran"
          "sition callback.
");
      }
      v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 760LL) & 0x40;
      result = Feature_Servicing_2206c_38536160__private_IsEnabled();
      if ( !(_DWORD)result
        && (!(_BYTE)v5 && !a3
         || (result = PopDirectedDripsUmIsTestModeEnabled(), !(_BYTE)result)
         && !v9
         && (ViVerifierEnabled || (result = PopCheckTestsigningEnabled(), (_BYTE)result)))
        || PopDirectedDripsDfxEnforcementPolicy == 2 )
      {
        KeBugCheckEx(0x9Fu, 6uLL, BugCheckParameter2, v5, 0LL);
      }
      if ( !v10 )
        return DbgkWerCaptureLiveKernelDump(L"DirectedFxPowerStateFailure", 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
