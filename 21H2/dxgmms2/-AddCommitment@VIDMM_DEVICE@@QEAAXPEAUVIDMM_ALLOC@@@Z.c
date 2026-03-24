/*
 * XREFs of ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006F9A0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B2DE0 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FA80 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 */

void __fastcall VIDMM_DEVICE::AddCommitment(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v4; // rsi
  VIDMM_PROCESS *v5; // r14
  unsigned int *v6; // rbp
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax

  v4 = **a2;
  v5 = (VIDMM_PROCESS *)(*a2)[1];
  v6 = *(unsigned int **)(v4 + 128);
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = this;
  }
  v7 = a2 + 7;
  v8 = *((_QWORD *)this + 5) + 56LL * v6[5];
  ++*(_DWORD *)v8;
  *(_QWORD *)(v8 + 8) += *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v8 + 48) = this;
  v9 = *(__int64 **)(v8 + 40);
  if ( *v9 != v8 + 32 )
    __fastfail(3u);
  a2[8] = v9;
  *v7 = v8 + 32;
  *v9 = (__int64)v7;
  *(_QWORD *)(v8 + 40) = v7;
  VIDMM_PROCESS::AddCommitment(
    v5,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v8,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 232LL),
    (struct VIDMM_SEGMENT *)v6,
    *(_DWORD *)v8 == 1,
    (struct _VIDMM_GLOBAL_ALLOC *)v4);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
  ++*(_DWORD *)(v4 + 152);
  *((_DWORD *)a2 + 7) |= 0x10u;
}
