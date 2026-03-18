/*
 * XREFs of ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ @ 0x249D67
 * Callers:
 *     _UninitializeWin32PoolTracking@0 @ 0xD4276 (_UninitializeWin32PoolTracking@0.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0xCFDC2 (-Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z.c)
 *     ?Enumerate@?$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x249D10 (-Enumerate@-$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::FreeAll(NSInstrumentation::CLeakTrackingAllocator *this)
{
  int v1; // esi
  NSInstrumentation::CPointerHashTable *v2; // ecx
  int v3; // ecx

  v1 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  v2 = *(NSInstrumentation::CPointerHashTable **)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 48);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v2,
      (void (__stdcall *)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      *((void **)&WPP_MAIN_CB.Queue.Wcb.1 + 3));
  v3 = *(_DWORD *)(v1 + 52);
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v3,
      (void (__stdcall *)(int, _DWORD, int))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      v1);
}
