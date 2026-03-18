/*
 * XREFs of MiMakeImageReadOnly @ 0x1403508C0
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v12; // esi
  unsigned __int64 v13; // rbx
  int v14; // r14d
  bool v15; // zf
  char v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h]

  v4 = a1 + 128;
  v16 = 17;
  v5 = 0LL;
  v17 = a1 + 128;
  if ( a1 != -128 )
  {
    while ( (*(_WORD *)(v4 + 32) & 0x3E) == 2 )
    {
LABEL_3:
      v4 = *(_QWORD *)(v4 + 16);
      v17 = v4;
      if ( !v4 )
        return;
    }
    v6 = *(_QWORD *)(v4 + 8);
    v7 = *(unsigned int *)(v4 + 44);
    *(_WORD *)(v4 + 32) = *(_WORD *)(v4 + 32) & 0xFFC1 | 2;
    v8 = v6 + 8 * v7;
    if ( v6 >= v8 )
    {
LABEL_15:
      LOBYTE(a2) = v16;
      if ( v16 != 17 )
      {
        MiUnlockProtoPoolPage(v5, a2, a3, a4);
        v16 = 17;
      }
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (v6 & 0xFFF) == 0 || v16 == 17 )
      {
        LOBYTE(a2) = v16;
        if ( v16 != 17 )
          MiUnlockProtoPoolPage(v5, a2, a3, a4);
        while ( 1 )
        {
          v5 = MiLockProtoPoolPage(v6, (__int64)&v16);
          if ( v5 )
            break;
          MmAccessFault(2uLL, v6, 0, 0LL);
        }
      }
      v9 = MiLockLeafPage(v6, 0LL);
      v10 = MI_READ_PTE_LOCK_FREE(v6);
      if ( v9 )
        break;
      if ( (v10 & 0x400) != 0 || v10 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        v12 = 0;
        if ( !MiPteInShadowRange(v6) )
          goto LABEL_11;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v12 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
LABEL_33:
            if ( (v11 & 1) != 0 )
              v11 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_33;
        }
LABEL_11:
        *(_QWORD *)v6 = v11;
        if ( v12 )
          MiWritePteShadow(v6, v11);
      }
LABEL_13:
      v6 += 8LL;
      if ( v6 >= v8 )
      {
        v4 = v17;
        goto LABEL_15;
      }
    }
    if ( (v10 & 1) != 0 )
    {
LABEL_22:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    v13 = v10 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
    v14 = 0;
    if ( !MiPteInShadowRange(v6) )
    {
LABEL_19:
      *(_QWORD *)v6 = v13;
      if ( v14 )
        MiWritePteShadow(v6, v13);
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
      goto LABEL_22;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_19;
      v15 = (v13 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_19;
      v15 = (v13 & 1) == 0;
    }
    if ( !v15 )
      v13 |= 0x8000000000000000uLL;
    goto LABEL_19;
  }
}
