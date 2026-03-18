/*
 * XREFs of ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAV?$CSortedVector@PAXPAX@2@@Z @ 0x249EA7
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 * Callees:
 *     ?Create@?$CSortedVector@PAXPAX@NSInstrumentation@@SGPAV12@XZ @ 0x249C29 (-Create@-$CSortedVector@PAXPAX@NSInstrumentation@@SGPAV12@XZ.c)
 */

void __stdcall NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(volatile signed __int32 *a1)
{
  _DWORD *v1; // eax
  void *v2; // edi

  v1 = NSInstrumentation::CSortedVector<void *,void *>::Create();
  v2 = v1;
  if ( v1 )
  {
    if ( _InterlockedCompareExchange(a1, (signed __int32)v1, 0) )
    {
      ExFreePoolWithTag((PVOID)v1[7], 0);
      ExFreePoolWithTag(v2, 0);
    }
  }
}
