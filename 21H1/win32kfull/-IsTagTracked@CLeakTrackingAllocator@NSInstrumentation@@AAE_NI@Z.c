/*
 * XREFs of ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z @ 0xE62FE
 * Callers:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z @ 0xE6274 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___ @ 0x249775 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___ @ 0x24985A (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c835e4d541cfe63f9322918de68711.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249A1A (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // eax

  if ( (a2 & *((_DWORD *)this + 10)) != a2 )
    return 0;
  v3 = *((_DWORD *)this + 11);
  v4 = 0;
  if ( !v3 )
    return 0;
  while ( *((_DWORD *)this + v4) != a2 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  return 1;
}
