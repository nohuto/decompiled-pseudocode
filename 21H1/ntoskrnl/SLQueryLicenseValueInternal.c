/*
 * XREFs of SLQueryLicenseValueInternal @ 0x140791E84
 * Callers:
 *     ntoskrnl_27 @ 0x140674760 (ntoskrnl_27.c)
 *     NtQueryLicenseValue @ 0x1406747F0 (NtQueryLicenseValue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     sub_1403B326C @ 0x1403B326C (sub_1403B326C.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140792454 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLGetSubscriptionPfn @ 0x140949608 (SLGetSubscriptionPfn.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLQueryLicenseValueInternal(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v7; // r13
  wchar_t *v8; // r12
  int v9; // edi
  int v10; // r9d
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int64 (**v13)[9]; // rbx
  size_t v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r14
  char v18; // al
  __int64 *v19; // r14
  int v20; // ebx
  unsigned int v21; // r12d
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 (**v24)[9]; // r11
  size_t v25; // rdx
  unsigned int v27; // eax
  _WORD *v28; // r10
  __int64 v29; // r8
  __int64 v30; // r11
  unsigned int v31; // eax
  _WORD *v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  int v35; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r13d
  wchar_t *PoolWithTag; // rax
  unsigned int v42; // r14d
  const wchar_t **v43; // r12
  char v44; // al
  int v45; // eax
  struct _KTHREAD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  char v51; // [rsp+61h] [rbp-207h] BYREF
  char v52; // [rsp+62h] [rbp-206h]
  int v53; // [rsp+64h] [rbp-204h]
  unsigned __int16 v54; // [rsp+6Ah] [rbp-1FEh]
  unsigned int v55; // [rsp+6Ch] [rbp-1FCh] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-1F8h]
  unsigned int *v57; // [rsp+78h] [rbp-1F0h]
  __int64 v58; // [rsp+80h] [rbp-1E8h]
  int v59; // [rsp+88h] [rbp-1E0h]
  __int64 v60; // [rsp+90h] [rbp-1D8h]
  __int64 v61; // [rsp+98h] [rbp-1D0h]
  __int64 (**v62)[9]; // [rsp+A0h] [rbp-1C8h]
  int v63; // [rsp+A8h] [rbp-1C0h]
  int v64; // [rsp+ACh] [rbp-1BCh] BYREF
  PVOID P; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-1B0h] BYREF
  __int64 *v67; // [rsp+C8h] [rbp-1A0h]
  __int64 v68; // [rsp+D8h] [rbp-190h]
  __int64 v69; // [rsp+E8h] [rbp-180h]
  const UNICODE_STRING *v70; // [rsp+F0h] [rbp-178h]
  __int64 v71; // [rsp+F8h] [rbp-170h]
  _QWORD v72[7]; // [rsp+108h] [rbp-160h] BYREF
  _BYTE Buf1[112]; // [rsp+140h] [rbp-128h] BYREF
  _BYTE v74[112]; // [rsp+1B0h] [rbp-B8h] BYREF

  v61 = a4;
  v58 = a3;
  v7 = a1;
  v60 = a1;
  v69 = a1;
  v70 = a2;
  v71 = a3;
  v68 = a4;
  v57 = a6;
  v53 = 0;
  v66 = 0LL;
  v51 = 0;
  v8 = 0LL;
  Str1 = 0LL;
  P = 0LL;
  v64 = 0;
  if ( !a2 || !a6 || (v9 = 0, v53 = 0, !a2->Buffer) || a2->Length < 2u )
  {
    v9 = -1073741811;
    goto LABEL_85;
  }
  LOBYTE(v66) = 1;
  *((_QWORD *)&v66 + 1) = a2;
  v63 = ExpLoadAndSortLicensingCacheDescriptors();
  v67 = 0LL;
  v52 = 0;
  v10 = 1;
  v59 = 1;
  v55 = 0;
  v11 = *((_QWORD *)&v66 + 1);
  v12 = **((_WORD **)&v66 + 1);
  v54 = **((_WORD **)&v66 + 1);
  v62 = &off_14097EA40;
  v13 = &off_14097EA40;
  while ( 1 )
  {
    v14 = *((unsigned __int16 *)v13 + 4);
    if ( v12 != (_WORD)v14 )
    {
      v10 += v14;
      v59 = v10;
      goto LABEL_8;
    }
    v27 = v12 >> 1;
    if ( v27 )
    {
      v28 = Buf1;
      v29 = *(_QWORD *)(v11 + 8) - (_QWORD)Buf1;
      v30 = v27;
      do
      {
        *v28 = *(_WORD *)((char *)v28 + v29) ^ ((v10 + 1) | ((_WORD)v10 << 8) | 0x5555);
        v10 += 2;
        ++v28;
        --v30;
      }
      while ( v30 );
      v59 = v10;
      v7 = v60;
    }
    if ( !memcmp(Buf1, *v13, v14) )
      break;
    v10 = v59;
    v11 = *((_QWORD *)&v66 + 1);
LABEL_8:
    ++v55;
    v13 += 5;
    if ( v55 >= 0xE )
    {
      v15 = 0LL;
      goto LABEL_11;
    }
    v12 = v54;
  }
  v15 = (__int64 *)v13[2];
  v67 = v15;
  LOBYTE(v8) = *((_BYTE *)v13 + 32);
  v52 = (char)v8;
LABEL_11:
  if ( v15 )
  {
    if ( (_BYTE)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v7 + 37464, 0LL);
      v35 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int *, char *))v67)(
              v7,
              v58,
              v61,
              a5,
              v57,
              &v51);
    }
    else
    {
      v35 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int *, char *))v15)(
              v7,
              v58,
              v61,
              a5,
              v57,
              &v51);
    }
    v9 = v35;
    v53 = v35;
    if ( (_BYTE)v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 37464), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 37464));
      KeAbPostRelease(v7 + 37464);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v37, v38, v39);
      v9 = v53;
    }
  }
  if ( v51 )
  {
    if ( v9 >= 0 )
    {
      if ( *v57 > a5 )
        v9 = -1073741789;
      v53 = v9;
    }
    v8 = Str1;
    goto LABEL_27;
  }
  v9 = v63;
  if ( v63 < 0 )
  {
    v53 = v63;
    goto LABEL_26;
  }
  v53 = 0;
  v55 = 0;
  v9 = sub_1403B326C(v7, (__int64)&qword_14097F380, 0LL, (__int64)&v55, 4, (__int64)&v64);
  v53 = v9;
  if ( !qword_140D2C408 || !v55 || RtlEqualUnicodeString(a2, &stru_14097F370, 0) )
  {
LABEL_15:
    v16 = v58;
    v17 = (__int64)v57;
    goto LABEL_16;
  }
  v40 = a2->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v40, 0x20534C53u);
  v8 = PoolWithTag;
  Str1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741801;
LABEL_85:
    v53 = v9;
    goto LABEL_27;
  }
  memset(PoolWithTag, 0, v40);
  memmove(v8, a2->Buffer, a2->Length);
  v72[0] = L"Security-SPP-GenuineLocalStatus";
  v72[1] = L"Security-SPP-Action-StateData";
  v72[2] = L"Security-SPP-LastWindowsActivationHResult";
  v72[3] = L"Security-SPP-LastWindowsActivationTime";
  v72[4] = L"Kernel-ExpirationDate";
  v72[5] = L"SMR-HostManaged-Enabled";
  v72[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v42 = 0;
  v43 = (const wchar_t **)v72;
  while ( wcsicmp(Str1, *v43) )
  {
    ++v42;
    ++v43;
    if ( v42 >= 7 )
    {
      v44 = 0;
      goto LABEL_68;
    }
  }
  v44 = 1;
LABEL_68:
  if ( v44 )
  {
    v7 = v60;
    goto LABEL_15;
  }
  SLGetSubscriptionPfn(v60, &P);
  v16 = v58;
  v17 = (__int64)v57;
  v45 = qword_140D2C408(P, 0LL, 0LL, 0LL, Str1, v40, v61, a5, v57, v58, 0LL);
  if ( (int)(v45 + 0x80000000) < 0 || v45 == -1073741789 )
  {
    v9 = v45;
    if ( !a5 )
      v9 = -1073741789;
    v53 = v9;
    v18 = 0;
    v7 = v60;
  }
  else
  {
    v7 = v60;
LABEL_16:
    v18 = 1;
  }
  if ( v18 )
  {
    v9 = sub_1403B326C(v7, (__int64)&v66, v16, v61, a5, v17);
    v53 = v9;
    if ( v9 == -1073741762 )
    {
      v46 = KeGetCurrentThread();
      --v46->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v7 + 37464, 0LL);
      *(_BYTE *)(v7 + 37616) = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 37464), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7 + 37464);
      KeAbPostRelease(v7 + 37464);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48, v49);
      v9 = v53;
    }
  }
  v19 = 0LL;
  v20 = 1;
  v21 = 0;
  v22 = *((_QWORD *)&v66 + 1);
  v23 = **((_WORD **)&v66 + 1);
  v54 = **((_WORD **)&v66 + 1);
  v24 = &off_14097EA40;
  while ( 2 )
  {
    v25 = *((unsigned __int16 *)v24 + 4);
    if ( v23 != (_WORD)v25 )
    {
      v20 += v25;
LABEL_22:
      ++v21;
      v24 += 5;
      v62 = v24;
      if ( v21 >= 0xE )
        goto LABEL_25;
      v23 = v54;
      continue;
    }
    break;
  }
  v31 = v23 >> 1;
  if ( v31 )
  {
    v32 = v74;
    v33 = *(_QWORD *)(v22 + 8) - (_QWORD)v74;
    v34 = v31;
    do
    {
      *v32 = *(_WORD *)((char *)v32 + v33) ^ ((v20 + 1) | ((_WORD)v20 << 8) | 0x5555);
      v20 += 2;
      ++v32;
      --v34;
    }
    while ( v34 );
    v7 = v60;
  }
  if ( memcmp(v74, *v24, v25) )
  {
    v22 = *((_QWORD *)&v66 + 1);
    v24 = v62;
    goto LABEL_22;
  }
  v19 = (__int64 *)v62[3];
LABEL_25:
  if ( v19 && (v9 >= 0 || v9 == -1073741772 || v9 == -1073741275) )
  {
    v50 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int *, char *))v19)(
            v7,
            v58,
            v61,
            a5,
            v57,
            &v51);
    if ( v51 )
    {
      v9 = v50;
      v53 = v50;
    }
  }
LABEL_26:
  v8 = Str1;
LABEL_27:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v9;
}
