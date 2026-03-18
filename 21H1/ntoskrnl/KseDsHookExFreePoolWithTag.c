/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x140521DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x140522A9C (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C04D38)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
