/*
 * XREFs of KeRundownSecureProcess @ 0x14050E5AC
 * Callers:
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x14088D0DC (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
