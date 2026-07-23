/*
 * XREFs of PoRegisterSystemState @ 0x14056F150
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140272668 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1402726BC (PopApplyLegacyPowerRequestFlags.c)
 *     PoSetSystemState @ 0x14056F230 (PoSetSystemState.c)
 *     PopDiagTraceRegisterSystemState @ 0x1405730FC (PopDiagTraceRegisterSystemState.c)
 *     PopCreateKernelPowerRequest @ 0x140772988 (PopCreateKernelPowerRequest.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rdi
  int v4; // r14d
  int v7; // eax
  int v8; // eax
  char LegacyPowerRequestFlags; // al
  char v10; // dl
  _DWORD *v12; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  P = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags <= 0 )
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v12 = StateHandle;
      v3 = StateHandle;
      if ( !StateHandle
        && ((v7 = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, &P), v2 = P, v7 < 0)
         || (v8 = PopCreateKernelPowerRequest(&v12, P), v3 = v12, v4 = v8, v8 < 0))
        || (LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(v3, Flags, 0LL),
            PopApplyLegacyPowerRequestFlags(v3, v10, LegacyPowerRequestFlags),
            v4 < 0) )
      {
        if ( v2 )
          PoDestroyReasonContext(v2);
      }
    }
    else
    {
      PoSetSystemState(Flags);
    }
  }
  return v3;
}
