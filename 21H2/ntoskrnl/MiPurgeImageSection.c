/*
 * XREFs of MiPurgeImageSection @ 0x1403A5514
 * Callers:
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInvalidateCollidedIos @ 0x140248AEC (MiInvalidateCollidedIos.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // r8d
  unsigned __int64 v11; // r12
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  _DWORD *v16; // r15
  unsigned __int64 v17; // rsi
  int v18; // r15d
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r11d
  bool v24; // zf
  __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  int v27; // esi
  bool v28; // zf
  int v29; // [rsp+20h] [rbp-88h] BYREF
  __int64 v30; // [rsp+28h] [rbp-80h]
  __int64 v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned __int64 v35; // [rsp+50h] [rbp-58h]
  unsigned __int8 v37; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+C0h] [rbp+18h]
  unsigned int v39; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 128;
  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v3 = 0LL;
  v37 = 17;
  v4 = a1;
  v30 = 0LL;
  v5 = *(_QWORD *)(qword_140C4E688 + 8 * v2);
  v31 = v5;
  while ( 1 )
  {
    v32 = v1;
    if ( !v1 )
      break;
    if ( (*(_WORD *)(v1 + 34) & 2) == 0 )
      goto LABEL_4;
    v7 = MiSwizzleInvalidPte(16LL * (*(_WORD *)(v1 + 32) & 0x3E));
    v33 = v7;
    v9 = v7;
    v39 = 0;
    v38 = 0;
    if ( *(_DWORD *)(v1 + 36) )
    {
      v9 = MiSwizzleInvalidPte(16 * (v6 | (v1 << 12) | 0x40));
      v39 = (*(_DWORD *)(v1 + 40) << 9) | (v10 >> 4);
    }
    v11 = *(_QWORD *)(v1 + 8);
    v35 = v11 + 8LL * *(unsigned int *)(v1 + 44);
    if ( v11 < v35 )
    {
      while ( 1 )
      {
        if ( (v11 & 0xFFF) == 0 || v37 == 17 )
        {
          if ( v37 != 17 )
            MiUnlockProtoPoolPage(v8, v37);
          while ( 1 )
          {
            v30 = MiLockProtoPoolPage(v11, &v37);
            if ( v30 )
              break;
            MmAccessFault(2uLL, v11, 0, 0LL);
          }
          v7 = v33;
        }
        v12 = MiLockLeafPage((unsigned __int64 *)v11, 0LL);
        v13 = MI_READ_PTE_LOCK_FREE(v11);
        v15 = v13;
        if ( !v13 )
        {
LABEL_20:
          v1 = v32;
          v8 = v30;
          goto LABEL_21;
        }
        if ( !v12 )
          break;
        if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 || (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 )
        {
          v16 = (_DWORD *)(v12 + 16);
          if ( (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
            MiDereferenceControlAreaPfnList(v4, 0LL, v14, 2);
          v17 = 0LL;
          v34 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
          if ( *(_WORD *)(v12 + 32) )
          {
            *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
            if ( (*(_BYTE *)(v12 + 34) & 0x28) == 0x20 )
            {
              v3 = *(_QWORD *)v12 - 32LL;
              if ( *(_QWORD *)(v3 + 16) == v3 + 16 )
                v3 = 0LL;
            }
            if ( (*v16 & 0x400LL) == 0 )
              MiChargeCommit(v31, 1uLL, 4u);
          }
          else
          {
            MiUnlinkPageFromList(v12, 0);
            if ( (*v16 & 0x400LL) == 0 )
              v17 = MiCapturePageFileInfoInline((unsigned __int64 *)(v12 + 16), 0, 1);
            if ( qword_140C4DF80 )
            {
              if ( (v15 & 0x10) != 0 )
                v15 &= ~0x10uLL;
              else
                v15 &= ~qword_140C4DF80;
            }
            MiInsertPageInFreeOrZeroedList((v15 >> 12) & 0xFFFFFFFFFLL, 2);
          }
          v18 = 0;
          v19 = v9;
          if ( MiPteInShadowRange(v11) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v18 = v23 + 1;
              if ( HIBYTE(word_140C4E048) == (_BYTE)v23 )
              {
                v24 = ((unsigned __int8)v9 & (unsigned __int8)v18) == 0;
LABEL_49:
                if ( !v24 )
                  v19 = v9 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v24 = (v9 & 1) == 0;
              goto LABEL_49;
            }
          }
          *(_QWORD *)v11 = v19;
          if ( v18 )
            MiWritePteShadow(v11, v19);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v3 )
            MiInvalidateCollidedIos(v3);
          v25 = 48 * v34 - 0x58000000000LL;
          v3 = 0LL;
          v29 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v29, v20, v21, v22);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          MiDecrementShareCount(v25);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = v31;
          if ( v17 )
            MiReleasePageFileInfo(v31, v17, 1);
LABEL_71:
          v4 = a1;
          goto LABEL_17;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
        v11 += 8LL;
        v8 = v30;
        v38 += 4096;
        if ( v38 >= v39 )
          v9 = v7;
        if ( v11 >= v35 )
          goto LABEL_20;
      }
      if ( (v13 & 0x400) != 0 || v13 == MiSwizzleInvalidPte(768LL) )
        goto LABEL_17;
      MiReleasePageFileSpace(v5, v15, 1);
      v26 = v9;
      v27 = 0;
      if ( MiPteInShadowRange(v11) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v27 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v28 = (v9 & 1) == 0;
LABEL_67:
            if ( !v28 )
              v26 = v9 | 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v28 = (v9 & 1) == 0;
          goto LABEL_67;
        }
      }
      *(_QWORD *)v11 = v26;
      if ( v27 )
        MiWritePteShadow(v11, v26);
      goto LABEL_71;
    }
LABEL_21:
    if ( v37 != 17 )
    {
      MiUnlockProtoPoolPage(v8, v37);
      v37 = 17;
    }
LABEL_4:
    v1 = *(_QWORD *)(v1 + 16);
  }
}
