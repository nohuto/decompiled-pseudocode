/*
 * XREFs of MiGetPteFromCopyList @ 0x1402E51D0
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
  char v13; // dl
  __int64 v14; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD v18[24]; // [rsp+20h] [rbp-108h] BYREF

  memset(v18, 0, 0xB8uLL);
  v6 = 2;
  v7 = 1;
  if ( a3 == -1 )
    v6 = 1;
  v8 = *a1;
  if ( (int)v8 + v6 > a1[1] )
  {
    v16 = *a1;
    LODWORD(v18[1]) = 20;
    v17 = *((_QWORD *)a1 + 2) << 25;
    v18[3] = 0LL;
    MiInsertTbFlushEntry(v18, v17 >> 16, v16, 0LL);
    MiFlushTbList(v18);
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
  if ( !(unsigned int)MiPteInShadowRange(v10) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow() )
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
  if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v10 = ValidPte;
  MiWritePteShadow((__int64)v10, ValidPte);
LABEL_10:
  if ( a3 != -1 )
  {
    v13 = *(_BYTE *)(48 * a3 - 0x57FFFFFFFDELL) >> 6;
    if ( v13 )
    {
      if ( v13 == 2 )
        v7 = 25;
    }
    else
    {
      v7 = 9;
    }
    v14 = MiMakeValidPte(v10, a3, v7 | 0x20000000u);
    if ( !(unsigned int)MiPteInShadowRange(v10 + 1) )
      goto LABEL_15;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v14 & 1) != 0 )
      {
        v14 |= 0x8000000000000000uLL;
      }
LABEL_15:
      v10[1] = v14;
      return v10;
    }
    if ( !HIBYTE(word_140C4E048) && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
    v10[1] = v14;
    MiWritePteShadow((__int64)(v10 + 1), v14);
  }
  return v10;
}
