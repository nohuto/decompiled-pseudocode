/*
 * XREFs of KeRundownSecureProcess @ 0x140511EDC
 * Callers:
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140892C2C (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
