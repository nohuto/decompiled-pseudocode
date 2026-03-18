/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084720
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0019230 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0019C1C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00E1D48 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00E1E0C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  struct _MDL *v6; // rsi
  __int64 v7; // r14
  int v8; // ebp
  VIDMM_MEMORY_SEGMENT *v9; // rcx
  VIDMM_MEMORY_SEGMENT **v10; // rdx
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v17; // rcx
  VIDMM_SEGMENT **v19; // rcx
  PMDL v20; // rax
  __int64 v21; // rcx
  void *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  signed __int32 v25[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v6 = 0LL;
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v7 = *((_QWORD *)a2 + 11);
  if ( !*((_BYTE *)a2 + 80) )
    goto LABEL_4;
  v19 = (VIDMM_SEGMENT **)*((_QWORD *)this + 63);
  if ( v19 )
  {
    v8 = VIDMM_CPU_HOST_APERTURE::MapRange(v19, a2);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(1LL, 1192LL);
      v29 = 0LL;
      v28 = 0LL;
      v27 = 0LL;
      v26 = 1192LL;
      DxgkLogInternalTriageEvent(v21, 0x40000LL);
      goto LABEL_23;
    }
    v20 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            *((VIDMM_CPU_HOST_APERTURE **)this + 63),
            *(void **)(v7 + 16),
            (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 488),
            *((_QWORD *)a2 + 24),
            *((_QWORD *)a2 + 2));
  }
  else
  {
    v22 = *(void **)(v7 + 16);
    v23 = *((_QWORD *)a2 + 24);
    v20 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 436LL) & 8) != 0
        ? VidMmiBuildMdlFromMdl(v22, *((_QWORD *)a2 + 2), *(struct _MDL **)(*((_QWORD *)a2 + 25) + 32LL), v23 / 4096)
        : VidMmiBuildMdlForContiguousMmIo(
            v22,
            *((_QWORD *)a2 + 2),
            (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 25) + 32LL) + v23));
  }
  v6 = v20;
  if ( v20 )
  {
LABEL_4:
    v8 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, a2, v6, 0);
    if ( v8 >= 0 )
    {
      *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
      v9 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
      *((_DWORD *)a2 + 28) = 2;
      *((_QWORD *)a2 + 23) = 0LL;
      *((_BYTE *)a2 + 82) = 1;
      v10 = (VIDMM_MEMORY_SEGMENT **)*((_QWORD *)this + 21);
      if ( *v10 != (VIDMM_MEMORY_SEGMENT *)((char *)this + 160) )
        __fastfail(3u);
      *(_QWORD *)v9 = (char *)this + 160;
      *((_QWORD *)a2 + 51) = v10;
      *v10 = v9;
      *((_QWORD *)this + 21) = v9;
      if ( !*((_DWORD *)a2 + 16)
        || (v11 = VIDMM_SEGMENT::DriverId(this), (v12 & 0x1F) == v11)
        || (v13 = 0, ((v12 >> 6) & 0x1F) == v11) )
      {
        v13 = 0x1000000;
      }
      *((_DWORD *)a2 + 17) = v13 | *((_DWORD *)a2 + 17) & 0xFEFFFFFF;
      if ( v7 && *(_QWORD *)(v7 + 8) )
        VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, v7, (__int64)this, *((_QWORD *)a2 + 2), 0);
      *(_QWORD *)(*((_QWORD *)this + 1) + 40216LL) += *((_QWORD *)a2 + 2) >> 12;
      v14 = *((_QWORD *)this + 1);
      _InterlockedOr(v25, 0);
      ++*(_QWORD *)(v14 + 40);
      v15 = 1584LL * (*((_DWORD *)a2 + 17) & 0x3F);
      *(_QWORD *)(v15 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1560) += *((_QWORD *)a2 + 2);
      for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
            i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
            i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                        + 48LL)
            + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
        *(_QWORD *)(v17 + 232) += *((_QWORD *)a2 + 2);
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 44728LL) += *((_QWORD *)a2 + 2);
      goto LABEL_16;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 1249LL);
    v29 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v26 = 1249LL;
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    v8 = -1073741801;
  }
LABEL_23:
  if ( *((_QWORD *)a2 + 58) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 63), a2);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_16:
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  return (unsigned int)v8;
}
