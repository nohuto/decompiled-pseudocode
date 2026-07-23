/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x14020DE70
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140316290 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPage @ 0x14054FB44 (MiLockPage.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // al
  char v6; // dl
  __int64 v7; // rbx

  v3 = 48 * a2 - 0x58000000000LL;
  v4 = MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MiLockPage(v3);
  v6 = *(_BYTE *)(v3 + 34) & 0xF8 | 6;
  v7 = (*(_QWORD *)(v3 + 40) ^ (v4 >> 12)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v3 + 8) = a1;
  *(_QWORD *)(v3 + 40) ^= v7;
  *(_BYTE *)(v3 + 34) = v6;
  *(_QWORD *)v3 = 0LL;
  return MiUnlockPage(v3, v5);
}
