/*
 * XREFs of KseHookExAllocatePoolWithTag @ 0x140527220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)((__int64 (*)(void))qword_140C04A98)();
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
