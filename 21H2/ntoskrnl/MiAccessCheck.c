/*
 * XREFs of MiAccessCheck @ 0x1402C1228
 * Callers:
 *     MiDispatchFault @ 0x14020EF00 (MiDispatchFault.c)
 * Callees:
 *     MiAllowGuardFault @ 0x1402A2BC4 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
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
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  int v17; // edi
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int v20; // edi
  __int64 v21; // r8

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
    v19 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (a4 & 0xF));
    v20 = 0;
    if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2, v13) )
      goto LABEL_44;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( HIBYTE(word_140C4E008) )
      {
LABEL_44:
        *BugCheckParameter2 = v19;
        if ( v20 )
          MiWritePteShadow((__int64)BugCheckParameter2, v19, v21);
        return 2147483649LL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_44;
    }
    if ( (v19 & 1) != 0 )
      v19 |= 0x8000000000000000uLL;
    goto LABEL_44;
  }
  if ( a6 == 1 )
  {
    v14 = v10;
    if ( qword_140C4DF40 )
    {
      if ( (v10 & 0x10) != 0 )
        v14 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v14 = v10 & ~qword_140C4DF40;
    }
    v15 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  else
  {
    v15 = MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2);
    v10 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    if ( v15 )
    {
      v13 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
      *(_QWORD *)(v15 + 16) = v13;
    }
  }
  v16 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  v17 = 0;
  if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2, v13) )
    goto LABEL_32;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v17 = 1;
    if ( HIBYTE(word_140C4E008) )
      goto LABEL_32;
LABEL_30:
    if ( (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_32;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_30;
LABEL_32:
  *BugCheckParameter2 = v16;
  if ( v17 )
    MiWritePteShadow((__int64)BugCheckParameter2, v16, v18);
  if ( !a6 )
  {
    if ( v15 )
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 2147483649LL;
}
