/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140A92754
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405152EC (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x14054A6D8 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14054B420 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v12; // r8
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9

  v4 = MiReservePtes((__int64)&qword_140C4EF40, 1u, a3, a4);
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
        MiReturnEnclavePage(v9, v15, v16, v17);
      goto LABEL_18;
    }
    ValidPte = MiMakeValidPte(v4, EnclavePage, -1073741820);
    v11 = 0;
    if ( MiPteInShadowRange(v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_12;
        v13 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v13 = (ValidPte & 1) == 0;
      }
      if ( !v13 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v4 = ValidPte;
    if ( v11 )
      MiWritePteShadow(v4, ValidPte, v12);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C4EE98 = 0LL;
      result = 1LL;
      qword_140C4EE88 = (__int64)(v4 << 25) >> 16;
      qword_140C4EE90 = (__int64)v6;
      dword_140C4EEA0 = 0;
      return result;
    }
    goto LABEL_16;
  }
LABEL_18:
  MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v4, 1u);
  return 0LL;
}
