/*
 * XREFs of MmInitializeProcessor @ 0x1409A0640
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MmDeleteProcessor @ 0x14052E210 (MmDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v5; // rax
  char *Pool; // rax
  void *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rax

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 34224) = -1LL;
  v5 = MiReservePtes((__int64)&qword_140C4EF80, 0x40u, a3, a4);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 33280) = (__int64)(v5 << 25) >> 16;
    *(_DWORD *)(a1 + 32540) = dword_140C4DF38;
    Pool = (char *)MiAllocatePool(64, 0x30C8uLL, 0x20206D4Du);
    v7 = Pool;
    if ( Pool )
    {
      *((_DWORD *)Pool + 3120) = 0;
      *(_QWORD *)Pool = Pool + 32;
      *((_QWORD *)Pool + 1) = Pool + 4152;
      *((_QWORD *)Pool + 2) = Pool + 8248;
      *((_DWORD *)Pool + 6) = 512;
      v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
      v9 = qword_140C50DD0 + 4544 * v8;
      *(_DWORD *)(a1 + 32532) = *(unsigned __int8 *)(v9 + 4212);
      *(_DWORD *)(a1 + 32536) = *(_DWORD *)(v9 + 4208);
      v10 = __rdtsc();
      if ( (unsigned int)MiCreateUltraThreadContext(
                           (__int64)v7 + 12352,
                           ((_DWORD)v8 << byte_140C4DECC) | (unsigned int)(v10 & (unsigned __int16)((1 << byte_140C4DECD)
                                                                                                  - 1)),
                           8) )
      {
        *(_QWORD *)(a1 + 32760) = v7;
        return 1LL;
      }
      ExFreePoolWithTag(v7, 0);
    }
    MmDeleteProcessor(a1);
  }
  return 0LL;
}
