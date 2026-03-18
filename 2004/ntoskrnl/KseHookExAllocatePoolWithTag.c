/*
 * XREFs of KseHookExAllocatePoolWithTag @ 0x140521D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)((__int64 (*)(void))qword_140C04A28)();
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
