/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140A8FBEC
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140A53250 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeCreateEnclaveMetadataPage @ 0x14050FE7C (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x140545208 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140545F50 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializeEnclaveMetadataPage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v4; // rdi
  _DWORD *Pool; // rax
  _QWORD *v6; // rsi
  _DWORD *v7; // rax
  __int64 EnclavePage; // rax
  __int64 v9; // r9
  ULONG_PTR v10; // rbp
  unsigned __int64 ValidPte; // rbx
  int v12; // r14d
  __int64 v13; // r8
  bool v14; // zf
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9

  v4 = MiReservePtes((__int64)&qword_140C4ED40, 1u, a3, a4);
  if ( !v4 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x50uLL, 0x4D424D45u);
  v6 = Pool;
  if ( Pool )
  {
    *Pool = 512;
    v7 = Pool + 4;
    v6[1] = v7;
    *v7 |= 1u;
    EnclavePage = MiGetEnclavePage(&MiSystemPartition, 0);
    v10 = EnclavePage;
    if ( EnclavePage == -1 )
    {
LABEL_16:
      ExFreePoolWithTag(v6, 0);
      if ( v10 != -1LL )
        MiReturnEnclavePage(v10, v16, v17, v18);
      goto LABEL_18;
    }
    ValidPte = MiMakeValidPte(v4, EnclavePage, 3221225476LL, v9);
    v12 = 0;
    if ( MiPteInShadowRange(v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v12 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_12;
        v14 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v14 = (ValidPte & 1) == 0;
      }
      if ( !v14 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v4 = ValidPte;
    if ( v12 )
      MiWritePteShadow(v4, ValidPte, v13);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C4EC98 = 0LL;
      result = 1LL;
      qword_140C4EC88 = (__int64)(v4 << 25) >> 16;
      qword_140C4EC90 = (__int64)v6;
      dword_140C4ECA0 = 0;
      return result;
    }
    goto LABEL_16;
  }
LABEL_18:
  MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v4, 1u);
  return 0LL;
}
