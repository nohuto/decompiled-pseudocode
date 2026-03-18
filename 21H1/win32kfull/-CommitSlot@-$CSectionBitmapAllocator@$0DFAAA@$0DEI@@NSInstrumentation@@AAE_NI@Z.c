/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NI@Z @ 0xA900E
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEPAXXZ @ 0xA8F58 (-Allocate@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEPAXXZ.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

char __thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::CommitSlot(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // ecx
  void *v5; // edi

  v3 = this[5];
  if ( a2 >> 2 < v3 || v3 >= 0x35 )
    return 1;
  v5 = (void *)((a2 >> 2 << 12) + (this[1] ^ this[2]));
  if ( (int)MmCommitSessionMappedView(v5, 4096) >= 0 )
  {
    memset(v5, 0, 0x1000u);
    ++this[5];
    return 1;
  }
  return 0;
}
