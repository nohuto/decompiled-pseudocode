/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SGXPAV12@@Z @ 0xD42C2
 * Callers:
 *     _UninitializeWin32PoolTracking@0 @ 0xD4276 (_UninitializeWin32PoolTracking@0.c)
 * Callees:
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ @ 0xD42E8 (--1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ.c)
 */

void __cdecl NSInstrumentation::CLeakTrackingAllocator::Destroy()
{
  void *v0; // esi

  v0 = (void *)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  if ( *(_BYTE *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 60) )
  {
    NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(*((NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.1
                                                                       + 3));
    ExFreePoolWithTag(v0, 0);
  }
}
