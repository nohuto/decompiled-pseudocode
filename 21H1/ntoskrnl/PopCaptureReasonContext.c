/*
 * XREFs of PopCaptureReasonContext @ 0x14033E184
 * Callers:
 *     PoCaptureReasonContext @ 0x14033DF4C (PoCaptureReasonContext.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     PopSafeCopyUnicodeString @ 0x14033E3F4 (PopSafeCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v7; // rbx
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  char *PoolWithQuotaTag; // rax
  void *v14; // rsi
  unsigned __int64 v15; // r14
  const UNICODE_STRING *v16; // rcx
  int v17; // ebx
  unsigned int v18; // r14d
  unsigned __int16 *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int128 v25; // [rsp+30h] [rbp-28h]
  __int128 v26; // [rsp+40h] [rbp-18h] BYREF

  v26 = 0LL;
  *a4 = 0LL;
  v7 = 32LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
      return 3221225485LL;
    v10 = *(_DWORD *)(a1 + 4);
    if ( (v10 & 1) != 0 )
    {
      if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) != 0 )
        return 3221225485LL;
      v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
    }
    else
    {
      if ( (v10 & 2) != 0 )
      {
        if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) == 0 )
        {
          v8 = *(_DWORD *)(a1 + 28);
          v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
          v11 = 16LL * v8;
          if ( v11 <= 0xFFFFFFFF )
          {
            v9 = *(_QWORD *)(a1 + 32);
            if ( a2 && (_DWORD)v11 )
            {
              if ( (v9 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v23 = v9 + (unsigned int)v11;
              if ( v23 > 0x7FFFFFFF0000LL || v23 < v9 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v12 = 0;
            if ( !v8 )
              goto LABEL_12;
            v20 = (unsigned __int16 *)v9;
            while ( 1 )
            {
              v21 = *v20;
              if ( v21 + v7 + 2 < v7 )
                break;
              ++v12;
              v20 += 8;
              v7 += v21 + 2;
              if ( v12 >= v8 )
                goto LABEL_12;
            }
          }
        }
        return 3221225485LL;
      }
      if ( v10 >= 0 )
        return 3221225485LL;
    }
  }
  else
  {
    v10 = 0x80000000;
  }
LABEL_12:
  if ( a2 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x78435250u);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x78435250u);
  v14 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *a4 = PoolWithQuotaTag;
    if ( v10 < 0 )
    {
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      return 0;
    }
    v15 = (unsigned __int64)(PoolWithQuotaTag + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    v16 = (const UNICODE_STRING *)(a1 + 8);
    *((_QWORD *)PoolWithQuotaTag + 3) = &PoolWithQuotaTag[v7 - v15];
    *(_DWORD *)v15 = v10;
    *(_QWORD *)(v15 + 8) = 32LL;
    if ( (v10 & 1) != 0 )
    {
      v17 = PopSafeCopyUnicodeString(v16);
      if ( v17 >= 0 )
      {
LABEL_19:
        if ( a3 )
          *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else
    {
      v17 = PopSafeCopyUnicodeString(v16);
      if ( v17 >= 0 )
      {
        *(_WORD *)(v15 + 16) = *(_WORD *)(a1 + 24);
        *(_DWORD *)(v15 + 20) = v8;
        *(_QWORD *)(v15 + 24) = 32LL;
        v18 = 0;
        if ( !v8 )
          goto LABEL_19;
        while ( 1 )
        {
          v22 = v9 + 16LL * v18;
          if ( a2 )
          {
            DWORD1(v25) = 0;
            if ( v22 >= 0x7FFFFFFF0000LL )
              v22 = 0x7FFFFFFF0000LL;
            LODWORD(v25) = *(_DWORD *)v22;
            v24 = *(_QWORD *)(v22 + 8);
            v22 = (unsigned __int64)&v26;
            *((_QWORD *)&v25 + 1) = v24;
            v26 = v25;
          }
          v17 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v22);
          if ( v17 < 0 )
            break;
          if ( ++v18 >= v8 )
            goto LABEL_19;
        }
      }
    }
    ExFreePoolWithTag(v14, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v17;
  }
  return 3221225626LL;
}
