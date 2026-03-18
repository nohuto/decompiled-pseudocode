/*
 * XREFs of KseDsHookExFreePool @ 0x140521D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x140522A9C (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C04D78)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
