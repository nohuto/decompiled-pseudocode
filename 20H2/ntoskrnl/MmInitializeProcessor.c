/*
 * XREFs of MmInitializeProcessor @ 0x1409A1E3C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiCreateUltraThreadContext @ 0x140333FE4 (MiCreateUltraThreadContext.c)
 *     MmDeleteProcessor @ 0x14052C4D0 (MmDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  ULONG_PTR v2; // rax
  char *Pool; // rax
  void *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 34224) = -1LL;
  v2 = MiReservePtes((__int64)&qword_140C4EDC0, 0x40u);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 33280) = (__int64)(v2 << 25) >> 16;
    *(_DWORD *)(a1 + 32540) = dword_140C4DD78;
    Pool = (char *)MiAllocatePool(64, 0x30C8uLL, 0x20206D4Du);
    v4 = Pool;
    if ( Pool )
    {
      *((_DWORD *)Pool + 3120) = 0;
      *(_QWORD *)Pool = Pool + 32;
      *((_QWORD *)Pool + 1) = Pool + 4152;
      *((_QWORD *)Pool + 2) = Pool + 8248;
      *((_DWORD *)Pool + 6) = 512;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
      v6 = qword_140C50C10 + 4544 * v5;
      *(_DWORD *)(a1 + 32532) = *(unsigned __int8 *)(v6 + 4212);
      *(_DWORD *)(a1 + 32536) = *(_DWORD *)(v6 + 4208);
      v7 = __rdtsc();
      if ( (unsigned int)MiCreateUltraThreadContext(
                           (__int64)v4 + 12352,
                           ((_DWORD)v5 << byte_140C4DD0C) | (unsigned int)(v7 & (unsigned __int16)((1 << byte_140C4DD0D)
                                                                                                 - 1)),
                           8) )
      {
        *(_QWORD *)(a1 + 32760) = v4;
        return 1LL;
      }
      ExFreePoolWithTag(v4, 0);
    }
    MmDeleteProcessor(a1);
  }
  return 0LL;
}
