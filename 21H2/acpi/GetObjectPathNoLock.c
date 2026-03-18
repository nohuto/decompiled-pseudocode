/*
 * XREFs of GetObjectPathNoLock @ 0x1C0010780
 * Callers:
 *     AMLIGetNameSpaceObjectPath @ 0x1C000661C (AMLIGetNameSpaceObjectPath.c)
 *     GetObjectPathNoLock @ 0x1C0010780 (GetObjectPathNoLock.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0010780 (GetObjectPathNoLock.c)
 */

_BYTE *__fastcall GetObjectPathNoLock(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 ObjectPathNoLock; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  _BYTE *Pool2; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE *v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _BYTE *v17; // rax
  int v18; // r8d
  _BYTE *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  const char *v22; // r9
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rax
  int v28; // r8d
  _BYTE *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbp
  char v33; // r8
  _BYTE *v34; // rcx
  _BYTE *result; // rax
  __int64 v36; // rax

  v1 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = -1LL;
    if ( v3 )
    {
      ObjectPathNoLock = GetObjectPathNoLock(v3);
      v6 = (_BYTE *)ObjectPathNoLock;
      if ( !ObjectPathNoLock )
        return 0LL;
      v7 = -1LL;
      do
        ++v7;
      while ( *(_BYTE *)(ObjectPathNoLock + v7) );
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v7 + 9, 1381258079LL);
      if ( Pool2 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v6[v9] );
        v10 = v9 + 1;
        if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
        {
          if ( v10 )
            *Pool2 = 0;
        }
        else
        {
          v11 = 2147483646 - v10;
          v12 = Pool2;
          while ( v11 + v10 )
          {
            v13 = v12[v6 - Pool2];
            if ( !v13 )
            {
              if ( v10 )
                break;
LABEL_63:
              --v12;
              break;
            }
            *v12++ = v13;
            if ( !--v10 )
              goto LABEL_63;
          }
          *v12 = 0;
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v6[v14] );
          v15 = v14 + 9;
          if ( (unsigned __int64)(v15 - 1) <= 0x7FFFFFFE )
          {
            v16 = v15;
            v17 = Pool2;
            v18 = 0;
            while ( *v17 )
            {
              ++v17;
              if ( !--v16 )
              {
                v18 = -1073741811;
                v36 = 0LL;
                goto LABEL_26;
              }
            }
            v36 = v15 - v16;
LABEL_26:
            if ( v18 >= 0 )
            {
              v19 = &Pool2[v36];
              v20 = v15 - v36;
              if ( v15 == v36 )
              {
LABEL_58:
                --v19;
              }
              else
              {
                v21 = 2147483646LL;
                v22 = (const char *)("." - v19);
                while ( v21 )
                {
                  v23 = v19[(_QWORD)v22];
                  if ( !v23 )
                  {
                    if ( !v20 )
                      goto LABEL_58;
                    break;
                  }
                  *v19 = v23;
                  --v21;
                  ++v19;
                  if ( !--v20 )
                    goto LABEL_58;
                }
              }
              *v19 = 0;
            }
          }
        }
        v24 = -1LL;
        do
          ++v24;
        while ( v6[v24] );
        v25 = v24 + 9;
        if ( (unsigned __int64)(v25 - 1) <= 0x7FFFFFFE )
        {
          v26 = v25;
          v27 = Pool2;
          v28 = 0;
          while ( *v27 )
          {
            ++v27;
            if ( !--v26 )
            {
              v28 = -1073741811;
              goto LABEL_41;
            }
          }
          v1 = v25 - v26;
LABEL_41:
          if ( v28 >= 0 )
          {
            v29 = &Pool2[v1];
            v30 = v25 - v1;
            if ( v25 == v1 )
            {
LABEL_66:
              --v29;
            }
            else
            {
              v31 = 4LL;
              v32 = a1 - (_QWORD)v29;
              while ( v31 )
              {
                v33 = v29[v32 + 40];
                if ( !v33 )
                {
                  if ( !v30 )
                    goto LABEL_66;
                  break;
                }
                *v29 = v33;
                --v31;
                ++v29;
                if ( !--v30 )
                  goto LABEL_66;
              }
            }
            *v29 = 0;
          }
        }
      }
      ExFreePoolWithTag(v6, 0x5254535Fu);
      if ( !Pool2 )
        return Pool2;
      goto LABEL_51;
    }
    result = (_BYTE *)ExAllocatePool2(64LL, 8LL, 1381258079LL);
    Pool2 = result;
    if ( result )
    {
      *result = 92;
      do
LABEL_51:
        ++v4;
      while ( Pool2[v4] );
      if ( (int)v4 - 1LL >= 0 )
      {
        v34 = &Pool2[(int)v4 - 1];
        do
        {
          if ( *v34 != 95 )
            break;
          *v34-- = 0;
        }
        while ( v34 - Pool2 >= 0 );
      }
      return Pool2;
    }
  }
  else
  {
    result = (_BYTE *)ExAllocatePool2(64LL, 1LL, 1381258079LL);
    if ( result )
      *result = 0;
  }
  return result;
}
