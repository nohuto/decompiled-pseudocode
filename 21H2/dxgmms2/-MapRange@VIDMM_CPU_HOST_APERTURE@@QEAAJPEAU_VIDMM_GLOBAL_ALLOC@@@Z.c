/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0019C1C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084720 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00D53E0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0019DFC (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00D937C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(VIDMM_SEGMENT **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  void *v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  VIDMM_SEGMENT *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  VIDMM_SEGMENT *v19; // rdx
  VIDMM_SEGMENT *v20; // rcx
  __int64 result; // rax
  _QWORD *v22; // r14
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v24; // [rsp+38h] [rbp-40h]
  __int16 v25; // [rsp+3Ah] [rbp-3Eh]
  int v26; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  void *v28; // [rsp+48h] [rbp-30h]
  _QWORD *v29; // [rsp+50h] [rbp-28h]

  if ( *((_QWORD *)a2 + 58) )
    WdLogSingleEntry5(0LL, 270LL, 44LL, this, a2, 0LL);
  v4 = *((_DWORD *)this[6] + 94);
  v5 = *((unsigned int *)this[5] + *((unsigned int *)a2 + 123));
  v6 = v5;
  v7 = 4 * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v7 = -1LL;
  v8 = (void *)operator new[](v7, 0x36346956u, 258LL);
  if ( !v8 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  v9 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v9 = -1LL;
  v10 = (_QWORD *)operator new[](v9, 0x36346956u, 258LL);
  if ( !v10 )
  {
    WdLogSingleEntry0(3LL);
    ExFreePoolWithTag(v8, 0);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    (VIDMM_CPU_HOST_APERTURE *)this,
    (unsigned int *)v8,
    (unsigned int)v5,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 488));
  if ( *((_QWORD *)a2 + 15) )
    v11 = *((_QWORD *)a2 + 16);
  else
    v11 = *((_QWORD *)a2 + 24);
  v12 = v11 / v4;
  v13 = v10;
  v14 = v5 + v12;
  while ( v12 < v14 )
    *v13++ = v12++;
  v15 = *((_QWORD *)a2 + 66);
  v26 = 0;
  v23 = *(_QWORD *)(v15 + 40);
  v16 = this[6];
  v27 = v5;
  v28 = v8;
  v29 = v10;
  v24 = VIDMM_SEGMENT::DriverId(v16);
  v25 = *(_WORD *)(v17 + 380);
  v18 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[51])(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL) + 2800LL),
          &v23);
  v19 = *this;
  v20 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 472);
  if ( *((VIDMM_SEGMENT ***)*this + 1) != this )
    __fastfail(3u);
  *(_QWORD *)v20 = v19;
  *((_QWORD *)a2 + 60) = this;
  *((_QWORD *)v19 + 1) = v20;
  *this = v20;
  if ( v18 < 0 )
    WdLogSingleEntry5(0LL, 270LL, 45LL, this, a2, &v23);
  if ( *(_QWORD *)(*((_QWORD *)this[6] + 1) + 41024LL) && (_DWORD)v5 )
  {
    v22 = v10;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*((_QWORD *)this[6] + 1), v24, *v22++, 1LL, 2, 0LL, v23);
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(v10, 0);
  result = 0LL;
  *((_QWORD *)a2 + 58) = v8;
  return result;
}
