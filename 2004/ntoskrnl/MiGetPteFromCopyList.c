/*
 * XREFs of MiGetPteFromCopyList @ 0x1402B4DE0
 * Callers:
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

unsigned __int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rdx
  int v10; // r8d
  unsigned __int64 *v11; // rdi
  char v12; // dl
  unsigned __int64 ValidPte; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // dl
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  _KPROCESS *v27; // rdx
  _QWORD v28[24]; // [rsp+20h] [rbp-108h] BYREF

  memset(v28, 0, 0xB8uLL);
  v7 = 2;
  v8 = 1;
  if ( a3 == -1 )
    v7 = 1;
  v9 = *a1;
  if ( (int)v9 + v7 > a1[1] )
  {
    v25 = *a1;
    LODWORD(v28[1]) = 20;
    v26 = *((_QWORD *)a1 + 2) << 25;
    v28[3] = 0LL;
    MiInsertTbFlushEntry((__int64)v28, v26 >> 16, v25, 0);
    MiFlushTbList((__int64)v28, v27);
    v9 = 0LL;
  }
  v10 = 4;
  v11 = (unsigned __int64 *)(*((_QWORD *)a1 + 2) + 8 * v9);
  *a1 = v9 + v7;
  v12 = *(_BYTE *)(48 * a2 - 0x57FFFFFFFDELL) >> 6;
  if ( v12 )
  {
    if ( v12 == 2 )
      v10 = 28;
  }
  else
  {
    v10 = 12;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v11, a2, v10 | 0xA0000000, v6);
  if ( !MiPteInShadowRange((unsigned __int64)v11) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v11 = ValidPte;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v11 = ValidPte;
  MiWritePteShadow(v11, ValidPte);
LABEL_10:
  if ( a3 != -1 )
  {
    v18 = *(_BYTE *)(48 * a3 - 0x57FFFFFFFDELL) >> 6;
    if ( v18 )
    {
      if ( v18 == 2 )
        v8 = 25;
    }
    else
    {
      v8 = 9;
    }
    v19 = MiMakeValidPte((unsigned __int64)v11, a3, v8 | 0x20000000u, v17);
    if ( !MiPteInShadowRange((unsigned __int64)(v11 + 1)) )
      goto LABEL_15;
    if ( !(unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v19 & 1) != 0 )
      {
        v19 |= 0x8000000000000000uLL;
      }
LABEL_15:
      v11[1] = v19;
      return v11;
    }
    if ( !HIBYTE(word_140C4DE08) && (v19 & 1) != 0 )
      v19 |= 0x8000000000000000uLL;
    v11[1] = v19;
    MiWritePteShadow(v11 + 1, v19);
  }
  return v11;
}
