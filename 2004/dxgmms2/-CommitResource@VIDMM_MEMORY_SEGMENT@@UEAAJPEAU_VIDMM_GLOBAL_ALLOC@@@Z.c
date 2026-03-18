/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00620B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001208 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0028F54 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029224 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029648 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0062280 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00BD6CC (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00BD790 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rax
  VIDMM_MEMORY_SEGMENT *v9; // rax
  VIDMM_MEMORY_SEGMENT **v10; // rdx
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  VIDMM_GLOBAL *v14; // rcx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v16; // rcx
  VIDMM_SEGMENT **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  PMDL v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = 0LL;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  v5 = *((_QWORD *)a2 + 12);
  if ( (*((_DWORD *)a2 + 21) & 0x20) == 0 )
  {
LABEL_4:
    v7 = VIDMM_MEMORY_SEGMENT::TransferToSegment((VIDMM_MEMORY_SEGMENT *)this, a2, v4, 0);
    goto LABEL_5;
  }
  v18 = (VIDMM_SEGMENT **)this[61];
  if ( !v18 )
  {
    v27 = *(void **)(v5 + 16);
    v28 = *((_QWORD *)a2 + 26);
    if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 348LL) & 8) != 0 )
      v23 = VidMmiBuildMdlFromMdl(v27, *((_QWORD *)a2 + 2), *(struct _MDL **)(*((_QWORD *)a2 + 27) + 32LL), v28 / 4096);
    else
      v23 = VidMmiBuildMdlForContiguousMmIo(
              v27,
              *((_QWORD *)a2 + 2),
              (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 27) + 32LL) + v28));
LABEL_24:
    v4 = v23;
    if ( !v23 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26);
      *(_QWORD *)(v29 + 24) = 1234LL;
      WdLogEvent5_WdAssertion(v29);
      v7 = -1073741801;
      goto LABEL_26;
    }
    goto LABEL_4;
  }
  v7 = VIDMM_CPU_HOST_APERTURE::MapRange(v18, a2);
  if ( v7 >= 0 )
  {
    v23 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            this[61],
            *(void **)(v5 + 16),
            (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 464),
            *((_QWORD *)a2 + 26),
            *((_QWORD *)a2 + 2));
    goto LABEL_24;
  }
  v22 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
  *(_QWORD *)(v22 + 24) = 1177LL;
  WdLogEvent5_WdAssertion(v22);
LABEL_5:
  if ( v7 >= 0 )
  {
    v8 = *((_QWORD *)a2 + 25);
    *((_QWORD *)a2 + 25) = 0LL;
    *((_QWORD *)a2 + 18) = v8;
    v9 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376);
    *((_DWORD *)a2 + 30) = 2;
    *((_BYTE *)a2 + 89) = 1;
    v10 = (VIDMM_MEMORY_SEGMENT **)this[21];
    if ( *v10 != (VIDMM_MEMORY_SEGMENT *)(this + 20) )
      __fastfail(3u);
    *(_QWORD *)v9 = this + 20;
    *((_QWORD *)a2 + 48) = v10;
    *v10 = v9;
    this[21] = v9;
    if ( !*((_DWORD *)a2 + 18)
      || (v11 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this), (v12 & 0x1F) == v11)
      || ((v12 >> 6) & 0x1F) == v11 )
    {
      v13 = 0x800000;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)a2 + 19) = v13 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
    if ( v5 && *(_QWORD *)(v5 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v5, (__int64)this, *((_QWORD *)a2 + 2), 0);
    *((_QWORD *)this[1] + 5026) += *((_QWORD *)a2 + 2) >> 12;
    v14 = this[1];
    _InterlockedOr(v30, 0);
    ++*((_QWORD *)v14 + 5);
    v6 = 1584LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v6 + *((_QWORD *)this[1] + 5027) + 1560) += *((_QWORD *)a2 + 2);
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v6 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 232LL);
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v6) + 48LL)
          + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
      *(_QWORD *)(v16 + 232) += *((_QWORD *)a2 + 2);
    }
    goto LABEL_16;
  }
LABEL_26:
  if ( *((_QWORD *)a2 + 55) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[61], a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_16:
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v6);
  return (unsigned int)v7;
}
