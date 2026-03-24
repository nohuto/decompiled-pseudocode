/*
 * XREFs of GetObjectPathNoLock @ 0x1C00097A0
 * Callers:
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     GetObjectPathNoLock @ 0x1C00097A0 (GetObjectPathNoLock.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00117C0 (AMLIGetNameSpaceObjectPath.c)
 *     FindNSObj @ 0x1C0014150 (FindNSObj.c)
 *     GetObjectPath @ 0x1C0023A98 (GetObjectPath.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00097A0 (GetObjectPathNoLock.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

_QWORD *__fastcall GetObjectPathNoLock(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 ObjectPathNoLock; // rax
  void *v5; // rsi
  __int64 v6; // rdx
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE *v13; // rdx
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  _BYTE *v19; // rax
  __int64 v20; // r9
  _BYTE *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  const char *v24; // r9
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // rcx
  _BYTE *v30; // rax
  int v31; // edx
  _BYTE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rbp
  char v36; // al
  _BYTE *v37; // rcx
  _QWORD *result; // rax

  v1 = 0LL;
  if ( a1 )
  {
    v3 = -1LL;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      result = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x5254535Fu);
      v8 = result;
      if ( !result )
        return result;
      *result = 0LL;
      *(_BYTE *)result = 92;
      goto LABEL_59;
    }
    ObjectPathNoLock = GetObjectPathNoLock();
    v5 = (void *)ObjectPathNoLock;
    if ( !ObjectPathNoLock )
      return 0LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(ObjectPathNoLock + v6) );
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 9, 0x5254535Fu);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_58:
      ExFreePoolWithTag(v5, 0x5254535Fu);
LABEL_59:
      if ( v8 )
      {
        do
          ++v3;
        while ( v8[v3] );
        if ( (int)v3 - 1LL >= 0 )
        {
          v37 = &v8[(int)v3 - 1];
          do
          {
            if ( *v37 != 95 )
              break;
            *v37-- = 0;
          }
          while ( v37 - v8 >= 0 );
        }
      }
      return v8;
    }
    v9 = -1LL;
    do
      ++v9;
    while ( *((_BYTE *)v5 + v9) );
    memset(PoolWithTag, 0, v9 + 9);
    v10 = -1LL;
    do
      ++v10;
    while ( *((_BYTE *)v5 + v10) );
    v11 = v10 + 1;
    if ( (unsigned __int64)(v11 - 1) > 0x7FFFFFFE )
    {
      if ( v11 )
        *v8 = 0;
    }
    else
    {
      v12 = 2147483646 - v11;
      v13 = v8;
      while ( v12 + v11 )
      {
        v14 = v13[(_BYTE *)v5 - v8];
        if ( !v14 )
          break;
        *v13++ = v14;
        if ( !--v11 )
          goto LABEL_72;
      }
      if ( v11 )
        goto LABEL_18;
LABEL_72:
      --v13;
LABEL_18:
      *v13 = 0;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
    {
LABEL_38:
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v5 + v26) );
      v27 = v26 + 9;
      v28 = 0;
      if ( (unsigned __int64)(v27 - 1) > 0x7FFFFFFE )
        v28 = -1073741811;
      if ( v28 >= 0 )
      {
        v29 = v27;
        v30 = v8;
        v31 = 0;
        if ( !v27 )
          goto LABEL_77;
        while ( *v30 )
        {
          ++v30;
          if ( !--v29 )
            goto LABEL_77;
        }
        if ( v29 )
          v1 = v27 - v29;
        else
LABEL_77:
          v31 = -1073741811;
        if ( v31 >= 0 )
        {
          v32 = &v8[v1];
          v33 = v27 - v1;
          if ( v27 == v1 )
            goto LABEL_78;
          v34 = 4LL;
          v35 = a1 - (_QWORD)v32;
          while ( v34 )
          {
            v36 = v32[v35 + 40];
            if ( !v36 )
              break;
            *v32 = v36;
            --v34;
            ++v32;
            if ( !--v33 )
              goto LABEL_78;
          }
          if ( !v33 )
LABEL_78:
            --v32;
          *v32 = 0;
        }
      }
      goto LABEL_58;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v5 + v15) );
    v16 = v15 + 9;
    v17 = 0;
    if ( (unsigned __int64)(v16 - 1) > 0x7FFFFFFE )
      v17 = -1073741811;
    if ( v17 >= 0 )
    {
      v18 = v16;
      v19 = v8;
      v17 = 0;
      if ( v16 )
      {
        while ( *v19 )
        {
          ++v19;
          if ( !--v18 )
            goto LABEL_75;
        }
        if ( v18 )
        {
          v20 = v16 - v18;
          goto LABEL_31;
        }
      }
LABEL_75:
      v17 = -1073741811;
    }
    v20 = 0LL;
LABEL_31:
    if ( v17 >= 0 )
    {
      v21 = &v8[v20];
      v22 = v16 - v20;
      if ( v16 == v20 )
        goto LABEL_67;
      v23 = 2147483646LL;
      v24 = (const char *)("." - v21);
      while ( v23 )
      {
        v25 = v21[(_QWORD)v24];
        if ( !v25 )
          break;
        *v21 = v25;
        --v23;
        ++v21;
        if ( !--v22 )
          goto LABEL_67;
      }
      if ( !v22 )
LABEL_67:
        --v21;
      *v21 = 0;
    }
    goto LABEL_38;
  }
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 1uLL, 0x5254535Fu);
  if ( result )
    *(_BYTE *)result = 0;
  return result;
}
