/*
 * XREFs of MiAccessCheck @ 0x14023F6C8
 * Callers:
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 * Callees:
 *     MiAllowGuardFault @ 0x140220004 (MiAllowGuardFault.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  unsigned __int64 v17; // rbx
  int v18; // edi

  if ( a3 == 1
    && ((unsigned __int64)BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL
     || (unsigned __int64)BugCheckParameter2 < 0xFFFFF68000000000uLL) )
  {
    return 3221225477LL;
  }
  v9 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
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
  if ( !MiAllowGuardFault(a5) )
    return 3221225477LL;
  if ( (v10 & 0xC00) != 0x800 )
  {
    v17 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (a4 & 0xF));
    v18 = 0;
    if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2) )
      goto LABEL_44;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_140C4E048) )
      {
LABEL_44:
        *BugCheckParameter2 = v17;
        if ( v18 )
          MiWritePteShadow((__int64)BugCheckParameter2, v17);
        return 2147483649LL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_44;
    }
    if ( (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
    goto LABEL_44;
  }
  if ( a6 == 1 )
  {
    v13 = v10;
    if ( qword_140C4DF80 )
    {
      if ( (v10 & 0x10) != 0 )
        v13 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = v10 & ~qword_140C4DF80;
    }
    v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  else
  {
    v14 = MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2, 0LL);
    v10 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    if ( v14 )
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  }
  v15 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  v16 = 0;
  if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    goto LABEL_32;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v16 = 1;
    if ( HIBYTE(word_140C4E048) )
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
    MiWritePteShadow((__int64)BugCheckParameter2, v15);
  if ( !a6 )
  {
    if ( v14 )
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 2147483649LL;
}
