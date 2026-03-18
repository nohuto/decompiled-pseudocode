/*
 * XREFs of MiMakeImageReadOnly @ 0x1402F48E4
 * Callers:
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  unsigned __int8 v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h]

  v2 = a1 + 128;
  v20 = 17;
  v3 = 0LL;
  v21 = a1 + 128;
  if ( a1 != -128 )
  {
    while ( (*(_WORD *)(v2 + 32) & 0x3E) == 2 )
    {
LABEL_3:
      v2 = *(_QWORD *)(v2 + 16);
      v21 = v2;
      if ( !v2 )
        return;
    }
    v4 = *(_QWORD *)(v2 + 8);
    v5 = *(unsigned int *)(v2 + 44);
    *(_WORD *)(v2 + 32) = *(_WORD *)(v2 + 32) & 0xFFC1 | 2;
    v6 = v4 + 8 * v5;
    if ( v4 >= v6 )
    {
LABEL_15:
      LOBYTE(a2) = v20;
      if ( v20 != 17 )
      {
        MiUnlockProtoPoolPage(v3, a2);
        v20 = 17;
      }
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (v4 & 0xFFF) == 0 || v20 == 17 )
      {
        LOBYTE(a2) = v20;
        if ( v20 != 17 )
          MiUnlockProtoPoolPage(v3, a2);
        while ( 1 )
        {
          v3 = MiLockProtoPoolPage(v4, &v20);
          if ( v3 )
            break;
          MmAccessFault(2uLL, v4, 0, 0LL);
        }
      }
      v7 = MiLockLeafPage(v4, 0LL);
      v8 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v7 )
        break;
      if ( (v8 & 0x400) != 0 || v8 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        v10 = 0;
        if ( !MiPteInShadowRange(v4) )
          goto LABEL_11;
        if ( (unsigned int)MiPteHasShadow(v11, a2, v12, v13) )
        {
          v10 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
LABEL_33:
            if ( (v9 & 1) != 0 )
              v9 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_33;
        }
LABEL_11:
        *(_QWORD *)v4 = v9;
        if ( v10 )
          MiWritePteShadow(v4, v9);
      }
LABEL_13:
      v4 += 8LL;
      if ( v4 >= v6 )
      {
        v2 = v21;
        goto LABEL_15;
      }
    }
    if ( (v8 & 1) != 0 )
    {
LABEL_22:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    v14 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
    v15 = 0;
    if ( !MiPteInShadowRange(v4) )
    {
LABEL_19:
      *(_QWORD *)v4 = v14;
      if ( v15 )
        MiWritePteShadow(v4, v14);
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
      goto LABEL_22;
    }
    if ( (unsigned int)MiPteHasShadow(v16, a2, v17, v18) )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_19;
      v19 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_19;
      v19 = (v14 & 1) == 0;
    }
    if ( !v19 )
      v14 |= 0x8000000000000000uLL;
    goto LABEL_19;
  }
}
