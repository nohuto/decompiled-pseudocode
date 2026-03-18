/*
 * XREFs of ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEPAXXZ @ 0x97DEE (-Allocate@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ @ 0xA8E6E (-Allocate@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Create@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@XZ @ 0xE99C6 (-Create@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ @ 0x183EDD (-Allocate@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Create@?$CSectionEntry@$0EAAA@$0DI@@NSInstrumentation@@SGPAV12@XZ @ 0x1840D5 (-Create@-$CSectionEntry@$0EAAA@$0DI@@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ @ 0x1A25E7 (-Allocate@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Create@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ @ 0x1A2860 (-Create@-$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?Create@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@XZ @ 0x208CCB (-Create@-$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@XZ.c)
 * Callees:
 *     ?Uninitialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ @ 0x1543E9 (-Uninitialize@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ.c)
 */

NTSTATUS __thiscall NSInstrumentation::CSectionEntry<20480,80>::~CSectionEntry<20480,80>(_DWORD *this)
{
  void *v2; // edi
  NTSTATUS result; // eax
  void *v4; // ecx

  v2 = (void *)this[4];
  if ( v2 )
  {
    NSInstrumentation::CSectionBitmapAllocator<217088,840>::Uninitialize(this[4]);
    ExFreePoolWithTag(v2, 0);
    this[4] = 0;
  }
  result = this[3];
  if ( result )
  {
    result = MmUnmapViewInSessionSpace((PVOID)this[3]);
    this[3] = 0;
  }
  v4 = (void *)this[2];
  if ( v4 )
  {
    result = ObfDereferenceObject(v4);
    this[2] = 0;
  }
  return result;
}
