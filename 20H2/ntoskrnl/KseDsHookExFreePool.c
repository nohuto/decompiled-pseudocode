/*
 * XREFs of KseDsHookExFreePool @ 0x140525D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x140526ABC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C04D88)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
