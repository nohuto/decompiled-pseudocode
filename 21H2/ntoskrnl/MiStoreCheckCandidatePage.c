/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14026865C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiIsStoreProcess @ 0x14026A4B0 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x14026A4F0 (MiGetTopLevelPfn.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
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
  int v12; // edi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char PfnPriority; // al
  char v19; // cl
  int v20; // r9d
  _QWORD *v21; // r8
  __int128 v23; // [rsp+20h] [rbp-10h]
  __int64 v24; // [rsp+60h] [rbp+30h]

  v5 = 0;
  *(_QWORD *)&v23 = 0LL;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140C4E648
                                                           + 8
                                                           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
                                               + 1156LL) << 60);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v23 + 1) = 3LL;
    goto LABEL_22;
  }
  v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( (unsigned int)MiGetSystemRegionType(v10) == 5 )
  {
    *(_QWORD *)&v23 = v10 - 1432;
    *((_QWORD *)&v23 + 1) = 0xFFFFF6FB7DBED000uLL;
LABEL_22:
    v24 = *a5;
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v19 = (*(_BYTE *)(BugCheckParameter2 + 34) & 0xC0) - 64;
    *a3 = v9;
    LODWORD(v24) = v20 | v24 & 0xFFF90C00 | (v19 != 0 ? 0x20000 : 0) | ((PfnPriority & 7) << 13) | 0xC00;
    *v21 = v24;
    *a4 = v23;
    return v5;
  }
  v11 = (__int64)(v10 << 25) >> 16;
  HIDWORD(v23) = HIDWORD(v11);
  if ( (unsigned int)MiGetSystemRegionType(v11) != 1
    && v11 > 0x7FFFFFFEFFFFLL
    && (v11 < qword_140C4FB38 || v11 > qword_140C4E368)
    && (v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v12 = v11 & 0xFFFFFFFC | 2;
    goto LABEL_21;
  }
  TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
  if ( TopLevelPfn != BugCheckParameter2 )
  {
    v14 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    *(_QWORD *)&v23 = v14;
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    {
      v12 = v11 & 0xFFFFFFFC | 1;
    }
    else
    {
      if ( (unsigned int)MiIsStoreProcess(v14, v15, v16, v17) )
        return (unsigned int)-1073741401;
      v12 = v11 & 0xFFFFFFFC;
    }
LABEL_21:
    DWORD2(v23) = v12;
    goto LABEL_22;
  }
  return (unsigned int)-1073741253;
}
