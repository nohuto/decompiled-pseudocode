/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140B5229C
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140B08E90 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeCreateEnclaveMetadataPage @ 0x14056D55C (KeCreateEnclaveMetadataPage.c)
 *     MiAllocateEnclavePages @ 0x1405A828C (MiAllocateEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1405A9F00 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rdi
  unsigned __int64 v1; // rbp
  _DWORD *Pool; // rax
  _QWORD *v3; // rsi
  _DWORD *v4; // rax
  __int64 EnclavePages; // rax
  __int64 v6; // rbx
  unsigned __int64 ValidPte; // rbx
  int v8; // r14d
  __int64 result; // rax

  v0 = MiReservePtes((__int64)&qword_140C534C0, 1u);
  if ( !v0 )
    return 0LL;
  v1 = -1LL;
  Pool = MiAllocatePool(64, 0x50uLL, 0x4D424D45u);
  v3 = Pool;
  if ( Pool )
  {
    *Pool = 512;
    v4 = Pool + 4;
    v3[1] = v4;
    *v4 |= 1u;
    EnclavePages = MiAllocateEnclavePages(
                     (__int64)&MiSystemPartition,
                     *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192)
                                         + 138LL),
                     0,
                     1LL);
    v6 = EnclavePages;
    if ( !EnclavePages )
    {
LABEL_15:
      ExFreePoolWithTag(v3, 0);
      if ( v1 != -1LL )
        MiReturnEnclavePage(v1);
      goto LABEL_17;
    }
    MiSetPfnBlink(EnclavePages, 0LL, 0);
    v1 = 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
    ValidPte = MiMakeValidPte(v0, v1, -1073741820);
    v8 = 0;
    if ( MiPteInShadowRange(v0) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_11;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_11;
      }
      if ( (ValidPte & 1) != 0 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_11:
    *(_QWORD *)v0 = ValidPte;
    if ( v8 )
      MiWritePteShadow(v0, ValidPte);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C53400 = 0LL;
      result = 1LL;
      qword_140C533F0 = (__int64)(v0 << 25) >> 16;
      qword_140C533F8 = (__int64)v3;
      dword_140C53408 = 0;
      return result;
    }
    goto LABEL_15;
  }
LABEL_17:
  MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v0, 1u);
  return 0LL;
}
