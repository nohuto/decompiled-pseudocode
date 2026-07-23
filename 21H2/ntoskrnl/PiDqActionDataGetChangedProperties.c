/*
 * XREFs of PiDqActionDataGetChangedProperties @ 0x140771334
 * Callers:
 *     PiDqActionDataCreate @ 0x140624A2C (PiDqActionDataCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PiDqOpenObjectRegKey @ 0x1406077B8 (PiDqOpenObjectRegKey.c)
 *     PnpFreeDevProperty @ 0x1406288A8 (PnpFreeDevProperty.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x14062CDA4 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14062DBA4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqGrowPropertyArray @ 0x140771634 (PiDqGrowPropertyArray.c)
 */

__int64 __fastcall PiDqActionDataGetChangedProperties(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  __int64 v10; // r14
  int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rax
  HANDLE v14; // rbx
  __int64 v15; // r14
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // esi
  NTSTRSAFE_PCWSTR v21; // rcx
  const wchar_t *v22; // rsi
  const wchar_t *v23; // rbx
  const wchar_t *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  __int64 *v28; // rsi
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // ecx
  int v42; // [rsp+58h] [rbp-71h]
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-61h]
  int v45[2]; // [rsp+70h] [rbp-59h]
  __int64 v46; // [rsp+78h] [rbp-51h]
  NTSTRSAFE_PCWSTR v47; // [rsp+80h] [rbp-49h]
  PVOID P; // [rsp+88h] [rbp-41h] BYREF
  __int64 v49; // [rsp+90h] [rbp-39h]
  __int64 v50[2]; // [rsp+98h] [rbp-31h] BYREF
  wchar_t *Str1[2]; // [rsp+A8h] [rbp-21h]
  __int128 v52; // [rsp+B8h] [rbp-11h]

  v10 = a8;
  v47 = a5;
  v49 = a1;
  v11 = 0;
  Handle = 0LL;
  v12 = 0;
  P = 0LL;
  *a10 = 0;
  *(_QWORD *)v45 = a3;
  v46 = a8;
  v44 = a9;
  *(_OWORD *)v50 = 0LL;
  *(_OWORD *)Str1 = 0LL;
  v52 = 0LL;
  PiPnpRtlBeginOperation(&P);
  v13 = 0LL;
  v42 = 0;
  if ( !*(_DWORD *)(a8 + 76) )
    goto LABEL_34;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = 32 * v13 + v10;
    if ( a6 )
    {
      v16 = 0;
      if ( !a7 )
        goto LABEL_33;
      while ( 1 )
      {
        v17 = a6 + 32LL * v16;
        if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v17 + 16) )
        {
          v18 = *(_QWORD *)(v15 + 80) - *(_QWORD *)v17;
          if ( !v18 )
            v18 = *(_QWORD *)(v15 + 88) - *(_QWORD *)(v17 + 8);
          if ( !v18 )
          {
            v19 = *(_DWORD *)(v15 + 100);
            if ( v19 == *(_DWORD *)(v17 + 20) && (!*(_QWORD *)(v15 + 104) || a4) )
              break;
          }
        }
        if ( ++v16 >= a7 )
          goto LABEL_33;
      }
    }
    else
    {
      v19 = *(_DWORD *)(v15 + 100);
    }
    if ( !v19 )
      break;
    if ( v19 != 1 )
    {
      v11 = -1073741811;
      goto LABEL_34;
    }
    v20 = 0;
    if ( !Handle )
    {
      v11 = PiDqOpenObjectRegKey(1, v45[0], a2, 1, 0, v49, &Handle);
      if ( v11 == -1073741772 )
      {
        Handle = (HANDLE)-1LL;
        v11 = 0;
      }
    }
    v14 = Handle;
    if ( Handle != (HANDLE)-1LL )
      goto LABEL_14;
LABEL_33:
    v10 = v46;
    v13 = (unsigned int)(v42 + 1);
    v42 = v13;
    if ( (unsigned int)v13 >= *(_DWORD *)(v46 + 76) )
      goto LABEL_34;
  }
  v20 = a2;
