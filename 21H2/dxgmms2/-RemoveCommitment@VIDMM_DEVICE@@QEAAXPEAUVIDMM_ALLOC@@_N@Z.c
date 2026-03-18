/*
 * XREFs of ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0B78
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0970 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00A0A9C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5758 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085748 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A0C94 (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPE.c)
 */

void __fastcall VIDMM_DEVICE::RemoveCommitment(VIDMM_DEVICE *this, __int64 ***a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 *v7; // rbp
  VIDMM_PROCESS *v8; // r15
  struct VIDMM_SEGMENT *v9; // r9
  __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 **v12; // rcx
  __int64 v13; // rdx
  __int64 **v14; // rax
  __int64 v15; // rax
  __int64 **v16; // rcx
  __int64 v17; // rax

  v4 = a3;
  v7 = **a2;
  v8 = (VIDMM_PROCESS *)(*a2)[1];
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = this;
  }
  if ( (*((_DWORD *)v7 + 17) & 0x40000000) != 0 )
  {
    v10 = v7[9] & 0x1F;
    v9 = *(struct VIDMM_SEGMENT **)(*(_QWORD *)(*(_QWORD *)this + 3712LL) + 8 * v10);
  }
  else
  {
    v9 = (struct VIDMM_SEGMENT *)v7[15];
    LODWORD(v10) = *((_DWORD *)v9 + 5);
  }
  v11 = (__int64 *)(a2 + 7);
  v12 = a2[7];
  v13 = *((_QWORD *)this + 5) + 56LL * (unsigned int)v10;
  if ( v12[1] != (__int64 *)(a2 + 7) )
    goto LABEL_13;
  v14 = a2[8];
  if ( *v14 != v11 )
    goto LABEL_13;
  *v14 = (__int64 *)v12;
  v12[1] = (__int64 *)v14;
  --*(_DWORD *)v13;
  *(_QWORD *)(v13 + 8) -= v7[2];
  *v11 = 0LL;
  a2[8] = 0LL;
  VIDMM_PROCESS::RemoveCommitment(
    v8,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v13,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL),
    v9,
    *(_DWORD *)v13 == 0,
    (struct _VIDMM_GLOBAL_ALLOC *)v7);
  --*((_DWORD *)v7 + 36);
  *((_DWORD *)a2 + 7) &= 0xFFFFFFEC;
  if ( dword_1C006E4F4 )
    VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(*(VIDMM_GLOBAL **)this, (VIDMM_PROCESS ***)a2);
  if ( v4 )
  {
    v15 = *(_QWORD *)this + 3720LL;
    v16 = *(__int64 ***)(*(_QWORD *)this + 3728LL);
    if ( *v16 == (__int64 *)v15 )
    {
      *v11 = v15;
      a2[8] = v16;
      *v16 = v11;
      *(_QWORD *)(v15 + 8) = v11;
      return;
    }
LABEL_13:
    __fastfail(3u);
  }
}
