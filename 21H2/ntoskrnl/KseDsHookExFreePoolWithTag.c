/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x140527AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1405287DC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C04DB8)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
