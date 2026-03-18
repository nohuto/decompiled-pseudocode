/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAE_NI@Z @ 0x184029
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAEPAXXZ @ 0x183E35 (-Allocate@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@QAEPAXXZ.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

char __thiscall NSInstrumentation::CSectionBitmapAllocator<16384,56>::CommitSlot(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // ecx
  void *v4; // edi

  v3 = this[5];
  if ( v3 < 4 && a2 / 0x49 >= v3 )
  {
    v4 = (void *)(((a2 / 0x49) << 12) + (this[1] ^ this[2]));
    if ( (int)MmCommitSessionMappedView(v4, 4096) < 0 )
      return 0;
    memset(v4, 0, 0x1000u);
    ++this[5];
  }
  return 1;
}
