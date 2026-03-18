/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C008A00C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008A158 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  struct _VIDMM_LOCAL_ALLOC **v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax

  v4 = a3;
  v5 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = *((unsigned int *)a2 + 9);
  if ( !v4 )
  {
    *(_DWORD *)(v5 + 76) |= 1u;
    ++*((_DWORD *)a2 + 18);
    ++*(_DWORD *)(v5 + 396);
  }
  if ( (*((_DWORD *)a2 + 9))-- == 1 )
  {
    v9 = *((_DWORD *)a2 + 19);
    if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 360), -v9) - v9 < 0 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    if ( (*(_DWORD *)(v5 + 76) & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, v4 != 0);
    --*(_DWORD *)(v5 + 288);
    v10 = *((_QWORD *)a2 + 7);
    if ( *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
      || (v11 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8), *v11 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)) )
    {
      __fastfail(3u);
    }
    *v11 = (struct _VIDMM_LOCAL_ALLOC *)v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( *(_DWORD *)(v5 + 112) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL)
                                  + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                      + 48LL)
          + 296LL * (*(_DWORD *)(v5 + 68) & 0x3F);
      v14 = *(_QWORD *)(v5 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 120) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v13 + 240) -= v14;
      else
        *(_QWORD *)(v13 + 232) -= v14;
    }
    v12 = *(_QWORD *)a2;
    if ( (**(_DWORD **)(*(_QWORD *)a2 + 528LL) & 0x20000000) != 0
      && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v12 + 88)
      && (*(_DWORD *)(v12 + 76) & 4) == 0 )
    {
      WdLogSingleEntry5(0LL, 270LL, 26LL, a2, 0LL, 0LL);
    }
    if ( v4 )
    {
      *((_BYTE *)a2 + 32) |= 4u;
      operator delete(a2);
    }
  }
}
