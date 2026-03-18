/*
 * XREFs of MiPurgeImageSection @ 0x1403A2634
 * Callers:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14035875C (MiInvalidateCollidedIos.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _DWORD *v15; // r15
  unsigned __int64 v16; // rsi
  int v17; // r15d
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r11d
  bool v23; // zf
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  int v26; // esi
  bool v27; // zf
  int v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  unsigned __int64 v34; // [rsp+50h] [rbp-58h]
  unsigned __int8 v36; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+18h]
  unsigned int v38; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 128;
  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v3 = 0LL;
  v36 = 17;
  v4 = a1;
  v29 = 0LL;
  v5 = *(_QWORD *)(qword_140C4E448 + 8 * v2);
  v30 = v5;
  while ( 1 )
  {
    v31 = v1;
    if ( !v1 )
      break;
    if ( (*(_WORD *)(v1 + 34) & 2) == 0 )
      goto LABEL_4;
    v7 = MiSwizzleInvalidPte(16LL * (*(_WORD *)(v1 + 32) & 0x3E));
    v32 = v7;
    v10 = v7;
    v38 = 0;
    v37 = 0;
    if ( *(_DWORD *)(v1 + 36) )
    {
      v10 = MiSwizzleInvalidPte(16 * (v6 | (v1 << 12) | 0x40));
      v38 = (*(_DWORD *)(v1 + 40) << 9) | ((unsigned int)v8 >> 4);
    }
    v11 = *(_QWORD *)(v1 + 8);
    v34 = v11 + 8LL * *(unsigned int *)(v1 + 44);
    if ( v11 < v34 )
    {
      while ( 1 )
      {
        if ( (v11 & 0xFFF) == 0 || v36 == 17 )
        {
          LOBYTE(v6) = v36;
          if ( v36 != 17 )
            MiUnlockProtoPoolPage(v9, v6);
          while ( 1 )
          {
            v29 = MiLockProtoPoolPage(v11, &v36);
            if ( v29 )
              break;
            MmAccessFault(2uLL, v11, 0, 0LL);
          }
          v7 = v32;
        }
        v12 = MiLockLeafPage((__int64 *)v11, 0, v8, v9);
        v13 = MI_READ_PTE_LOCK_FREE(v11);
        v14 = v13;
        if ( !v13 )
        {
LABEL_20:
          v1 = v31;
          v9 = v29;
          goto LABEL_21;
        }
        if ( !v12 )
          break;
        if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 || (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 )
        {
          v15 = (_DWORD *)(v12 + 16);
          if ( (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
            MiDereferenceControlAreaPfnList(v4, 0LL, v8, 2LL);
          v16 = 0LL;
          v33 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
          if ( *(_WORD *)(v12 + 32) )
          {
            *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
            if ( (*(_BYTE *)(v12 + 34) & 0x28) == 0x20 )
            {
              v3 = *(_QWORD *)v12 - 32LL;
              if ( *(_QWORD *)(v3 + 16) == v3 + 16 )
                v3 = 0LL;
            }
            if ( (*v15 & 0x400LL) == 0 )
              MiChargeCommit(v30, 1uLL, 4u);
          }
          else
          {
            MiUnlinkPageFromList(v12, 0);
            if ( (*v15 & 0x400LL) == 0 )
              v16 = MiCapturePageFileInfoInline((unsigned __int64 *)(v12 + 16), 0, 1);
            if ( qword_140C4DD40 )
            {
              if ( (v14 & 0x10) != 0 )
                v14 &= ~0x10uLL;
              else
                v14 &= ~qword_140C4DD40;
            }
            MiInsertPageInFreeOrZeroedList((v14 >> 12) & 0xFFFFFFFFFLL, 2);
          }
          v17 = 0;
          v18 = v10;
          if ( MiPteInShadowRange(v11) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v17 = v22 + 1;
              if ( HIBYTE(word_140C4DE08) == (_BYTE)v22 )
              {
                v23 = ((unsigned __int8)v10 & (unsigned __int8)v17) == 0;
LABEL_49:
                if ( !v23 )
                  v18 = v10 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v23 = (v10 & 1) == 0;
              goto LABEL_49;
            }
          }
          *(_QWORD *)v11 = v18;
          if ( v17 )
            MiWritePteShadow(v11, v18, v20);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v3 )
            MiInvalidateCollidedIos(v3);
          v24 = 48 * v33 - 0x58000000000LL;
          v3 = 0LL;
          v28 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v28, v19, v20, v21);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          MiDecrementShareCount(v24);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = v30;
          if ( v16 )
            MiReleasePageFileInfo(v30, v16, 1);
LABEL_71:
          v4 = a1;
          goto LABEL_17;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
        v11 += 8LL;
        v9 = v29;
        v37 += 4096;
        if ( v37 >= v38 )
          v10 = v7;
        if ( v11 >= v34 )
          goto LABEL_20;
      }
      if ( (v13 & 0x400) != 0 || v13 == MiSwizzleInvalidPte(768LL) )
        goto LABEL_17;
      MiReleasePageFileSpace(v5, v14);
      v25 = v10;
      v26 = 0;
      if ( MiPteInShadowRange(v11) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v26 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v27 = (v10 & 1) == 0;
LABEL_67:
            if ( !v27 )
              v25 = v10 | 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v27 = (v10 & 1) == 0;
          goto LABEL_67;
        }
      }
      *(_QWORD *)v11 = v25;
      if ( v26 )
        MiWritePteShadow(v11, v25, v8);
      goto LABEL_71;
    }
LABEL_21:
    LOBYTE(v6) = v36;
    if ( v36 != 17 )
    {
      MiUnlockProtoPoolPage(v9, v6);
      v36 = 17;
    }
LABEL_4:
    v1 = *(_QWORD *)(v1 + 16);
  }
}
