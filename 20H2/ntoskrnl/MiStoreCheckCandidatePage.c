/*
 * XREFs of MiStoreCheckCandidatePage @ 0x1403425E4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x140341C10 (MiGetTopLevelPfn.c)
 *     MiIsStoreProcess @ 0x140341D60 (MiIsStoreProcess.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v17; // r14
  char PfnPriority; // al
  char v19; // cl
  int v20; // r9d
  _QWORD *v21; // r8
  __int128 v23; // [rsp+20h] [rbp-10h]
  __int64 v24; // [rsp+60h] [rbp+30h]

  v5 = 0;
  *(_QWORD *)&v23 = 0LL;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140C4E4C8
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
    && (v11 < qword_140C4F9B8 || v11 > qword_140C4E1E8)
    && (v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v15 = v11 & 0xFFFFFFFC | 2;
    goto LABEL_21;
  }
  TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2, v12, v13, v14);
  if ( TopLevelPfn != BugCheckParameter2 )
  {
    v17 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    *(_QWORD *)&v23 = v17;
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    {
      v15 = v11 & 0xFFFFFFFC | 1;
    }
    else
    {
      if ( (unsigned int)MiIsStoreProcess(v17) )
        return (unsigned int)-1073741401;
      v15 = v11 & 0xFFFFFFFC;
    }
LABEL_21:
    DWORD2(v23) = v15;
    goto LABEL_22;
  }
  return (unsigned int)-1073741253;
}
