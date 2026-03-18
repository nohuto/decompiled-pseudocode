/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A46C
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BCF0 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00D53E0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C001A5CC (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CDC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CFC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(unsigned __int64 this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  _QWORD *v13; // r15
  _QWORD *v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // r13
  __int64 v18; // rbp
  VIDMM_PROCESS *v19; // rcx
  int v20; // eax
  VIDMM_PROCESS *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE v23; // [rsp+58h] [rbp-60h] BYREF

  v2 = this;
  v3 = *(_QWORD *)(this + 48);
  v5 = (unsigned int)(*(_DWORD *)(v3 + 376) - 1);
  if ( *((_QWORD *)a2 + 25) )
    v6 = *((_QWORD *)a2 + 24);
  else
    v6 = *((_QWORD *)a2 + 16);
  v7 = *(unsigned int *)(v3 + 376);
  LODWORD(this) = *(_DWORD *)(this + 60);
  v8 = (~v5 & (v5 + v6 + *((_QWORD *)a2 + 2) - (v6 & (unsigned __int64)~v5))) / v7;
  if ( (unsigned int)this < (unsigned int)v8 )
  {
    v13 = (_QWORD *)(v2 + 16);
    v14 = *(_QWORD **)(v2 + 16);
    v15 = v14;
    if ( v14 == (_QWORD *)(v2 + 16) )
    {
LABEL_12:
      *((_DWORD *)a2 + 122) = -1;
      *((_DWORD *)a2 + 123) = -1;
      WdLogSingleEntry3(4LL, (unsigned int)v8, (unsigned int)this, v7);
      return 3221225495LL;
    }
    v16 = *(_QWORD *)(v2 + 40);
    while ( 1 )
    {
      this = (unsigned int)(*(_DWORD *)(v16 + 4LL * *((unsigned int *)v15 + 5)) + this);
      if ( (unsigned int)this >= (unsigned int)v8 )
        break;
      v15 = (_QWORD *)*v15;
      if ( v15 == v13 )
        goto LABEL_12;
    }
    do
    {
      v17 = v14 - 59;
      v14 = (_QWORD *)*v14;
      v18 = v17[11];
      if ( v18 && (*(_BYTE *)(v18 + 32) & 1) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(this, v15, v16, v5);
        v19 = *(VIDMM_PROCESS **)(v18 + 8);
        memset(&v23, 0, sizeof(v23));
        VIDMM_PROCESS::SafeAttach(v19, &v23);
        v20 = VIDMM_GLOBAL::Rotate(
                *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8LL),
                *(_QWORD *)(*(_QWORD *)(v18 + 8) + 24LL),
                *(_QWORD *)(v18 + 24),
                3LL,
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                v17);
        v21 = (VIDMM_PROCESS *)(v20 + 0x80000000);
        if ( (int)v21 >= 0 && v20 != -1073741558 )
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v20, 0LL);
        *(_BYTE *)(v18 + 32) &= ~1u;
        VIDMM_PROCESS::SafeDetach(v21, &v23);
      }
      VIDMM_CPU_HOST_APERTURE::UnmapRange((VIDMM_CPU_HOST_APERTURE *)v2, (struct _VIDMM_GLOBAL_ALLOC *)v17);
      VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(
        (VIDMM_CPU_HOST_APERTURE *)v2,
        (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v17 + 61));
    }
    while ( *(_DWORD *)(v2 + 60) < (unsigned int)v8 && v14 != v13 );
  }
  v9 = *(unsigned int *)(v2 + 64);
  v10 = v8 - 1;
  LODWORD(v22) = *(_DWORD *)(v2 + 64);
  if ( (_DWORD)v8 != 1 )
  {
    do
    {
      v9 = *(unsigned int *)(*(_QWORD *)(v2 + 40) + 4 * v9);
      --v10;
    }
    while ( v10 );
  }
  v11 = *(_QWORD *)(v2 + 40);
  HIDWORD(v22) = v9;
  *(_DWORD *)(v2 + 64) = *(_DWORD *)(v11 + 4 * v9);
  *(_DWORD *)(v11 + 4LL * (unsigned int)v9) = v8;
  *(_DWORD *)(v2 + 60) -= v8;
  *((_QWORD *)a2 + 61) = v22;
  return 0LL;
}
