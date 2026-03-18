/*
 * XREFs of ?Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z @ 0xD3A64
 * Callers:
 *     ?Uninitialize@UmfdAllocation@@SGXXZ @ 0xD3A3C (-Uninitialize@UmfdAllocation@@SGXXZ.c)
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ @ 0xD42E8 (--1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z @ 0xE5FF2 (-Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable@2@_N@Z @ 0x249E79 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CPointerHashTable::Destroy(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this[5];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(this, 0);
}
