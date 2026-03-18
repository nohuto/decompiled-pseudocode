/*
 * XREFs of ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C02DDB30
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C0129100 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C010EB98 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02DDA50 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeAll(NSInstrumentation::CLeakTrackingAllocator *this)
{
  PDRIVER_CONTROL DeviceRoutine; // rbx
  NSInstrumentation::CPointerHashTable *v2; // rcx
  __int64 v3; // rcx

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  v2 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 6);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v2,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
  v3 = *((_QWORD *)DeviceRoutine + 7);
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v3,
      (void (__fastcall *)(__int64, _QWORD, __int64))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      (__int64)DeviceRoutine);
}
