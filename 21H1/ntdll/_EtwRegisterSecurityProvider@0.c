/*
 * XREFs of _EtwRegisterSecurityProvider@0 @ 0x4B380690
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

struct _TEB *__stdcall EtwRegisterSecurityProvider()
{
  struct _TEB *v0; // esi
  NTSTATUS v1; // eax
  struct _TEB *v2; // eax
  char v4[4]; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v1 = ZwTraceControl(24, 0, 0, 0, 0, (int)v4);
  if ( v1 )
  {
    v2 = (struct _TEB *)RtlNtStatusToDosError(v1);
    v0 = v2;
    if ( v2 )
      RtlSetLastWin32Error(v2);
  }
  return v0;
}
