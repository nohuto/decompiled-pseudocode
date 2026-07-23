/*
 * XREFs of MiCombineCandidate @ 0x140369950
 * Callers:
 *     MiRecheckCombineVm @ 0x140367C80 (MiRecheckCombineVm.c)
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiCapturePfnVm @ 0x1403682B0 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiMapArbitraryPage @ 0x1403697C0 (MiMapArbitraryPage.c)
 *     MiCombinePte @ 0x14055CB40 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14023894C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MI_IS_RESET_PTE @ 0x1402E2570 (MI_IS_RESET_PTE.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MiIsSessionMetadata @ 0x14036AFC0 (MiIsSessionMetadata.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCombineCandidate(_QWORD *a1, char a2, __int128 *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // edx
  unsigned __int64 v18; // rax
  __int128 BugCheckParameter2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-18h]
  unsigned __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3[1];
  BugCheckParameter2 = *a3;
  v4 = a3[2];
  v20 = v3;
  v21 = v4;
  if ( (BYTE2(v4) & 7u) <= 1 )
    return 0LL;
  v5 = *((_QWORD *)&BugCheckParameter2 + 1);
  if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*((_QWORD *)&v21 + 1) >> 39) & 0x3FFLL)) != *a1 && (a2 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MI_PFN_IS_PROTO(&BugCheckParameter2)
    || (v6 & 0x1000000000LL) != 0
    || (BYTE3(v21) & 8) != 0
    || v5 < 0xFFFFF68000000000uLL
    || v5 > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v20 + 1) & 0x4000000000000000LL) != 0
    || ((v6 >> 60) & 7) == 4
    || (v5 | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (v5 | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (BYTE3(v21) & 0x20) != 0
    || byte_140C5209E
    && _bittest64((const signed __int64 *)qword_140C525C8, (unsigned __int64)((v7 + 0x58000000000LL) / 48) >> 9) )
  {
    return 0LL;
  }
  v8 = v20;
  if ( (unsigned __int64)&v20 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v20 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v8 = v20;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 = v20 | 0x20;
      v12 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
      if ( (v12 & 0x20) == 0 )
        v8 = v9;
      if ( (v12 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v22 = v8;
  if ( (v8 & 1) != 0 || v8 && qword_140C4DF80 && (qword_140C4DF80 & v8) == 0 )
    return 0LL;
  v13 = (v8 >> 5) & 0x1F;
  if ( (_DWORD)v13 == 24
    || (_DWORD)v13 == 31
    || ((v8 >> 5) & 0x18) == 0x10
    || (unsigned int)v13 >= 0x1E
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)&BugCheckParameter2, 0, 0LL) )
  {
    return 0LL;
  }
  v14 = (__int64)(v5 << 25) >> 16;
  if ( v14 >= 0xFFFF800000000000uLL )
    v15 = (unsigned __int8)byte_140C4FA08[((v14 >> 39) & 0x1FF) - 256];
  else
    v15 = 0;
  if ( v5 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( v15 == 6 )
    {
      v16 = 2;
    }
    else
    {
      if ( v15 != 1 || (unsigned int)MiIsSessionMetadata() )
        return 0LL;
      v16 = 3;
    }
  }
  else
  {
    v16 = 1;
  }
  if ( (unsigned __int8)((BYTE2(v21) & 7) - 2) > 1u || (_WORD)v21 )
  {
    if ( (BYTE2(v21) & 7) != 6
      || (BugCheckParameter2 & 1) == 0
      || (*((_QWORD *)&v21 + 1) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
      || (_WORD)v21 != 1
      || (*((_QWORD *)&v20 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    {
      return 0LL;
    }
    if ( v16 == 1 && (v8 & 0x400) == 0 )
    {
      if ( (v8 & 0x800) == 0
        && (((unsigned __int8)v8 >> 2) & (unsigned __int8)v21) == 0
        && (((unsigned __int8)v8 >> 1) & (unsigned __int8)v21) == 0 )
      {
        v18 = v8;
        if ( qword_140C4DF80 && (v8 & 0x10) == 0 )
          v18 = v8 & ~qword_140C4DF80;
        if ( HIDWORD(v18) == 1 )
          return 0LL;
      }
      if ( (v8 & 0x400) == 0 && ((v8 >> 26) & 1) != 0 )
        return 0LL;
    }
  }
  else if ( v16 == 1 && (MI_IS_RESET_PTE(v8) || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v22)) )
  {
    return 0LL;
  }
  return v16;
}
