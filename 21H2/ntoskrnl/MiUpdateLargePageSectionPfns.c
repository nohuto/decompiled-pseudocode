/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x1403F41AC
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1402346F4 (MiSetPfnNodeBlinkHigh.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfns(__int64 a1, unsigned __int64 a2, int a3)
{
  char v3; // bl
  unsigned __int64 v4; // r14
  __int64 v6; // r13
  unsigned __int64 ValidPte; // rdi
  __int64 v8; // rsi
  int PfnPageSizeIndex; // eax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  int v15; // r14d
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  bool v20; // zf
  unsigned __int8 v21; // bl
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  char v24; // al
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  v26 = a2;
  v3 = a3;
  v4 = a2;
  v6 = (a1 + 0x58000000000LL) / 48;
  ValidPte = MiMakeValidPte(0LL, v6, a3 | 0x80000000);
  v8 = MiSwizzleInvalidPte(32LL * (v3 & 0x1F));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v10 = -1LL;
  v27 = v4 + 8 * MiLargePageSizes[PfnPageSizeIndex];
  v11 = v27;
  result = MiConvertEntireLargePageToSmall(a1, PfnPageSizeIndex, 0, 1, 0LL, 0LL);
  v13 = v4;
  if ( v4 < v11 )
  {
    v14 = a1 + 24;
    do
    {
      if ( v10 == -1LL || (v13 & 0xFFF) == 0 )
      {
        v25 = MI_READ_PTE_LOCK_FREE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL;
      }
      v15 = 0;
      ValidPte ^= (ValidPte ^ (v6 << 12)) & 0xFFFFFFFFF000LL;
      v16 = ValidPte;
      if ( !MiPteInShadowRange(v13) )
        goto LABEL_14;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v20 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v20 )
          v16 = ValidPte | 0x8000000000000000uLL;
      }
LABEL_14:
      *(_QWORD *)v13 = v16;
      if ( v15 )
        MiWritePteShadow(v13, v16);
      v21 = MiLockPageInline(v14 - 24, v17, v18, v19);
      MiSetPfnTbFlushStamp(v14 - 24, 0, 1);
      MiSetPfnNodeBlinkHigh(v14 - 24, 0, 1);
      v22 = *(_QWORD *)(v14 + 16);
      v23 = *(_QWORD *)v14 & 0xC000000000000001uLL;
      *(_QWORD *)(v14 - 24) = 0LL;
      *(_QWORD *)v14 = v23 | 1;
      *(_WORD *)(v14 + 8) = 2;
      *(_QWORD *)(v14 - 8) = v8;
      *(_QWORD *)(v14 - 16) = v13;
      v24 = *(_BYTE *)(v14 + 10);
      *(_QWORD *)(v14 + 16) = v10 & 0xFFFFFFFFFLL | v22 & 0xFFFFFFF000000000uLL | 0x8000000000000000uLL;
      *(_BYTE *)(v14 + 10) = v24 & 0xF8 | 6;
      result = MiUnlockPage(v14 - 24, v21);
      v4 = v26;
      ++v6;
      v14 += 48LL;
      v13 += 8LL;
    }
    while ( v13 < v27 );
  }
  return result;
}
