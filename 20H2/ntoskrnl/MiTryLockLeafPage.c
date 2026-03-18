/*
 * XREFs of MiTryLockLeafPage @ 0x14034D840
 * Callers:
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14034F510 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiMakeTransitionHeatBatch @ 0x14055DFA0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiTryLockLeafPage(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  *a3 = 0LL;
  v3 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *v3;
      v5 = *v3;
      if ( (*v3 & 1) != 0 )
        goto LABEL_8;
      if ( (*v3 & 0xC00) != 0x800 )
        return 3221226548LL;
      if ( MiInvalidPteConforms(v4) )
      {
        v5 = v4;
        if ( qword_140C4DDC0 )
        {
          if ( (v4 & 0x10) == 0 )
            v5 = v4 & ~qword_140C4DDC0;
        }
LABEL_8:
        v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFLL);
        if ( ((*(_QWORD *)(v6 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
          break;
      }
    }
    v7 = v6 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 - 0x58000000000LL + 24), 0x3FuLL) )
      return 3221225557LL;
    if ( *v3 == v4 )
    {
      *a3 = v7;
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
