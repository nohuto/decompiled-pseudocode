/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14037D5E8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1402365F4 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x14026B1C0 (MiGetTopLevelPfn.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 *a3,
        _OWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v13; // r14
  int v14; // edi
  char PfnPriority; // al
  char v16; // cl
  int v17; // r9d
  _QWORD *v18; // r8
  __int128 v20; // [rsp+20h] [rbp-10h]
  __int64 v21; // [rsp+60h] [rbp+30h]

  v5 = 0;
  *(_QWORD *)&v20 = 0LL;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140C51F48
                                                           + 8
                                                           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
                                               + 1172LL) << 60);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v20 + 1) = 3LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (unsigned int)MiGetSystemRegionType(v10) == 5 )
    {
      *(_QWORD *)&v20 = v10 - 1432;
      *((_QWORD *)&v20 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v11 = (__int64)(v10 << 25) >> 16;
      HIDWORD(v20) = HIDWORD(v11);
      if ( (unsigned int)MiGetSystemRegionType(v11) == 1
        || v11 <= 0x7FFFFFFEFFFFLL
        || v11 >= qword_140C540C0 && v11 <= qword_140C51BF0
        || v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        v13 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
        *(_QWORD *)&v20 = v13;
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
        {
          v14 = v11 & 0xFFFFFFFC | 1;
        }
        else
        {
          if ( (unsigned int)MiIsStoreProcess(v13) )
            return (unsigned int)-1073741401;
          v14 = v11 & 0xFFFFFFFC;
        }
      }
      else
      {
        v14 = v11 & 0xFFFFFFFC | 2;
      }
      DWORD2(v20) = v14;
    }
  }
  v21 = *a5;
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  v16 = (*(_BYTE *)(BugCheckParameter2 + 34) & 0xC0) - 64;
  *a3 = v9;
  LODWORD(v21) = v17 | v21 & 0xFFF90C00 | (v16 != 0 ? 0x20000 : 0) | ((PfnPriority & 7) << 13) | 0xC00;
  *v18 = v21;
  *a4 = v20;
  return v5;
}
