/*
 * XREFs of MiGetPteFromCopyList @ 0x140290F30
 * Callers:
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rdx
  int v9; // r8d
  __int64 *v10; // rdi
  char v11; // dl
  __int64 ValidPte; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // dl
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD v27[24]; // [rsp+20h] [rbp-108h] BYREF

  memset(v27, 0, 0xB8uLL);
  v6 = 2;
  v7 = 1;
  if ( a3 == -1 )
    v6 = 1;
  v8 = *a1;
  if ( (int)v8 + v6 > a1[1] )
  {
    v24 = *a1;
    LODWORD(v27[1]) = 20;
    v25 = *((_QWORD *)a1 + 2) << 25;
    v27[3] = 0LL;
    MiInsertTbFlushEntry(v27, v25 >> 16, v24, 0LL);
    MiFlushTbList(v27, v26);
    v8 = 0LL;
  }
  v9 = 4;
  v10 = (__int64 *)(*((_QWORD *)a1 + 2) + 8 * v8);
  *a1 = v8 + v6;
  v11 = *(_BYTE *)(48 * a2 - 0x57FFFFFFFDELL) >> 6;
  if ( v11 )
  {
    if ( v11 == 2 )
      v9 = 28;
  }
  else
  {
    v9 = 12;
  }
  ValidPte = MiMakeValidPte(v10, a2, v9 | 0xA0000000);
  if ( !MiPteInShadowRange((unsigned __int64)v10) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow(v14, v13, v15, v16) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v10 = ValidPte;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v10 = ValidPte;
  MiWritePteShadow(v10, ValidPte);
LABEL_10:
  if ( a3 != -1 )
  {
    v17 = *(_BYTE *)(48 * a3 - 0x57FFFFFFFDELL) >> 6;
    if ( v17 )
    {
      if ( v17 == 2 )
        v7 = 25;
    }
    else
    {
      v7 = 9;
    }
    v18 = MiMakeValidPte(v10, a3, v7 | 0x20000000u);
    if ( !MiPteInShadowRange((unsigned __int64)(v10 + 1)) )
      goto LABEL_15;
    if ( !(unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v18 & 1) != 0 )
      {
        v18 |= 0x8000000000000000uLL;
      }
LABEL_15:
      v10[1] = v18;
      return v10;
    }
    if ( !HIBYTE(word_140C4DE88) && (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    v10[1] = v18;
    MiWritePteShadow(v10 + 1, v18);
  }
  return v10;
}
