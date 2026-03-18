/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0099438
 * Callers:
 *     VidMmInitDevice @ 0x1C0013810 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C009B500 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B8348 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001430C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0099788 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, __int64 a2, struct VIDMM_PROCESS *a3, __int64 a4)
{
  char v5; // r15
  __int64 v7; // rcx
  VIDMM_PROCESS *v8; // rcx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int i; // r8d
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  bool v17; // cf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // esi
  __int64 v27; // r14
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+20h] [rbp-58h]

  v5 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v36 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v36 + 24) = this;
    *(_QWORD *)(v36 + 32) = *(_QWORD *)this;
  }
  if ( a3 )
  {
    v8 = a3;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v7 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v8 = *(VIDMM_PROCESS **)(v7 + 8);
    else
      v8 = 0LL;
  }
  else
  {
    v8 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40384LL);
  }
  *((_QWORD *)this + 1) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(1LL, 369LL);
    DxgkLogInternalTriageEvent(v37, 0x40000LL);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v9 = VIDMM_PROCESS::OpenAdapter(v8, *(struct VIDMM_GLOBAL **)this);
    if ( v9 < 0 )
    {
      _InterlockedAdd(&dword_1C006E748, 1u);
      WdLogSingleEntry1(6LL, 385LL);
      DxgkLogInternalTriageEvent(v38, 262145LL);
      return (unsigned int)v9;
    }
    *((_BYTE *)this + 58) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL));
  }
  v10 = 56LL * *((unsigned int *)this + 16);
  if ( !is_mul_ok(*((unsigned int *)this + 16), 0x38uLL) )
    v10 = -1LL;
  v11 = operator new[](v10, 0x30326956u, 256LL);
  *((_QWORD *)this + 5) = v11;
  if ( !v11 )
  {
    _InterlockedAdd(&dword_1C006E74C, 1u);
    WdLogSingleEntry1(6LL, 402LL);
    v39 = 262145LL;
LABEL_61:
    DxgkLogInternalTriageEvent(v40, v39);
    return 3221225495LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 16); *v14 = v14 )
  {
    v13 = 56LL * i++;
    v14 = (_QWORD *)(v13 + *((_QWORD *)this + 5) + 32LL);
    v14[1] = v14;
  }
  if ( !*((_QWORD *)this + 3) && a3 )
    goto LABEL_38;
  v15 = *((unsigned int *)this + 17);
  v16 = 176 * v15;
  if ( !is_mul_ok(v15, 0xB0uLL) )
    v16 = -1LL;
  v17 = __CFADD__(v16, 8LL);
  v18 = v16 + 8;
  if ( v17 )
    v18 = -1LL;
  v19 = operator new[](v18, 0x38346956u, 256LL);
  if ( v19 )
  {
    v20 = v19 + 8;
    *(_QWORD *)v19 = v15;
    `vector constructor iterator'(
      (char *)(v19 + 8),
      176LL,
      (unsigned int)v15,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v20 = 0LL;
  }
  *((_QWORD *)this + 10) = v20;
  if ( !v20 )
  {
    WdLogSingleEntry1(1LL, 427LL);
    goto LABEL_60;
  }
  v21 = *((unsigned int *)this + 17);
  v22 = 176 * v21;
  if ( !is_mul_ok(v21, 0xB0uLL) )
    v22 = -1LL;
  v17 = __CFADD__(v22, 8LL);
  v23 = v22 + 8;
  if ( v17 )
    v23 = -1LL;
  v24 = operator new[](v23, 0x38346956u, 256LL);
  if ( v24 )
  {
    v25 = v24 + 8;
    *(_QWORD *)v24 = v21;
    `vector constructor iterator'(
      (char *)(v24 + 8),
      176LL,
      (unsigned int)v21,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 11) = v25;
  if ( !v25 )
  {
    WdLogSingleEntry1(1LL, 434LL);
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 96LL) & 2) != 0 )
  {
    v31 = *((unsigned int *)this + 17);
    v32 = 176 * v31;
    if ( !is_mul_ok(v31, 0xB0uLL) )
      v32 = -1LL;
    v17 = __CFADD__(v32, 8LL);
    v33 = v32 + 8;
    if ( v17 )
      v33 = -1LL;
    v34 = operator new[](v33, 0x38346956u, 256LL);
    if ( v34 )
    {
      v35 = v34 + 8;
      *(_QWORD *)v34 = v31;
      `vector constructor iterator'(
        (char *)(v34 + 8),
        176LL,
        (unsigned int)v31,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v35 = 0LL;
    }
    *((_QWORD *)this + 12) = v35;
    if ( !v35 )
    {
      WdLogSingleEntry1(1LL, 450LL);
LABEL_60:
      v39 = 0x40000LL;
      goto LABEL_61;
    }
  }
  v26 = 0;
  if ( *((_DWORD *)this + 17) )
  {
    while ( 1 )
    {
      v27 = 176LL * v26;
      LOBYTE(v41) = v5;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v27 + *((_QWORD *)this + 10), this, v26, 1LL, v41);
      if ( (int)result < 0 )
        break;
      LOBYTE(v42) = v5;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v27 + *((_QWORD *)this + 11), this, v26, 2LL, v42);
      if ( (int)result < 0 )
        break;
      v29 = *((_QWORD *)this + 12);
      if ( v29 )
      {
        LOBYTE(v41) = v5;
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v27 + v29, this, v26, 3LL, v41);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v26 >= *((_DWORD *)this + 17) )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v30 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 29) = qword_1C006E4C8 + v30 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
