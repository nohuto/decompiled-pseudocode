/*
 * XREFs of HalStopProfileInterrupt @ 0x1404B9270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalStopProfileInterrupt(__int64 a1)
{
  return (*((__int64 (__fastcall **)(__int64, _QWORD))HalpProfileInterface[0] + 2))(a1, 0LL);
}
