/*
 * XREFs of ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C009C1A8
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BD90 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00ED37C (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION_ADAPTER_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v4 = *((_QWORD *)this + 27);
  v8 = v4 + a3;
  if ( v4 + a3 > *((_QWORD *)this + 26) || v8 < v4 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
      v11[3] = this;
      v11[4] = a3;
      v11[5] = *((_QWORD *)this + 27);
      v12 = *((_QWORD *)this + 26);
      goto LABEL_11;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1001) == 0 )
      return 0LL;
    v9 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( v9 + a3 <= *((_QWORD *)a2 + 2) && v9 + a3 >= v9 )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2, a3, a4);
      v11[3] = this;
      v11[4] = a3;
      v11[5] = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
      v12 = *((_QWORD *)a2 + 2);
LABEL_11:
      v11[6] = v12;
    }
  }
  return 3221225773LL;
}
