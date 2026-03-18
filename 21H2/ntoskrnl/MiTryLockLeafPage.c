/*
 * XREFs of MiTryLockLeafPage @ 0x1402708F4
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14026FA0C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiMakeTransitionHeatBatch @ 0x1405B7B38 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiTryLockLeafPage(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx

  v4 = (unsigned int)a2;
  v5 = a1;
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  *a3 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *v5;
      if ( (*v5 & 1) != 0 )
        goto LABEL_8;
      if ( (*v5 & 0xC00) != 0x800 )
        return 3221226548LL;
      if ( (unsigned int)MiInvalidPteConforms(v7, a2, v5, v4) )
      {
        v8 = v7;
        if ( qword_140C50780 && (v7 & 0x10) == 0 )
          v8 = v7 & ~qword_140C50780;
LABEL_8:
        a2 = 0xFFFFFFFFFFLL;
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140C50840 )
        {
          a2 = 6 * v9;
          if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
    }
    v10 = 48 * v9 - 0x220000000000LL;
    a2 = v4 & 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      return 3221225557LL;
    if ( *v5 == v7 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) == 0 )
  {
LABEL_13:
    *a3 = v10;
    return 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    MiLockSpecialPurposeMemoryCachedPage(v10, (unsigned int)a2 | 2);
    goto LABEL_13;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  return 3221225557LL;
}
