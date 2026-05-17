/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18001CA18
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079CD0 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlHashUnicodeString @ 0x18001CCB0 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     bsearch @ 0x18008ECC0 (bsearch.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  char v6; // r15
  char v7; // r13
  bool v8; // zf
  unsigned __int16 *v10; // r11
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  char v15; // dl
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  unsigned int v22; // eax
  int *v23; // r12
  unsigned __int64 v24; // rdx
  int *i; // r13
  unsigned __int64 v26; // rcx
  char *v27; // rbx
  size_t v28; // r8
  char *v29; // rbx
  char *v30; // r15
  char *v31; // rax
  unsigned int v32; // r14d
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // r14d
  char v36; // [rsp+50h] [rbp-59h]
  int v38; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int16 v39; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int16 v40; // [rsp+6Ah] [rbp-3Fh]
  __int64 v41; // [rsp+70h] [rbp-39h]
  unsigned int v42; // [rsp+78h] [rbp-31h]
  unsigned int v43; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int64 v44; // [rsp+80h] [rbp-29h]
  unsigned int *v45; // [rsp+88h] [rbp-21h]
  unsigned int Key[6]; // [rsp+90h] [rbp-19h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v10 = a3;
  v44 = a2;
  v36 = v7;
  if ( !v8 )
    return 3222601731LL;
  if ( !*(_DWORD *)(a1 + 20) )
    return 3222601736LL;
  v12 = *(unsigned int *)(a1 + 28);
  if ( (_DWORD)v12 == -1 )
  {
    v6 = 0;
  }
  else if ( *a5 != (_DWORD)v12 )
  {
    LOBYTE(a2) = v7;
    result = RtlHashUnicodeString(v10, a2, v12, a6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741811 )
        return result;
      LOBYTE(v14) = v7;
      result = RtlHashUnicodeString(a3, v14, 0LL, &v38);
      if ( (int)result < 0 )
        return result;
      DbgPrintEx(
        51LL,
        0LL,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        *(_DWORD *)(a1 + 28));
      v6 = 0;
    }
    else
    {
      *a5 = *(_DWORD *)(a1 + 28);
    }
    v10 = a3;
  }
  v15 = 0;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    v15 = v6;
  if ( ((unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0) & (unsigned __int8)v15) != 0 )
  {
    v17 = *(unsigned int *)(a1 + 32);
    v18 = 0LL;
    v42 = *a6;
    v16 = v42;
    v19 = v42 % *(_DWORD *)(v17 + a1);
    v20 = a1 + *(unsigned int *)(v17 + a1 + 4);
    v38 = v19;
    v21 = (unsigned int *)(v20 + 8 * v19);
    v22 = *v21;
    v23 = (int *)(a1 + v21[1]);
    v45 = v21;
    v43 = v22;
    if ( v22 )
    {
      v24 = v44;
      for ( i = v23; ; ++i )
      {
        v26 = *i;
        if ( v26 > v24 )
          break;
        v27 = (char *)(v26 + a1);
        if ( !v6 || *(_DWORD *)v27 == v16 )
        {
          v33 = *((unsigned int *)v27 + 1);
          if ( v33 > v24 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v27,
              v33,
              (const void *)a1,
              v38,
              v45,
              v23);
            return 3222601731LL;
          }
          v39 = *((_WORD *)v27 + 4);
          v40 = v39;
          v41 = v33 + a1;
          if ( !(unsigned int)RtlCompareUnicodeString(v10, &v39, v36) )
            goto LABEL_33;
          v16 = v42;
          v24 = v44;
        }
        v10 = a3;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v43 )
          return 3222601736LL;
      }
      DbgPrintEx(51LL, 0LL, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v23[v18], v26);
      return 3222601731LL;
    }
    return 3222601736LL;
  }
  if ( v6 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v28 = *(unsigned int *)(a1 + 20);
    v29 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v30 = &v29[24 * (unsigned int)(v28 - 1)];
    Key[0] = *a6;
    v31 = (char *)bsearch(Key, v29, v28, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    if ( v31 )
    {
      for ( ; v31 != v29; v31 -= 24 )
      {
        if ( *(_DWORD *)v31 != *a6 )
          break;
      }
      v32 = *a6;
      v27 = v31 + 24;
      if ( *(_DWORD *)v31 == *a6 )
        v27 = v31;
      do
      {
        v39 = *((_WORD *)v27 + 4);
        v40 = v39;
        v41 = a1 + *((unsigned int *)v27 + 1);
        if ( !(unsigned int)RtlCompareUnicodeString(a3, &v39, v7) )
          break;
        v27 += 24;
        if ( v27 > v30 )
          goto LABEL_30;
      }
      while ( *(_DWORD *)v27 == v32 );
      if ( v27 > v30 || *(_DWORD *)v27 != v32 )
      {
LABEL_30:
        v27 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return 3222601736LL;
  }
  v35 = *(_DWORD *)(a1 + 20);
  v27 = (char *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v35 )
    return 3222601736LL;
  while ( 1 )
  {
    v39 = *((_WORD *)v27 + 4);
    v40 = v39;
    v41 = a1 + *((unsigned int *)v27 + 1);
    if ( (!v6 || *(_DWORD *)v27 == *a6) && !(unsigned int)RtlCompareUnicodeString(v10, &v39, v7) )
      break;
    v10 = a3;
    v27 += 24;
    if ( !--v35 )
      return 3222601736LL;
  }
LABEL_33:
  if ( !v27 || !*((_DWORD *)v27 + 3) )
    return 3222601736LL;
  if ( a4 )
  {
    v34 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + *((unsigned int *)v27 + 3);
    a4[4] = *((_DWORD *)v27 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v34) )
      a4[16] = *((_DWORD *)v27 + 5);
  }
  return 0LL;
}
