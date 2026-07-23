/*
 * XREFs of HalGetInterruptVector @ 0x1404BB460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetInterruptVector(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))off_140C00640[0])(a1, a2);
}
