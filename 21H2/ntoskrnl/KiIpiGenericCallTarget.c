/*
 * XREFs of KiIpiGenericCallTarget @ 0x1403B4A10
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiGenericCallTarget(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        volatile signed __int32 *a4)
{
  volatile signed __int32 *v4; // rbx
  LARGE_INTEGER v7; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = a4;
  v11 = 0;
  _InterlockedDecrement(a4);
  while ( *v4 )
  {
    if ( !KiBarrierWait && (HvlEnlightenments & 0x20) == 0 )
    {
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v9, 0);
      a4 = (volatile signed __int32 *)MEMORY[0xFFFFF78000000350];
      if ( v7.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v9, 0);
        if ( *v4 )
          KeBugCheckEx(0x1DBu, PerformanceFrequency.QuadPart, v7.QuadPart, (ULONG_PTR)a4, 0LL);
      }
    }
    KeYieldProcessorEx(&v11, (__int64)a2, a3, (__int64)a4);
  }
  return a2(a3);
}
