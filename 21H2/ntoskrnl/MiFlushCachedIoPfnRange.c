/*
 * XREFs of MiFlushCachedIoPfnRange @ 0x140398900
 * Callers:
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 * Callees:
 *     MiFlushCacheMdl @ 0x140398948 (MiFlushCacheMdl.c)
 */

__int64 __fastcall MiFlushCachedIoPfnRange(__int64 a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 << 12;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 8) = 8 * ((v2 >> 12) + 6);
  *(_WORD *)(a1 + 10) = 2;
  *(_QWORD *)(a1 + 40) = v2;
  ++dword_140C53198;
  return MiFlushCacheMdl();
}
