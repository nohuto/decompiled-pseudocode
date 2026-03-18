/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAE_NI@Z @ 0x97F82
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAEPAXXZ @ 0x97ED8 (-Allocate@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@QAEPAXXZ.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

char __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,80>::CommitSlot(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // ecx
  void *v5; // edi

  v3 = this[5];
  if ( v3 >= 5 || a2 / 0x33 < v3 )
    return 1;
  v5 = (void *)(((a2 / 0x33) << 12) + (this[1] ^ this[2]));
  if ( (int)MmCommitSessionMappedView(v5, 4096) >= 0 )
  {
    memset(v5, 0, 0x1000u);
    ++this[5];
    return 1;
  }
  return 0;
}
