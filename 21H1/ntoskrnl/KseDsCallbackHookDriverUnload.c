/*
 * XREFs of KseDsCallbackHookDriverUnload @ 0x1405218C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KsepDsEventDriverUnload @ 0x140522510 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsCallbackHookDriverUnload(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (**)(void))qword_140C031C8)();
  (*(void (__fastcall **)(__int64))(v2 + 16))(a1);
  return KsepDsEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
