/*
 * XREFs of ExpLicenseWatchInitWorker @ 0x140A43344
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiSwInterruptPresent @ 0x140A433F0 (KiSwInterruptPresent.c)
 */

__int64 ExpLicenseWatchInitWorker()
{
  __int64 v0; // rax
  __int64 v1; // rsi
  __int64 (__fastcall *v2)(__int64); // rbp
  char v3; // bl
  char v4; // di
  char v5; // bl
  unsigned __int64 v6; // r8
  __int64 result; // rax

  _mm_lfence();
  v0 = KiProcessorBlock[0];
  v1 = *(_QWORD *)(KiProcessorBlock[0] + 120);
  v2 = *(__int64 (__fastcall **)(__int64))(KiProcessorBlock[0] + 112);
  *(_QWORD *)(KiProcessorBlock[0] + 120) = 0LL;
  *(_QWORD *)(v0 + 112) = 0LL;
  v3 = MEMORY[0xFFFFF780000002D4] >> 1;
  v4 = MEMORY[0xFFFFF780000002D4] >> 1;
  v5 = (InitSafeBootMode != 0) & ((int)KiSwInterruptPresent() < 0) | v3;
  v6 = __rdtsc() >> 3;
  result = 100 * ((unsigned int)v6 / 0x64);
  if ( (unsigned int)v6 % 0x64 > 3 )
    v5 = v4 | 1;
  if ( !v5 )
  {
    result = v2(v1);
    if ( (_DWORD)result != 1 )
      KeBugCheckEx(0x9Au, 0x42424242uLL, 0xC000026AuLL, 0LL, 0LL);
  }
  return result;
}
