/*
 * XREFs of MiAccessCheck @ 0x14026E080
 * Callers:
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x140333384 (MiAllowGuardFault.c)
 */

__int64 __fastcall MiAccessCheck(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // bl
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  if ( a3 == 1
    && ((unsigned __int64)BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL
     || (unsigned __int64)BugCheckParameter2 < 0xFFFFF68000000000uLL) )
  {
    return 3221225477LL;
  }
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  v10 = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( a2 && (v9 & 0xA00) == 0 )
      return 3221225477LL;
    return 0LL;
  }
  v11 = a4;
  if ( *((char *)&MiReadWrite + (a4 & 7)) - (a2 != 0) < 10 )
    return 3221225477LL;
  if ( (a4 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !(unsigned int)MiAllowGuardFault() )
    return 3221225477LL;
  if ( (v10 & 0xC00) != 0x800 )
  {
    v21 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (a4 & 0xF));
    v22 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
      goto LABEL_44;
    if ( (unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
    {
      v22 = 1;
      if ( HIBYTE(word_140C4DE08) )
      {
LABEL_44:
        *BugCheckParameter2 = v21;
        if ( v22 )
          MiWritePteShadow(BugCheckParameter2, v21);
        return 2147483649LL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_44;
    }
    if ( (v21 & 1) != 0 )
      v21 |= 0x8000000000000000uLL;
    goto LABEL_44;
  }
  if ( a6 == 1 )
  {
    v13 = v10;
    if ( qword_140C4DD40 )
    {
      if ( (v10 & 0x10) != 0 )
        v13 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = v10 & ~qword_140C4DD40;
    }
    v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  else
  {
    v14 = MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2, 0LL);
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
    if ( v14 )
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  }
  v15 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  v16 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
    goto LABEL_32;
  if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
  {
    v16 = 1;
    if ( HIBYTE(word_140C4DE08) )
      goto LABEL_32;
LABEL_30:
    if ( (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_32;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_30;
LABEL_32:
  *BugCheckParameter2 = v15;
  if ( v16 )
    MiWritePteShadow(BugCheckParameter2, v15);
  if ( !a6 )
  {
    if ( v14 )
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 2147483649LL;
}
