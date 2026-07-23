/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140957720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  NTSTATUS result; // eax
  LONGLONG v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return off_140C00930[0]();
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(LONGLONG *))off_140C00930[0])(&v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v3;
  return result;
}
