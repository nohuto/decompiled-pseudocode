/*
 * XREFs of McGenEventTracingUnregister2 @ 0x1800EE154
 * Callers:
 *     AutoUnregisterMicrosoft_Windows_Deplorch @ 0x1800EDDD0 (AutoUnregisterMicrosoft_Windows_Deplorch.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 McGenEventTracingUnregister2()
{
  ULONG v0; // ebx

  if ( !McGenTracingSupportInit || !Microsoft_Windows_Deplorch_Context )
    return 0LL;
  if ( McGenPreVista )
  {
    v0 = UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
    dword_1805C47E0 = 0;
    byte_1805C47E8 = 0;
    qword_1805C47C8 = 0LL;
    if ( word_1805C47EA )
      memset_0(off_1805C47F0, 0, 4LL * (((unsigned __int16)word_1805C47EA - 1) / 32 + 1));
  }
  else
  {
    v0 = ((__int64 (*)(void))PfnEventUnregister)();
  }
  Microsoft_Windows_Deplorch_Context = 0LL;
  return v0;
}
