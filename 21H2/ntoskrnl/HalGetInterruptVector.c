/*
 * XREFs of HalGetInterruptVector @ 0x140507CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetInterruptVector(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))off_140C01C90[0])(a1, a2);
}
