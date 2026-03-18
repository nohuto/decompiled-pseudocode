/*
 * XREFs of ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00D7DE0
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0093640 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00E1D48 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00E1E0C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi
  bool v5; // zf
  void *v6; // rcx
  __int64 v7; // r9
  struct _MDL *v8; // r8
  struct _MDL *v9; // rax
  struct _MDL *v10; // rsi
  int v12; // ebp

  v2 = *a2;
  v4 = **a2;
  v5 = (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) == 0;
  v6 = (void *)(*a2)[2];
  v7 = *(_QWORD *)(v4 + 128);
  v8 = *(struct _MDL **)(*(_QWORD *)(v4 + 120) + 32LL);
  if ( v5 )
    v9 = VidMmiBuildMdlForContiguousMmIo(v6, *(_QWORD *)(v4 + 8), (union _LARGE_INTEGER)((char *)v8 + v7));
  else
    v9 = VidMmiBuildMdlFromMdl(v6, *(_QWORD *)(v4 + 16), v8, v7 / 4096);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  v12 = VIDMM_GLOBAL::Rotate(
          (__int64)this,
          *(_QWORD *)(v2[1] + 24),
          v2[3],
          1u,
          (__int64)v9,
          *(_QWORD *)(v4 + 16),
          0LL,
          0LL,
          0,
          v4);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    *((_BYTE *)v2 + 32) |= 1u;
    *(_BYTE *)(v4 + 83) = 1;
  }
  return (unsigned int)v12;
}
