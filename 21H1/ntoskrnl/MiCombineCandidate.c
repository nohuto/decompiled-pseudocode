/*
 * XREFs of MiCombineCandidate @ 0x140366B50
 * Callers:
 *     MiRecheckCombineVm @ 0x140364E80 (MiRecheckCombineVm.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiCapturePfnVm @ 0x1403654B0 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiMapArbitraryPage @ 0x1403669C0 (MiMapArbitraryPage.c)
 *     MiCombinePte @ 0x140556E10 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MI_IS_RESET_PTE @ 0x1402284A0 (MI_IS_RESET_PTE.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140308C48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiIsSessionMetadata @ 0x1403681C0 (MiIsSessionMetadata.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCombineCandidate(_QWORD *a1, char a2, __int128 *a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edx
  unsigned __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF
  __int128 v23; // [rsp+40h] [rbp-18h]
  unsigned __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = a3[1];
  v21 = *a3;
  v5 = a3[2];
  v22 = v4;
  v23 = v5;
  if ( (BYTE2(v5) & 7u) <= 1 )
    return 0LL;
  v6 = *((_QWORD *)&v21 + 1);
  v7 = (*((_QWORD *)&v23 + 1) >> 39) & 0x3FFLL;
  if ( *(_QWORD *)(qword_140C4E588 + 8 * v7) != *a1 && (a2 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MI_PFN_IS_PROTO(&v21, v7, *((_QWORD *)&v23 + 1))
    || (v8 & 0x1000000000LL) != 0
    || (BYTE3(v23) & 8) != 0
    || v6 < 0xFFFFF68000000000uLL
    || v6 > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v22 + 1) & 0x4000000000000000LL) != 0
    || ((v8 >> 60) & 7) == 4
    || (v6 | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (v6 | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (BYTE3(v23) & 0x20) != 0
    || byte_140C51F5E
    && _bittest64((const signed __int64 *)qword_140C52488, (unsigned __int64)((v9 + 0x58000000000LL) / 48) >> 9) )
  {
    return 0LL;
  }
  v10 = v22;
  if ( (unsigned __int64)&v22 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v22 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v10 = v22;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = v22 | 0x20;
      v14 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
      if ( (v14 & 0x20) == 0 )
        v10 = v11;
      if ( (v14 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  v24 = v10;
  if ( (v10 & 1) != 0 || v10 && qword_140C4DE80 && (qword_140C4DE80 & v10) == 0 )
    return 0LL;
  v15 = (v10 >> 5) & 0x1F;
  if ( (_DWORD)v15 == 24
    || (_DWORD)v15 == 31
    || ((v10 >> 5) & 0x18) == 0x10
    || (unsigned int)v15 >= 0x1E
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)&v21, 0, 0LL) )
  {
    return 0LL;
  }
  v16 = (__int64)(v6 << 25) >> 16;
  if ( v16 >= 0xFFFF800000000000uLL )
    v17 = byte_140C4F908[((v16 >> 39) & 0x1FF) - 256];
  else
    v17 = 0;
  if ( v6 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( v17 == 6 )
    {
      v18 = 2;
    }
    else
    {
      if ( v17 != 1 || (unsigned int)MiIsSessionMetadata() )
        return 0LL;
      v18 = 3;
    }
  }
  else
  {
    v18 = 1;
  }
  if ( (unsigned __int8)((BYTE2(v23) & 7) - 2) > 1u || (_WORD)v23 )
  {
    if ( (BYTE2(v23) & 7) != 6
      || (v21 & 1) == 0
      || (*((_QWORD *)&v23 + 1) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
      || (_WORD)v23 != 1
      || (*((_QWORD *)&v22 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    {
      return 0LL;
    }
    if ( v18 == 1 && (v10 & 0x400) == 0 )
    {
      if ( (v10 & 0x800) == 0
        && (((unsigned __int8)v10 >> 2) & (unsigned __int8)v23) == 0
        && (((unsigned __int8)v10 >> 1) & (unsigned __int8)v23) == 0 )
      {
        v20 = v10;
        if ( qword_140C4DE80 && (v10 & 0x10) == 0 )
          v20 = v10 & ~qword_140C4DE80;
        if ( HIDWORD(v20) == 1 )
          return 0LL;
      }
      if ( (v10 & 0x400) == 0 && ((v10 >> 26) & 1) != 0 )
        return 0LL;
    }
  }
  else if ( v18 == 1 && (MI_IS_RESET_PTE(v10) || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v24)) )
  {
    return 0LL;
  }
  return v18;
}
