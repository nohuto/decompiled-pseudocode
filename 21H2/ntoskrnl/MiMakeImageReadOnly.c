/*
 * XREFs of MiMakeImageReadOnly @ 0x140257490
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // esi
  unsigned __int64 v11; // rbx
  int v12; // r14d
  bool v13; // zf
  char v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h]

  v2 = a1 + 128;
  v14 = 17;
  v3 = 0LL;
  v15 = a1 + 128;
  if ( a1 != -128 )
  {
    while ( (*(_WORD *)(v2 + 32) & 0x3E) == 2 )
    {
LABEL_3:
      v2 = *(_QWORD *)(v2 + 16);
      v15 = v2;
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
      LOBYTE(a2) = v14;
      if ( v14 != 17 )
      {
        MiUnlockProtoPoolPage(v3, a2);
        v14 = 17;
      }
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (v4 & 0xFFF) == 0 || v14 == 17 )
      {
        LOBYTE(a2) = v14;
        if ( v14 != 17 )
          MiUnlockProtoPoolPage(v3, a2);
        while ( 1 )
        {
          v3 = MiLockProtoPoolPage(v4, &v14);
          if ( v3 )
            break;
          MmAccessFault(2uLL, v4);
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
        if ( !(unsigned int)MiPteInShadowRange(v4) )
          goto LABEL_11;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v10 = 1;
          if ( !HIBYTE(word_140C4E048) )
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
        v2 = v15;
        goto LABEL_15;
      }
    }
    if ( (v8 & 1) != 0 )
    {
LABEL_22:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    v11 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v4) )
    {
LABEL_19:
      *(_QWORD *)v4 = v11;
      if ( v12 )
        MiWritePteShadow(v4, v11);
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
      goto LABEL_22;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_19;
      v13 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_19;
      v13 = (v11 & 1) == 0;
    }
    if ( !v13 )
      v11 |= 0x8000000000000000uLL;
    goto LABEL_19;
  }
}
