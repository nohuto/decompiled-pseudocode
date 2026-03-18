/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C012B1B4
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C012B150 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01291A0 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02DC4C0 (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C02DD34C (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *a1)
{
  _QWORD *DeviceContext; // rbx
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi

  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 72) )
  {
    v2 = (_QWORD *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 6);
    if ( v2 )
      NSInstrumentation::CPointerHashTable::Destroy(v2);
    v3 = (void *)DeviceContext[7];
    if ( v3 )
      NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
    v4 = (void *)DeviceContext[8];
    if ( v4 )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(DeviceContext[8]);
      ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(DeviceContext, 0);
  }
}
