/*
 * XREFs of ?Create@CLeakTrackingAllocator@NSInstrumentation@@SGPAV12@XZ @ 0xEBF68
 * Callers:
 *     _InitializeWin32PoolTracking@0 @ 0xEBEE8 (_InitializeWin32PoolTracking@0.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CLeakTrackingAllocator *__stdcall NSInstrumentation::CLeakTrackingAllocator::Create()
{
  struct NSInstrumentation::CLeakTrackingAllocator *result; // eax

  result = (struct NSInstrumentation::CLeakTrackingAllocator *)ExAllocatePoolWithTag(
                                                                 PagedPoolSession,
                                                                 0x40u,
                                                                 0x36497355u);
  if ( !result )
    return 0;
  *((_BYTE *)result + 60) = 1;
  *((_DWORD *)result + 10) = 0;
  *((_DWORD *)result + 11) = 0;
  *((_DWORD *)result + 12) = 0;
  *((_DWORD *)result + 13) = 0;
  *((_DWORD *)result + 14) = 0;
  return result;
}