LABEL_14:
  if ( v11 < 0 )
    goto LABEL_34;
  if ( !a4 )
  {
    v34 = *a10;
    if ( v12 <= (unsigned int)v34 )
    {
      if ( a7 )
      {
        v12 = a7;
      }
      else
      {
        v39 = 5;
        if ( *(_DWORD *)(v46 + 76) > 5u )
          v39 = *(_DWORD *)(v46 + 76);
        v12 += v39;
      }
      v11 = PiDqGrowPropertyArray(v44, v34, v12);
      if ( v11 < 0 )
        goto LABEL_34;
    }
    v11 = PiDqPnPGetObjectProperty(
            *(__int64 *)v45,
            v20,
            (__int64)v14,
            v15 + 80,
            *(_DWORD *)(v15 + 100),
            *(NTSTRSAFE_PCWSTR *)(v15 + 104),
            (_OWORD *)(*v44 + 48LL * *a10));
    if ( v11 < 0 )
      goto LABEL_34;
LABEL_32:
    ++*a10;
    goto LABEL_33;
  }
  v11 = PiDqPnPGetObjectPropertyInBestLocale(
          *(__int64 *)v45,
          v20,
          (__int64)v14,
          v15 + 80,
          *(_DWORD *)(v15 + 100),
          v47,
          v50);
  if ( v11 >= 0 )
  {
    v21 = v47;
    v22 = Str1[1];
    while ( 1 )
    {
      v23 = (const wchar_t *)((unsigned __int64)v21 & -(__int64)(*v21 != 0));
      v24 = *(const wchar_t **)(v15 + 104);
      if ( v24 == v23 || v24 && v23 && !wcsicmp(v24, v23) )
        break;
      if ( v22 == v23 || v22 && (!v23 || !wcsicmp(v22, v23)) || !v23 )
        goto LABEL_59;
      v25 = -1LL;
      do
        ++v25;
      while ( v23[v25] );
      v21 = &v23[v25 + 1];
    }
    v26 = *a10;
    v27 = 0;
    v28 = v44;
    if ( *a10 )
    {
      v35 = *v44;
      while ( 1 )
      {
        v36 = 48LL * v27;
        if ( LODWORD(Str1[0]) == *(_DWORD *)(v36 + v35 + 16) )
        {
          v37 = v50[0] - *(_QWORD *)(v36 + v35);
          if ( v50[0] == *(_QWORD *)(v36 + v35) )
            v37 = v50[1] - *(_QWORD *)(v36 + v35 + 8);
          if ( !v37 && HIDWORD(Str1[0]) == *(_DWORD *)(v36 + v35 + 20) )
            break;
        }
        if ( ++v27 >= v26 )
          goto LABEL_27;
      }
LABEL_59:
      PnpFreeDevProperty((__int64)v50, 0x58706E50u);
      goto LABEL_33;
    }
LABEL_27:
    if ( v12 > v26 )
      goto LABEL_31;
    if ( a7 )
    {
      v12 = a7;
    }
    else
    {
      v38 = 5;
      if ( *(_DWORD *)(v46 + 76) > 5u )
        v38 = *(_DWORD *)(v46 + 76);
      v12 += v38;
    }
    v11 = PiDqGrowPropertyArray(v44, v26, v12);
    if ( v11 >= 0 )
    {
LABEL_31:
      v29 = *(_OWORD *)Str1;
      v30 = *v28;
      v31 = 6LL * *a10;
      *(_OWORD *)(v30 + 8 * v31) = *(_OWORD *)v50;
      v32 = v52;
      *(_OWORD *)(v30 + 8 * v31 + 16) = v29;
      *(_OWORD *)(v30 + 8 * v31 + 32) = v32;
      goto LABEL_32;
    }
    PnpFreeDevProperty((__int64)v50, 0x58706E50u);
  }
LABEL_34:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v11;
}
