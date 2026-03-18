/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x14057E0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x14057EDEC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C06F08)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
