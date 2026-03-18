/*
 * XREFs of MmInitializeProcessor @ 0x140A59E20
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x14025E060 (KeGetProcessorNodeNumber.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MmDeleteProcessor @ 0x14057F9FC (MmDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  ULONG_PTR v2; // rax
  __int64 ProcessorNodeNumber; // rbx
  _QWORD *PoolMm; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 35248) = -1LL;
  v2 = MiReservePtes((__int64)&qword_140C534C0, 0x40u);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 34176) = (__int64)(v2 << 25) >> 16;
    *(_DWORD *)(a1 + 33372) = dword_140C50738;
    ProcessorNodeNumber = (unsigned __int16)KeGetProcessorNodeNumber(a1);
    PoolMm = ExAllocatePoolMm(64LL, 0x30D0uLL, 0x6D50694Du, (unsigned int)ProcessorNodeNumber | 0x80000000);
    v5 = PoolMm;
    if ( PoolMm )
    {
      *((_DWORD *)PoolMm + 3120) = 0;
      *PoolMm = PoolMm + 4;
      *((_DWORD *)PoolMm + 6) = 512;
      PoolMm[1] = PoolMm + 519;
      PoolMm[2] = PoolMm + 1031;
      v6 = qword_140C54F90 + 24512 * ProcessorNodeNumber;
      *(_DWORD *)(a1 + 33364) = *(unsigned __int8 *)(v6 + 22716);
      *(_DWORD *)(a1 + 33368) = *(_DWORD *)(v6 + 22712);
      v7 = __rdtsc();
      if ( (unsigned int)MiCreateUltraThreadContext(
                           (__int64)(v5 + 1544),
                           ((_DWORD)ProcessorNodeNumber << byte_140C506CC) | (unsigned int)(v7 & (unsigned __int16)((1 << byte_140C506CD) - 1)),
                           8) )
      {
        result = 1LL;
        v5[1561] = *(_QWORD *)(120LL * (unsigned int)ProcessorNodeNumber + qword_140C506E0 + 112);
        *(_QWORD *)(a1 + 33592) = v5;
        return result;
      }
      ExFreePoolWithTag(v5, 0);
    }
    MmDeleteProcessor(a1);
  }
  return 0LL;
}
