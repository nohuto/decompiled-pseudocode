/*
 * XREFs of PopCaptureReasonContext @ 0x140271AF0
 * Callers:
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x140271DC8 (PopSafeCopyUnicodeString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v7; // rbx
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rsi
  unsigned __int64 v23; // r14
  const UNICODE_STRING *v24; // rcx
  int v25; // ebx
  unsigned int v26; // r14d
  unsigned __int64 p_SourceString; // rcx
  wchar_t *v28; // rax
  UNICODE_STRING v29; // [rsp+30h] [rbp-28h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-18h] BYREF

  SourceString = 0LL;
  *a4 = 0LL;
  v7 = 56LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_24;
  }
  if ( !*(_DWORD *)a1 )
  {
    v10 = *(_DWORD *)(a1 + 4);
    if ( (v10 & 1) == 0 )
    {
      if ( (v10 & 2) != 0 )
      {
        if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
          return 3221225485LL;
        v8 = *(_DWORD *)(a1 + 28);
        v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
        v11 = 16LL * v8;
        if ( v11 > 0xFFFFFFFF )
          return 3221225485LL;
        v9 = *(_QWORD *)(a1 + 32);
        if ( a2 && (_DWORD)v11 )
        {
          if ( (v9 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v9 + (unsigned int)v11;
          if ( v12 > 0x7FFFFFFF0000LL || v12 < v9 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v13 = 0;
        if ( v8 )
        {
          v14 = (unsigned __int16 *)v9;
          do
          {
            v15 = *v14;
            if ( v15 + v7 + 2 < v7 )
              return 3221225485LL;
            ++v13;
            v14 += 8;
            v7 += v15 + 2;
          }
          while ( v13 < v8 );
        }
      }
      else if ( v10 >= 0 )
      {
        return 3221225485LL;
      }
LABEL_24:
      if ( a2 )
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x78435250u);
      else
        PoolWithQuotaTag = ExAllocatePoolWithTag(PagedPool, v7, 0x78435250u);
      v21 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
        return 3221225626LL;
      if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage(v18, v17, v19, v20) )
        memset(v21, 0, v7);
      *a4 = v21;
      if ( v10 < 0 )
      {
        v21[6] = 0LL;
        return 0;
      }
      v23 = ((unsigned __int64)v21 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
      v24 = (const UNICODE_STRING *)(a1 + 8);
      v21[6] = (char *)v21 + v7 - v23;
      *(_DWORD *)v23 = v10;
      *(_QWORD *)(v23 + 8) = 32LL;
      if ( (v10 & 1) != 0 )
      {
        v25 = PopSafeCopyUnicodeString(v24);
        if ( v25 < 0 )
        {
LABEL_35:
          ExFreePoolWithTag(v21, 0x78435250u);
          *a4 = 0LL;
          return (unsigned int)v25;
        }
      }
      else
      {
        v25 = PopSafeCopyUnicodeString(v24);
        if ( v25 < 0 )
          goto LABEL_35;
        *(_WORD *)(v23 + 16) = *(_WORD *)(a1 + 24);
        *(_DWORD *)(v23 + 20) = v8;
        *(_QWORD *)(v23 + 24) = 32LL;
        v26 = 0;
        if ( v8 )
        {
          do
          {
            p_SourceString = v9 + 16LL * v26;
            if ( a2 )
            {
              *(_DWORD *)(&v29.MaximumLength + 1) = 0;
              if ( p_SourceString >= 0x7FFFFFFF0000LL )
                p_SourceString = 0x7FFFFFFF0000LL;
              *(_DWORD *)&v29.Length = *(_DWORD *)p_SourceString;
              v28 = *(wchar_t **)(p_SourceString + 8);
              p_SourceString = (unsigned __int64)&SourceString;
              v29.Buffer = v28;
              SourceString = v29;
            }
            v25 = PopSafeCopyUnicodeString((PCUNICODE_STRING)p_SourceString);
            if ( v25 < 0 )
              goto LABEL_35;
          }
          while ( ++v26 < v8 );
        }
      }
      if ( a3 )
        *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
      return 0;
    }
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
      goto LABEL_24;
    }
  }
  return 3221225485LL;
}
