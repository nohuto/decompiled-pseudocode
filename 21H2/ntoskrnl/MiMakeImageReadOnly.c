/*
 * XREFs of MiMakeImageReadOnly @ 0x1402694F0
 * Callers:
 *     MiCreateNewSection @ 0x1406D2BC0 (MiCreateNewSection.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  unsigned __int8 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h]

  v1 = a1 + 128;
  v22 = 17;
  v2 = 0LL;
  v23 = a1 + 128;
  if ( a1 != -128 )
  {
    while ( (*(_WORD *)(v1 + 32) & 0x3E) == 2 )
    {
LABEL_3:
      v1 = *(_QWORD *)(v1 + 16);
      v23 = v1;
      if ( !v1 )
        return;
    }
    v3 = *(_QWORD *)(v1 + 8);
    v4 = *(unsigned int *)(v1 + 44);
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 32) & 0xFFC1 | 2;
    v5 = v3 + 8 * v4;
    if ( v3 >= v5 )
    {
LABEL_15:
      if ( v22 != 17 )
      {
        MiUnlockProtoPoolPage(v2, v22);
        v22 = 17;
      }
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (v3 & 0xFFF) == 0 || v22 == 17 )
      {
        if ( v22 != 17 )
          MiUnlockProtoPoolPage(v2, v22);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v3, &v22);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v3, 0, 0LL);
        }
      }
      v6 = MiLockLeafPage(v3, 0LL);
      v7 = MI_READ_PTE_LOCK_FREE(v3);
      if ( v6 )
        break;
      if ( (v7 & 0x400) != 0 || v7 )
      {
        v9 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        v10 = 0;
        if ( !(unsigned int)MiPteInShadowRange(v3, v8) )
          goto LABEL_11;
        if ( (unsigned int)MiPteHasShadow(v12, v11, v13, v14) )
        {
          v10 = 1;
          if ( !HIBYTE(word_140C4E008) )
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
        *(_QWORD *)v3 = v9;
        if ( v10 )
          MiWritePteShadow(v3, v9);
      }
LABEL_13:
      v3 += 8LL;
      if ( v3 >= v5 )
      {
        v1 = v23;
        goto LABEL_15;
      }
    }
    if ( (v7 & 1) != 0 )
    {
LABEL_22:
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    v15 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
    v16 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v3, v8) )
    {
LABEL_19:
      *(_QWORD *)v3 = v15;
      if ( v16 )
        MiWritePteShadow(v3, v15);
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
      goto LABEL_22;
    }
    if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_19;
      v21 = (v15 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_19;
      v21 = (v15 & 1) == 0;
    }
    if ( !v21 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_19;
  }
}
