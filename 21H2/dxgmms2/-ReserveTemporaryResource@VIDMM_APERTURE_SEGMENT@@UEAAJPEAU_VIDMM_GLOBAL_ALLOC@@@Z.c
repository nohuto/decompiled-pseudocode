/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E83A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ReserveTemporaryResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  _QWORD *v19; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = a2;
  }
  if ( *((_QWORD *)a2 + 2) > (unsigned __int64)this[6] )
    return 3223191808LL;
  if ( ((_DWORD)this[10] & 0x20) != 0 )
    WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  LOBYTE(v12) = 1;
  v13 = VIDMM_LINEAR_POOL::Allocate(
          this[19],
          *((_QWORD *)a2 + 2),
          *((unsigned int *)a2 + 8),
          v12,
          0LL,
          0LL,
          0,
          0,
          a2,
          (union _LARGE_INTEGER *)a2 + 29,
          (void **)a2 + 28);
  v18 = v13;
  if ( v13 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v13;
  }
  else
  {
    *((_QWORD *)a2 + 30) = this;
    if ( g_IsInternalReleaseOrDbg )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v14, v16, v17);
      v19[3] = *((_QWORD *)a2 + 28);
      v19[4] = *((int *)a2 + 59);
      v19[5] = *((unsigned int *)a2 + 58);
    }
  }
  return v18;
}
