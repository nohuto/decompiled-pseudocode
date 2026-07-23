/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140A93754
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140A55ED8 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeCreateEnclaveMetadataPage @ 0x14051552C (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x14054A918 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14054B660 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializeEnclaveMetadataPage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v4; // rdi
  _DWORD *Pool; // rax
  _QWORD *v6; // rsi
  _DWORD *v7; // rax
  __int64 EnclavePage; // rax
  ULONG_PTR v9; // rbp
  unsigned __int64 ValidPte; // rbx
  int v11; // r14d
  bool v12; // zf
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9

  v4 = MiReservePtes((__int64)&qword_140C4EF80, 1u, a3, a4);
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
    v9 = EnclavePage;
    if ( EnclavePage == -1 )
    {
LABEL_16:
      ExFreePoolWithTag(v6, 0);
      if ( v9 != -1LL )
        MiReturnEnclavePage(v9, v14, v15, v16);
      goto LABEL_18;
    }
    ValidPte = MiMakeValidPte(v4, EnclavePage, -1073741820);
    v11 = 0;
    if ( MiPteInShadowRange(v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_12;
        v12 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v12 = (ValidPte & 1) == 0;
      }
      if ( !v12 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v4 = ValidPte;
    if ( v11 )
      MiWritePteShadow(v4, ValidPte);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C4EED8 = 0LL;
      result = 1LL;
      qword_140C4EEC8 = (__int64)(v4 << 25) >> 16;
      qword_140C4EED0 = (__int64)v6;
      dword_140C4EEE0 = 0;
      return result;
    }
    goto LABEL_16;
  }
LABEL_18:
  MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v4, 1u);
  return 0LL;
}
