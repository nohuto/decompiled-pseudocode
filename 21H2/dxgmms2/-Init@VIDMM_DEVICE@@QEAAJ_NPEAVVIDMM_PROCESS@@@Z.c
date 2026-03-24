/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0083308
 * Callers:
 *     VidMmInitDevice @ 0x1C0012140 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00850BC (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00994D0 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AD0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00123B4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C008365C (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0084384 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, __int64 a2, struct VIDMM_PROCESS *a3)
{
  char v4; // r15
  __int64 v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  __int64 v8; // rcx
  int v9; // ebp
  SIZE_T v10; // rax
  PVOID v11; // rax
  __int64 i; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  bool v17; // cf
  SIZE_T v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // rsi
  unsigned __int64 v24; // rbp
  __int64 v25; // rax
  SIZE_T v26; // rax
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // rsi
  unsigned int v32; // esi
  __int64 v33; // r14
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  SIZE_T v39; // rax
  char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  char *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-28h]
  int v51; // [rsp+20h] [rbp-28h]

  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v45 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v45 + 24) = this;
    *(_QWORD *)(v45 + 32) = *(_QWORD *)this;
  }
  if ( a3 )
  {
    v7 = a3;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v7 = *(VIDMM_PROCESS **)(v6 + 8);
    else
      v7 = 0LL;
  }
  else
  {
    v7 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40384LL);
  }
  *((_QWORD *)this + 1) = v7;
  if ( !v7 )
  {
    v46 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v46 + 24) = 368LL;
    WdLogEvent5_WdAssertion(v46);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v9 = VIDMM_PROCESS::OpenAdapter(v7, *(struct VIDMM_GLOBAL **)this);
    if ( v9 < 0 )
    {
      _InterlockedAdd(&dword_1C0050698, 1u);
      v47 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v47 + 24) = 384LL;
      WdLogEvent5_WdLowResource(v47);
      return (unsigned int)v9;
    }
    *((_BYTE *)this + 50) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 232LL));
  }
  v10 = 56LL * *((unsigned int *)this + 14);
  if ( !is_mul_ok(*((unsigned int *)this + 14), 0x38uLL) )
    v10 = -1LL;
  v11 = operator new[](v10, 0x30326956u, PagedPool);
  *((_QWORD *)this + 5) = v11;
  if ( !v11 )
  {
    _InterlockedAdd(&dword_1C005069C, 1u);
    v48 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v48 + 24) = 401LL;
    WdLogEvent5_WdLowResource(v48);
    return 3221225495LL;
  }
  memset(v11, 0, 56LL * *((unsigned int *)this + 14));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); *v14 = v14 )
  {
    v13 = 56LL * (unsigned int)i;
    i = (unsigned int)(i + 1);
    v14 = (_QWORD *)(v13 + *((_QWORD *)this + 5) + 32LL);
    v14[1] = v14;
  }
  if ( !*((_QWORD *)this + 3) && a3 )
    goto LABEL_38;
  v15 = *((unsigned int *)this + 15);
  v16 = 176 * v15;
  if ( !is_mul_ok(v15, 0xB0uLL) )
    v16 = -1LL;
  v17 = __CFADD__(v16, 8LL);
  v18 = v16 + 8;
  if ( v17 )
    v18 = -1LL;
  v19 = (char *)operator new(v18, 0x38346956u, i, PagedPool);
  if ( v19 )
  {
    v23 = v19 + 8;
    *(_QWORD *)v19 = v15;
    `vector constructor iterator'(
      v19 + 8,
      176LL,
      (unsigned int)v15,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v23 = 0LL;
  }
  *((_QWORD *)this + 9) = v23;
  if ( !v23 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v21, v20, v22);
    *(_QWORD *)(v49 + 24) = 427LL;
    goto LABEL_60;
  }
  v24 = *((unsigned int *)this + 15);
  v25 = 176 * v24;
  if ( !is_mul_ok(v24, 0xB0uLL) )
    v25 = -1LL;
  v17 = __CFADD__(v25, 8LL);
  v26 = v25 + 8;
  if ( v17 )
    v26 = -1LL;
  v27 = (char *)operator new(v26, 0x38346956u, v22, PagedPool);
  if ( v27 )
  {
    v31 = v27 + 8;
    *(_QWORD *)v27 = v24;
    `vector constructor iterator'(
      v27 + 8,
      176LL,
      (unsigned int)v24,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v31 = 0LL;
  }
  *((_QWORD *)this + 10) = v31;
  if ( !v31 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v29, v28, v30);
    *(_QWORD *)(v49 + 24) = 434LL;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 96LL) & 2) != 0 )
  {
    v37 = *((unsigned int *)this + 15);
    v38 = 176 * v37;
    if ( !is_mul_ok(v37, 0xB0uLL) )
      v38 = -1LL;
    v17 = __CFADD__(v38, 8LL);
    v39 = v38 + 8;
    if ( v17 )
      v39 = -1LL;
    v40 = (char *)operator new(v39, 0x38346956u, v30, PagedPool);
    if ( v40 )
    {
      v44 = v40 + 8;
      *(_QWORD *)v40 = v37;
      `vector constructor iterator'(
        v40 + 8,
        176LL,
        (unsigned int)v37,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v44 = 0LL;
    }
    *((_QWORD *)this + 11) = v44;
    if ( !v44 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v42, v41, v43);
      *(_QWORD *)(v49 + 24) = 450LL;
LABEL_60:
      WdLogEvent5_WdAssertion(v49);
      return 3221225495LL;
    }
  }
  v32 = 0;
  if ( *((_DWORD *)this + 15) )
  {
    while ( 1 )
    {
      v33 = 176LL * v32;
      LOBYTE(v50) = v4;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v33 + *((_QWORD *)this + 9), this, v32, 1LL, v50);
      if ( (int)result < 0 )
        break;
      LOBYTE(v51) = v4;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v33 + *((_QWORD *)this + 10), this, v32, 2LL, v51);
      if ( (int)result < 0 )
        break;
      v35 = *((_QWORD *)this + 11);
      if ( v35 )
      {
        LOBYTE(v50) = v4;
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v33 + v35, this, v32, 3LL, v50);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v32 >= *((_DWORD *)this + 15) )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v36 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 28) = qword_1C0050458 + v36 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
