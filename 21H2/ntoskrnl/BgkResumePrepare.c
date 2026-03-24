/*
 * XREFs of BgkResumePrepare @ 0x1409961D8
 * Callers:
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PopMarkComponentsBootPhase @ 0x1409991F0 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140388060 (PoSetHiberRange.c)
 *     BgGetContext @ 0x1409F1248 (BgGetContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F13F0 (BgkpUnlockBgfxCodeSection.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F3730 (BgkpLockBgfxCodeSection.c)
 *     BgMarkHiberPhase @ 0x1409F664C (BgMarkHiberPhase.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v7; // rdi
  void *v8; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( Context )
    {
      v5 = *(void **)(Context + 16);
      if ( v5 )
        PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
      qword_140C50648 = v4;
      return v1;
    }
    BgkpUnlockBgfxCodeSection();
    return (unsigned int)-1073741670;
  }
  v7 = qword_140C50648;
  if ( !qword_140C50648 )
    return (unsigned int)-1073741670;
  PoSetHiberRange(0LL, 0x10000u, qword_140C50648, *(unsigned int *)qword_140C50648, 0);
  v8 = (void *)v7[2];
  if ( v8 )
    PoSetHiberRange(0LL, 0x10000u, v8, *((unsigned int *)v7 + 6), 0);
  return (unsigned int)BgMarkHiberPhase();
}
