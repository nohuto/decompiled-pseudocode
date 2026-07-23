/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140306178
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1403060B0 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x140306520 (RtlDecompressBufferEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140596A38 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 *     SmCrAuthDecrypt @ 0x14059ABA0 (SmCrAuthDecrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r9
  int v10; // edx
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // esi
  UCHAR *v14; // r15
  unsigned int v15; // edx
  __int64 v16; // rcx
  char v17; // al
  unsigned __int64 v18; // rbx
  signed __int64 *v19; // rbx
  ULONG CompressedBufferSize; // eax
  unsigned int v21; // ebx
  int v22; // r15d
  struct _KTHREAD *v23; // rax
  __int64 v24; // rcx
  size_t v26; // r8
  const void *v27; // rdx
  struct _KTHREAD *CurrentThread; // rax
  ULONG FinalUncompressedSize; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-70h]
  PVOID WorkSpace; // [rsp+50h] [rbp-68h]
  __int64 v32; // [rsp+58h] [rbp-60h] BYREF
  int v33; // [rsp+60h] [rbp-58h]

  v7 = *(unsigned int *)(a1 + 824);
  WorkSpace = a2;
  v10 = *(unsigned __int16 *)(a5 + 4) - 1;
  v32 = 0LL;
  v11 = v7 + a3;
  v33 = 0;
  v12 = *(_QWORD *)(a1 + 1016);
  v13 = 0;
  FinalUncompressedSize = 0;
  v14 = (UCHAR *)a4;
  v15 = -*(_DWORD *)(v12 + 8) & (*(_DWORD *)(v12 + 8) + v10);
  v30 = v15;
  if ( (a4 & 1) != 0 )
  {
    v14 = *(UCHAR **)(a6 + 48);
    a4 &= ~1uLL;
  }
  v16 = v12;
  if ( (v11 & 3) != 0 )
  {
    v17 = v11;
    v18 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 2) != 0 )
    {
      v26 = (unsigned int)v7 + v15;
      v27 = (const void *)v18;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(v12 + 24) )
    {
      memmove(*(void **)(a1 + 1784), (const void *)v11, v15);
      v16 = *(_QWORD *)(a1 + 1016);
      v15 = v30;
      v11 = *(_QWORD *)(a1 + 1784);
    }
  }
  if ( *(_DWORD *)(v16 + 24) )
  {
    LODWORD(v32) = *(unsigned __int16 *)(a5 + 4);
    HIDWORD(v32) = *(_DWORD *)(a5 + 8);
    v33 = *(_DWORD *)(a5 + 12);
    if ( (int)SmCrAuthDecrypt(v16, v11, v11, v15, &v32) < 0 )
    {
      v21 = -1073741173;
      ST_STORE<SM_TRAITS>::StDmPageError(a1, v11, a4, a5, a6, -1073741173);
      goto LABEL_19;
    }
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v19 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( a6 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v19, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v19);
      KeAbPostRelease((ULONG_PTR)v19);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v13 = 2;
  }
  CompressedBufferSize = *(unsigned __int16 *)(a5 + 4);
  if ( CompressedBufferSize >= 0x1000 )
  {
    v26 = *(unsigned __int16 *)(a5 + 4);
    v27 = (const void *)v11;
    goto LABEL_25;
  }
  if ( RtlDecompressBufferEx(
         *(_WORD *)(a1 + 992),
         v14,
         0x1000u,
         (PUCHAR)v11,
         CompressedBufferSize,
         &FinalUncompressedSize,
         WorkSpace) >= 0
    && FinalUncompressedSize == 4096 )
  {
    if ( v14 == (UCHAR *)a4 )
    {
LABEL_18:
      v21 = 0;
LABEL_19:
      v22 = 0;
      goto LABEL_20;
    }
    v26 = 4096LL;
    v27 = v14;
LABEL_25:
    memmove((void *)a4, v27, v26);
    goto LABEL_18;
  }
  v21 = -1073741116;
  v22 = 1;
  v13 &= 2u;
LABEL_20:
  if ( v13 )
  {
    v23 = KeGetCurrentThread();
    v24 = *(_QWORD *)(a1 + 800);
    --v23->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v24 + 6024, 0LL);
    *(_DWORD *)(a6 + 64) = 2;
  }
  if ( v22 && (ST_STORE<SM_TRAITS>::StDmPageError(a1, v11, a4, a5, a6, v21) & 1) != 0 )
    return 0;
  return v21;
}
