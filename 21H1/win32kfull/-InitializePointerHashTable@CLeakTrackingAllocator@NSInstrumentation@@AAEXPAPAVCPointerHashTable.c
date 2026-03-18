/*
 * XREFs of ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable@2@_N@Z @ 0x249E79
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z @ 0xD3A64 (-Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z @ 0xE5FF2 (-Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::CPointerHashTable **a2,
        bool a3)
{
  struct NSInstrumentation::CPointerHashTable *v3; // eax

  v3 = NSInstrumentation::CPointerHashTable::Create(1);
  if ( v3 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)a2, (signed __int32)v3, 0) )
      NSInstrumentation::CPointerHashTable::Destroy(v3);
  }
}
