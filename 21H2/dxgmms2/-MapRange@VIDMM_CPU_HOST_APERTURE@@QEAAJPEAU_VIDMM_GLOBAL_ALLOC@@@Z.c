/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029244
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064490 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00AE120 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00290E8 (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B2E54 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(VIDMM_SEGMENT **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  SIZE_T v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // r15
  __int64 v12; // rax
  __int64 result; // rax
  SIZE_T v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  VIDMM_SEGMENT *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  VIDMM_SEGMENT *v28; // rdx
  VIDMM_SEGMENT *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v33; // [rsp+38h] [rbp-40h]
  __int16 v34; // [rsp+3Ah] [rbp-3Eh]
  int v35; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v36; // [rsp+40h] [rbp-38h]
  PVOID v37; // [rsp+48h] [rbp-30h]
  _QWORD *v38; // [rsp+50h] [rbp-28h]

  if ( *((_QWORD *)a2 + 57) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[7] = 0LL;
    v4[3] = 270LL;
    v4[4] = 44LL;
    v4[5] = this;
    v4[6] = a2;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = *((unsigned int *)this[6] + 94);
  v6 = *((unsigned int *)this[5] + *((unsigned int *)a2 + 121));
  v7 = v6;
  v8 = 4 * v6;
  if ( !is_mul_ok(v6, 4uLL) )
    v8 = -1LL;
  v11 = operator new[](v8, 0x36346956u, PagedPool);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdWarning(v10, v9);
    WdLogEvent5_WdWarning(v12);
    return 3221225495LL;
  }
  v14 = 8 * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v14 = -1LL;
  v17 = operator new[](v14, 0x36346956u, PagedPool);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15);
    WdLogEvent5_WdWarning(v18);
    ExFreePoolWithTag(v11, 0);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    (unsigned __int64)this,
    (unsigned int *)v11,
    v6,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 480));
  if ( *((_QWORD *)a2 + 16) )
    v19 = *((_QWORD *)a2 + 17);
  else
    v19 = *((_QWORD *)a2 + 26);
  v20 = v19 / v5;
  v21 = v17;
  v22 = v6 + v20;
  while ( v20 < v22 )
    *v21++ = v20++;
  v35 = 0;
  v23 = *((_QWORD *)a2 + 5);
  if ( v23 )
    v24 = *(_QWORD *)(v23 + 16);
  else
    v24 = *((_QWORD *)a2 + 6);
  v25 = this[6];
  v32 = v24;
  v36 = v6;
  v37 = v11;
  v38 = v17;
  v33 = VIDMM_SEGMENT::DriverId(v25);
  v34 = *(_WORD *)(v26 + 380);
  v27 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[50])(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 24LL) + 2704LL),
          &v32);
  v28 = *this;
  v29 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 464);
  if ( *((VIDMM_SEGMENT ***)*this + 1) != this )
    __fastfail(3u);
  *(_QWORD *)v29 = v28;
  *((_QWORD *)a2 + 59) = this;
  *((_QWORD *)v28 + 1) = v29;
  *this = v29;
  if ( v27 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28);
    v30[7] = &v32;
    v30[3] = 270LL;
    v30[4] = 45LL;
    v30[5] = this;
    v30[6] = a2;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( *(_QWORD *)(*((_QWORD *)this[6] + 1) + 41024LL) && (_DWORD)v6 )
  {
    v31 = v17;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*((_QWORD *)this[6] + 1), v33, *v31++, 1LL, 2, 0LL, v32);
      --v7;
    }
    while ( v7 );
  }
  ExFreePoolWithTag(v17, 0);
  result = 0LL;
  *((_QWORD *)a2 + 57) = v11;
  return result;
}
