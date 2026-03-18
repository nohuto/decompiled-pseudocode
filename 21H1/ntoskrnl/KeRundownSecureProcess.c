/*
 * XREFs of KeRundownSecureProcess @ 0x14050DF5C
 * Callers:
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x14088BDBC (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
