/*
 * XREFs of KseDsCallbackHookDriverStartIo @ 0x140527360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KsepDsEventDriverStartIo @ 0x140527F3C (KsepDsEventDriverStartIo.c)
 */

__int64 __fastcall KseDsCallbackHookDriverStartIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))qword_140C03248)(*(_QWORD *)(a1 + 8));
  (*(void (__fastcall **)(__int64, __int64))(v4 + 8))(a1, a2);
  return KsepDsEventDriverStartIo(*(_QWORD *)(a1 + 8), a1, a2);
}
