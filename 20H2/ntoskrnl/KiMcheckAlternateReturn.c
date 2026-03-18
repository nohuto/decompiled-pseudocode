/*
 * XREFs of KiMcheckAlternateReturn @ 0x140524BA0
 * Callers:
 *     KxMcheckAlternateReturn @ 0x14040C940 (KxMcheckAlternateReturn.c)
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x14095FAD0 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x14095FC94 (WheaTerminateProcess.c)
 */

__int64 __fastcall KiMcheckAlternateReturn(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( (result & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    WheaAttemptPhysicalPageOffline(*((_QWORD *)a1 + 1) >> 12, 0LL, a3);
    result = *a1;
  }
  if ( (result & 8) != 0 )
    return WheaTerminateProcess();
  return result;
}
