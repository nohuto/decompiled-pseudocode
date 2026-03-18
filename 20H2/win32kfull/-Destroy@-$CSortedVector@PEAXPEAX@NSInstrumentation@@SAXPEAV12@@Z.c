/*
 * XREFs of ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02DC4C0
 * Callers:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C012B1B4 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C02DC834 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV-$CSortedVector@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSortedVector<void *,void *>::Destroy(PVOID *P)
{
  ExFreePoolWithTag(P[6], 0);
  ExFreePoolWithTag(P, 0);
}
