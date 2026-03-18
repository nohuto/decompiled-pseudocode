/*
 * XREFs of KseDsHookExFreePool @ 0x14057E0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x14057EDEC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C06F48)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
