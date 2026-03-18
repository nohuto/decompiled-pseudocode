/*
 * XREFs of HalInitSystem @ 0x1409986F0
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HalpInitSystemPhase1 @ 0x14099872C (HalpInitSystemPhase1.c)
 *     __security_init_cookie @ 0x140A182E8 (__security_init_cookie.c)
 *     HalpInitSystemPhase0 @ 0x140A710D8 (HalpInitSystemPhase0.c)
 */

__int64 __fastcall HalInitSystem(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
      KeBugCheckEx(0x5Cu, 0x8200uLL, 0xFFFFFFFFC000000DuLL, (unsigned int)BugCheckParameter3, 0LL);
    return HalpInitSystemPhase1(a2);
  }
  else
  {
    _security_init_cookie();
    return HalpInitSystemPhase0(a2);
  }
}
