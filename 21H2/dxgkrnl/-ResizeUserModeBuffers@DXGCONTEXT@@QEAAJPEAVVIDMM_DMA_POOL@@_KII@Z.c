/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C02E2508
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009C20 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        SIZE_T a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  HANDLE v7; // r15
  HANDLE v8; // r14
  signed int v9; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rcx
  SIZE_T v20; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v21; // rax
  int v22; // eax
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // r9
  SIZE_T v25; // r8
  int v26; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v27; // rax
  void *v28; // rcx
  void *v29; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v30; // rax
  void *v31; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v32; // rax
  void *v33; // rcx
  PVOID v34; // r12
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v35; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v36; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v37; // rax
  SIZE_T v39; // [rsp+48h] [rbp-80h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp-78h] BYREF
  PVOID v41; // [rsp+58h] [rbp-70h] BYREF
  PVOID Address; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h]
  __int64 v44; // [rsp+70h] [rbp-58h] BYREF
  HANDLE v45; // [rsp+78h] [rbp-50h]
  HANDLE v46; // [rsp+80h] [rbp-48h]
  PVOID PoolWithTag; // [rsp+88h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v50; // [rsp+E8h] [rbp+20h]

  v50 = a4;
  NumberOfBytes = a3;
  v5 = a4;
  v44 = 0LL;
  PoolWithTag = 0LL;
  Size = 0LL;
  Address = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v9 = 0;
  if ( a3 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, SIZE_T *, int, int))VirtualMemoryInterface)(
            -1LL,
            &v44,
            0LL,
            &NumberOfBytes,
            12288,
            4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v13 = v11;
    }
    else
    {
      Global = DXGGLOBAL_GetGlobal();
      if ( !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
              (struct DXGGLOBAL *)((char *)Global + 1716),
              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
        goto LABEL_7;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B677844u);
      if ( PoolWithTag )
        goto LABEL_7;
      v9 = -1073741801;
      v13 = -1073741801LL;
    }
    WdLogSingleEntry3(3LL, this, NumberOfBytes, v13);
LABEL_7:
    v5 = v50;
  }
  if ( v9 >= 0 && v5 )
  {
    v14 = v5;
    v15 = 8LL * v5;
    v16 = 0xFFFFFFFFLL;
    if ( v15 <= 0xFFFFFFFF )
      v16 = (unsigned int)v15;
    v9 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
    Size = v16;
    if ( v15 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v14);
    }
    else
    {
      v17 = DxgkGetVirtualMemoryInterface();
      v18 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v17)(
              -1LL,
              &Address,
              0LL,
              &Size,
              12288,
              4);
      v9 = v18;
      if ( v18 < 0 )
        WdLogSingleEntry3(3LL, this, Size, v18);
    }
    if ( v9 < 0 )
      goto LABEL_59;
    v7 = MmSecureVirtualMemory(Address, Size, 4u);
    v46 = v7;
    if ( !v7 )
    {
      v9 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
    }
  }
  if ( v9 < 0 )
  {
LABEL_59:
    v34 = P;
    goto LABEL_60;
  }
  if ( !a5 )
    goto LABEL_35;
  v19 = 24LL * a5;
  v20 = 0xFFFFFFFFLL;
  if ( v19 <= 0xFFFFFFFF )
    v20 = (unsigned int)v19;
  v9 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v39 = v20;
  if ( v19 > 0xFFFFFFFF )
  {
    WdLogSingleEntry2(3LL, this, a5);
  }
  else
  {
    v21 = DxgkGetVirtualMemoryInterface();
    v22 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v21)(-1LL, &v41, 0LL, &v39, 12288, 4);
    v9 = v22;
    if ( v22 < 0 )
    {
      v24 = v22;
      v25 = v39;
      goto LABEL_30;
    }
    v23 = DXGGLOBAL_GetGlobal();
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)v23 + 1716),
           *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      P = ExAllocatePoolWithTag(PagedPool, v39, 0x4B677844u);
      if ( !P )
      {
        v9 = -1073741801;
        v24 = -1073741801LL;
        v25 = NumberOfBytes;
LABEL_30:
        WdLogSingleEntry3(3LL, this, v25, v24);
      }
    }
  }
  if ( v9 < 0 )
    goto LABEL_59;
  v8 = MmSecureVirtualMemory(v41, v39, 4u);
  v45 = v8;
  if ( !v8 )
  {
    v9 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
LABEL_35:
  if ( v9 < 0 )
    goto LABEL_59;
  v26 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, SIZE_T, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                                                               + 8LL)
                                                                                   + 488LL))(
          a2,
          NumberOfBytes,
          v50,
          a5);
  v9 = v26;
  if ( v26 < 0 )
    WdLogSingleEntry2(3LL, this, v26);
  if ( v9 < 0 )
    goto LABEL_59;
  if ( NumberOfBytes )
  {
    if ( *((_QWORD *)this + 7) )
    {
      v27 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v27 + 2))(
        -1LL,
        (char *)this + 56,
        (char *)this + 48,
        0x8000LL);
    }
    v28 = (void *)*((_QWORD *)this + 8);
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    *((_QWORD *)this + 7) = v44;
    *((_QWORD *)this + 8) = PoolWithTag;
    *((_QWORD *)this + 6) = NumberOfBytes;
  }
  if ( v50 )
  {
    v29 = (void *)*((_QWORD *)this + 12);
    if ( v29 )
      MmUnsecureVirtualMemory(v29);
    if ( *((_QWORD *)this + 11) )
    {
      v30 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v30 + 2))(
        -1LL,
        (char *)this + 88,
        (char *)this + 80,
        0x8000LL);
    }
    *((_QWORD *)this + 12) = v7;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v50;
    *((_QWORD *)this + 10) = Size;
  }
  if ( !a5 )
    goto LABEL_59;
  v31 = (void *)*((_QWORD *)this + 17);
  if ( v31 )
    MmUnsecureVirtualMemory(v31);
  if ( *((_QWORD *)this + 15) )
  {
    v32 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v32 + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
  }
  v33 = (void *)*((_QWORD *)this + 16);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  *((_QWORD *)this + 17) = v8;
  *((_QWORD *)this + 15) = v41;
  v34 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *((_QWORD *)this + 14) = v39;
LABEL_60:
  if ( v9 < 0 )
  {
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    if ( v41 )
    {
      v35 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64))v35 + 2))(-1LL, &v41, &v39, 0x8000LL);
    }
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    if ( v7 )
      MmUnsecureVirtualMemory(v7);
    if ( Address )
    {
      v36 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64))v36 + 2))(-1LL, &Address, &Size, 0x8000LL);
    }
    if ( v44 )
    {
      v37 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, SIZE_T *, __int64))v37 + 2))(-1LL, &v44, &NumberOfBytes, 0x8000LL);
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v9;
}
