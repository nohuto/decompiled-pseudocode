/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140A905FC
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140A4D550 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeCreateEnclaveMetadataPage @ 0x14050F82C (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x140544BB8 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140545900 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rdi
  _DWORD *Pool; // rax
  _QWORD *v2; // rsi
  _DWORD *v3; // rax
  __int64 EnclavePage; // rax
  __int64 v5; // r9
  ULONG_PTR v6; // rbp
  unsigned __int64 ValidPte; // rbx
  int v8; // r14d
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9

  v0 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  if ( !v0 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x50uLL, 0x4D424D45u);
  v2 = Pool;
  if ( Pool )
  {
    *Pool = 512;
    v3 = Pool + 4;
    v2[1] = v3;
    *v3 |= 1u;
    EnclavePage = MiGetEnclavePage(&MiSystemPartition, 0);
    v6 = EnclavePage;
    if ( EnclavePage == -1 )
    {
LABEL_16:
      ExFreePoolWithTag(v2, 0);
      if ( v6 != -1LL )
        MiReturnEnclavePage(v6, v11, v12, v13);
      goto LABEL_18;
    }
    ValidPte = MiMakeValidPte(v0, EnclavePage, 3221225476LL, v5);
    v8 = 0;
    if ( MiPteInShadowRange(v0) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_12;
        v9 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v9 = (ValidPte & 1) == 0;
      }
      if ( !v9 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v0 = ValidPte;
    if ( v8 )
      MiWritePteShadow(v0, ValidPte);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C4EDD8 = 0LL;
      result = 1LL;
      qword_140C4EDC8 = (__int64)(v0 << 25) >> 16;
      qword_140C4EDD0 = (__int64)v2;
      dword_140C4EDE0 = 0;
      return result;
    }
    goto LABEL_16;
  }
LABEL_18:
  MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v0, 1u);
  return 0LL;
}
