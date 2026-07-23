/*
 * XREFs of KiIpiGenericCallTarget @ 0x1403A51F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiGenericCallTarget(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        volatile signed __int32 *a4)
{
  LARGE_INTEGER v7; // rax
  ULONG_PTR v8; // r9
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  _InterlockedDecrement(a4);
  while ( *a4 )
  {
    if ( !KiBarrierWait && (HvlEnlightenments & 0x20) == 0 )
    {
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v10, 0);
      v8 = MEMORY[0xFFFFF78000000350];
      if ( v7.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v10, 0);
        if ( *a4 )
          KeBugCheckEx(0x1DBu, PerformanceFrequency.QuadPart, v7.QuadPart, v8, 0LL);
      }
    }
    _mm_pause();
  }
  return a2(a3);
}
