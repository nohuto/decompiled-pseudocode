/*
 * XREFs of ?Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0xCFDC2
 * Callers:
 *     ?RemoveAllAllocationsFromLookup@UmfdAllocation@@SGXXZ @ 0xCFD7E (-RemoveAllAllocationsFromLookup@UmfdAllocation@@SGXXZ.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z @ 0x249C82 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ @ 0x249D67 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CPointerHashTable::Enumerate(
        NSInstrumentation::CPointerHashTable *this,
        void (__stdcall *a2)(void *, void *, void *),
        void *a3)
{
  NSInstrumentation::CPointerHashTable *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int v7; // ecx
  void *v8; // edx

  v3 = this;
  v4 = *((_DWORD *)this + 8);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( v6 >= *((_DWORD *)v3 + 6) )
        break;
      v7 = *((_DWORD *)v3 + 5);
      v8 = *(void **)(v7 + 8 * v6);
      if ( v8 )
      {
        a2(v8, *(void **)(v7 + 8 * v6 + 4), a3);
        v3 = this;
        ++v5;
      }
      ++v6;
    }
    while ( v5 < v4 );
  }
}
