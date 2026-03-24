/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1405278A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x14052859C (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C04DB8)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
