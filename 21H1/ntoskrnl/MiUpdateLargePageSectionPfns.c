/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x1403ED43C
 * Callers:
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUnlockPage @ 0x1402FFA3C (MiUnlockPage.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1403454AC (MiSetPfnNodeBlinkHigh.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfns(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int64 v4; // r14
  __int64 v6; // r13
  unsigned __int64 ValidPte; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int PfnPageSizeIndex; // eax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r12
  int v18; // r14d
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  bool v23; // zf
  unsigned __int8 v24; // bl
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  char v27; // al
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp+10h]
  unsigned __int64 v30; // [rsp+88h] [rbp+20h]

  v29 = a2;
  v3 = a3;
  v4 = a2;
  LODWORD(a3) = a3 | 0x80000000;
  v6 = (a1 + 0x58000000000LL) / 48;
  ValidPte = MiMakeValidPte(0LL, v6, a3, a1 + 0x58000000000LL);
  v8 = MiSwizzleInvalidPte(32LL * (v3 & 0x1F));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1, v9, v10, v11);
  v13 = -1LL;
  v30 = v4 + 8 * MiLargePageSizes[PfnPageSizeIndex];
  v14 = v30;
  result = MiConvertEntireLargePageToSmall(a1, PfnPageSizeIndex, 0, 1, 0LL, 0LL);
  v16 = v4;
  if ( v4 < v14 )
  {
    v17 = a1 + 24;
    do
    {
      if ( v13 == -1LL || (v16 & 0xFFF) == 0 )
      {
        v28 = MI_READ_PTE_LOCK_FREE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
      }
      v18 = 0;
      ValidPte ^= (ValidPte ^ (v6 << 12)) & 0xFFFFFFFFF000LL;
      v19 = ValidPte;
      if ( !MiPteInShadowRange(v16) )
        goto LABEL_14;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v23 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v23 )
          v19 = ValidPte | 0x8000000000000000uLL;
      }
LABEL_14:
      *(_QWORD *)v16 = v19;
      if ( v18 )
        MiWritePteShadow(v16, v19);
      v24 = MiLockPageInline(v17 - 24, v20, v21, v22);
      MiSetPfnTbFlushStamp(v17 - 24, 0, 1);
      MiSetPfnNodeBlinkHigh(v17 - 24, 0, 1);
      v25 = *(_QWORD *)(v17 + 16);
      v26 = *(_QWORD *)v17 & 0xC000000000000001uLL;
      *(_QWORD *)(v17 - 24) = 0LL;
      *(_QWORD *)v17 = v26 | 1;
      *(_WORD *)(v17 + 8) = 2;
      *(_QWORD *)(v17 - 8) = v8;
      *(_QWORD *)(v17 - 16) = v16;
      v27 = *(_BYTE *)(v17 + 10);
      *(_QWORD *)(v17 + 16) = v13 & 0xFFFFFFFFFLL | v25 & 0xFFFFFFF000000000uLL | 0x8000000000000000uLL;
      *(_BYTE *)(v17 + 10) = v27 & 0xF8 | 6;
      result = MiUnlockPage(v17 - 24, v24);
      v4 = v29;
      ++v6;
      v17 += 48LL;
      v16 += 8LL;
    }
    while ( v16 < v30 );
  }
  return result;
}
