/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0028A24
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C006DE20 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00AF000 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C002937C (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029408 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0084CE4 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0084D04 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B467C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rax
  struct _VIDMM_GLOBAL_ALLOC *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // edi
  VIDMM_CPU_HOST_APERTURE *v13; // r15
  VIDMM_CPU_HOST_APERTURE *v14; // r14
  VIDMM_CPU_HOST_APERTURE *v15; // rcx
  _QWORD *v16; // rax
  char *v18; // r13
  __int64 v19; // rbp
  VIDMM_PROCESS *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r12
  VIDMM_PROCESS *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v30; // [rsp+50h] [rbp-78h]
  struct _KAPC_STATE v31; // [rsp+58h] [rbp-70h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = a2;
  v5 = (unsigned int)(*(_DWORD *)(v3 + 376) - 1);
  if ( *((_QWORD *)a2 + 27) )
    v6 = *((_QWORD *)a2 + 26);
  else
    v6 = *((_QWORD *)a2 + 17);
  v7 = *(unsigned int *)(v3 + 376);
  v8 = *((_DWORD *)this + 15);
  v9 = v6 & ~v5;
  v10 = (~v5 & (unsigned __int64)(v5 + v6 + *((_QWORD *)a2 + 2) - v9)) / v7;
  v11 = (~v5 & (unsigned __int64)(v5 + v6 + *((_QWORD *)a2 + 2) - v9)) % v7;
  v12 = v10;
  if ( v8 < (unsigned int)v10 )
  {
    v13 = (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16);
    v14 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    v15 = v14;
    if ( v14 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
LABEL_9:
      if ( v8 < (unsigned int)v10 )
      {
        *((_DWORD *)v4 + 116) = -1;
        *((_DWORD *)v4 + 117) = -1;
        v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v11);
        v16[3] = v12;
        v16[4] = v8;
        v16[5] = v7;
        WdLogEvent5_WdEvent(v16);
        return 3221225495LL;
      }
    }
    else
    {
      v11 = *((_QWORD *)this + 5);
      while ( 1 )
      {
        v8 += *(_DWORD *)(v11 + 4LL * *((unsigned int *)v15 + 5));
        if ( v8 >= (unsigned int)v10 )
          break;
        v15 = *(VIDMM_CPU_HOST_APERTURE **)v15;
        if ( v15 == v13 )
          goto LABEL_9;
      }
    }
    if ( v14 != v13 )
    {
      do
      {
        v18 = (char *)v14 - 448;
        v14 = *(VIDMM_CPU_HOST_APERTURE **)v14;
        v19 = *((_QWORD *)v18 + 12);
        if ( v19 && (*(_BYTE *)(v19 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v15);
          v20 = *(VIDMM_PROCESS **)(v19 + 8);
          memset(&v31, 0, sizeof(v31));
          VIDMM_PROCESS::SafeAttach(v20, &v31);
          v21 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL),
                  *(_QWORD *)(*(_QWORD *)(v19 + 8) + 24LL),
                  *(_QWORD *)(v19 + 24),
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v18);
          v23 = v21;
          v24 = (VIDMM_PROCESS *)(v21 + 0x80000000);
          if ( ((unsigned int)v24 & 0x80000000) == 0 && v21 != -1073741558 )
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v22);
            v25[7] = 0LL;
            v25[3] = 270LL;
            v25[4] = 4LL;
            v25[5] = 3LL;
            v25[6] = v23;
            WdLogEvent5_WdCriticalError(v25);
          }
          *(_BYTE *)(v19 + 32) &= ~1u;
          VIDMM_PROCESS::SafeDetach(v24, &v31);
        }
        VIDMM_CPU_HOST_APERTURE::UnmapRange(this, (struct _VIDMM_GLOBAL_ALLOC *)v18);
        VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(this, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v18 + 464));
      }
      while ( *((_DWORD *)this + 15) < v12 && v14 != v13 );
      v4 = a2;
    }
  }
  v26 = *((unsigned int *)this + 16);
  v27 = v12 - 1;
  LODWORD(v30) = *((_DWORD *)this + 16);
  if ( v12 != 1 )
  {
    do
    {
      v26 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v26);
      --v27;
    }
    while ( v27 );
  }
  v28 = *((_QWORD *)this + 5);
  HIDWORD(v30) = v26;
  *((_DWORD *)this + 16) = *(_DWORD *)(v28 + 4 * v26);
  *(_DWORD *)(v28 + 4LL * (unsigned int)v26) = v12;
  *((_DWORD *)this + 15) -= v12;
  *((_QWORD *)v4 + 58) = v30;
  return 0LL;
}
