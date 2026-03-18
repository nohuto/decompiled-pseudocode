/*
 * XREFs of KeRundownSecureProcess @ 0x14056C694
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140932B54 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
