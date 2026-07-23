/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x14095ACB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  LONGLONG QuadPart; // r14
  __int64 (__fastcall *v8)(); // rax
  NTSTATUS v9; // ecx
  __int64 (__fastcall *v10)(); // rax
  LONGLONG v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)PerformanceOrAuxiliaryCounterValue & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&PerformanceOrAuxiliaryCounterValue[1] > 0x7FFFFFFF0000LL
      || &PerformanceOrAuxiliaryCounterValue[1] < PerformanceOrAuxiliaryCounterValue )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    QuadPart = PerformanceOrAuxiliaryCounterValue->QuadPart;
    v13[1] = PerformanceOrAuxiliaryCounterValue->QuadPart;
    ProbeForWrite(ConvertedValue, 8uLL, 4u);
    if ( ConversionError )
      ProbeForWrite(ConversionError, 8uLL, 4u);
    v8 = off_140C00928[0];
    if ( !ConvertAuxiliaryToPerformanceCounter )
      v8 = off_140C00920[0];
    v9 = ((__int64 (__fastcall *)(LONGLONG, LONGLONG *, _QWORD *))v8)(QuadPart, &v12, v13);
    if ( v9 >= 0 )
    {
      ConvertedValue->QuadPart = v12;
      if ( ConversionError )
        *ConversionError = (LARGE_INTEGER)v13[0];
    }
  }
  else
  {
    v10 = off_140C00928[0];
    if ( !ConvertAuxiliaryToPerformanceCounter )
      v10 = off_140C00920[0];
    return ((__int64 (__fastcall *)(LONGLONG, PLARGE_INTEGER, PLARGE_INTEGER))v10)(
             PerformanceOrAuxiliaryCounterValue->QuadPart,
             ConvertedValue,
             ConversionError);
  }
  return v9;
}
