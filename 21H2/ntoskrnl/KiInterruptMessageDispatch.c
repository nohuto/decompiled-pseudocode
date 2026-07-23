/*
 * XREFs of KiInterruptMessageDispatch @ 0x14022B910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiInterruptMessageDispatch(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 32))(a1, a2, *(unsigned int *)(a1 + 40));
}
