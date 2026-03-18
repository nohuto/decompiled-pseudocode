/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140392180
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1403920C8 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x14035F780 (RtlDecompressBufferEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1405F9B18 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 *     SmCrAuthDecrypt @ 0x1405FD85C (SmCrAuthDecrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r15d
  char v15; // bl
  __int64 v16; // r12
  unsigned int v17; // r15d
  __int64 v18; // rcx
  char v19; // al
  const void *v20; // rdi
  signed __int64 *v21; // rbx
  struct _KTHREAD *v22; // rax
  bool v23; // zf
  __int64 v24; // r15
  unsigned int v25; // eax
  unsigned int v26; // edi
  struct _KTHREAD *v27; // rax
  __int64 v28; // rcx
  size_t v30; // r8
  const void *v31; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+60h] [rbp-68h] BYREF
  int v37; // [rsp+68h] [rbp-60h]

  v36 = 0LL;
  v37 = 0;
  v7 = a5;
  v9 = *(unsigned int *)(a1 + 824);
  v35 = a2;
  v11 = *(_QWORD *)(a1 + 1016);
  v12 = a3;
  v13 = v9 + a3;
  v14 = *(unsigned __int16 *)(a5 + 4) - 1;
  v33 = 0;
  v34 = a5;
  v15 = 0;
  v16 = a4;
  v17 = -*(_DWORD *)(v11 + 8) & (*(_DWORD *)(v11 + 8) + v14);
  if ( (a4 & 1) != 0 )
  {
    v16 = *(_QWORD *)(a6 + 48);
    a4 &= ~1uLL;
  }
  v18 = v11;
  if ( (v13 & 3) != 0 )
  {
    v19 = v13;
    v20 = (const void *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    v13 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v19 & 2) != 0 )
    {
      memmove((void *)a4, v20, (unsigned int)v9 + v17);
      return 0;
    }
    if ( *(_DWORD *)(v11 + 24) )
    {
      memmove(*(void **)(a1 + 1784), (const void *)v13, v17);
      v18 = *(_QWORD *)(a1 + 1016);
      v7 = v34;
      v13 = *(_QWORD *)(a1 + 1784);
    }
  }
  if ( *(_DWORD *)(v18 + 24) )
  {
    LODWORD(v36) = *(unsigned __int16 *)(v7 + 4);
    HIDWORD(v36) = *(_DWORD *)(v7 + 8);
    v37 = *(_DWORD *)(v7 + 12);
    if ( (int)SmCrAuthDecrypt(v18, v13, v13, v17, &v36) < 0 )
    {
      v24 = v34;
      v26 = -1073741173;
      v15 = 4 * (ST_STORE<SM_TRAITS>::StDmPageError(a1, v13, a4, v34, a6, -1073741173) & 1);
      goto LABEL_19;
    }
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v21 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( a6 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v21, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v22 = KeGetCurrentThread();
      v23 = v22->SpecialApcDisable++ == -1;
      if ( v23 && ($CEA84C04E3712D858E5667A507841A2A *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery();
    }
    v15 = 2;
  }
  v24 = v34;
  v25 = *(unsigned __int16 *)(v34 + 4);
  if ( v25 >= 0x1000 )
  {
    v30 = *(unsigned __int16 *)(v34 + 4);
    v31 = (const void *)v13;
  }
  else
  {
    if ( (int)RtlDecompressBufferEx(*(_WORD *)(a1 + 992), v16, 0x1000u, v13, v25, (__int64)&v33, v35) < 0 || v33 != 4096 )
    {
      v26 = -1073741116;
      v15 |= 1u;
      goto LABEL_19;
    }
    if ( v16 == a4 )
      goto LABEL_18;
    v30 = 4096LL;
    v31 = (const void *)v16;
  }
  memmove((void *)a4, v31, v30);
LABEL_18:
  v26 = 0;
LABEL_19:
  if ( (v15 & 2) != 0 )
  {
    v27 = KeGetCurrentThread();
    v28 = *(_QWORD *)(a1 + 800);
    --v27->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v28 + 6024, 0LL);
    *(_DWORD *)(a6 + 64) = 2;
  }
  if ( (v15 & 1) != 0 && (ST_STORE<SM_TRAITS>::StDmPageError(a1, v13, a4, v24, a6, v26) & 1) != 0 )
    return 0;
  return v26;
}
