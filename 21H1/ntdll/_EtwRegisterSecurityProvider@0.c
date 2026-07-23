/*
 * XREFs of _EtwRegisterSecurityProvider@0 @ 0x4B380690
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

ULONG EtwRegisterSecurityProvider(void)
{
  ULONG v0; // esi
  NTSTATUS v1; // eax
  LONG v2; // eax
  ULONG ReturnLength; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v1 = ZwTraceControl(EtwRegisterSecurityProv, 0, 0, 0, 0, &ReturnLength);
  if ( v1 )
  {
    v2 = RtlNtStatusToDosError(v1);
    v0 = v2;
    if ( v2 )
      RtlSetLastWin32Error(v2);
  }
  return v0;
}
