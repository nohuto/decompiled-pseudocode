/*
 * XREFs of FilterEvalStrict @ 0x1406B0448
 * Callers:
 *     FilterEvalStrict @ 0x1406B0448 (FilterEvalStrict.c)
 *     FilterEval @ 0x1407795E4 (FilterEval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     FilterEvalStrict @ 0x1406B0448 (FilterEvalStrict.c)
 *     FindFilterOperatorClose @ 0x1406B06CC (FindFilterOperatorClose.c)
 *     PropertyEval @ 0x1406B074C (PropertyEval.c)
 */

__int64 __fastcall FilterEvalStrict(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v8; // r14d
  _DWORD *v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned int *v13; // rdi
  unsigned int v14; // r13d
  unsigned int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // r12d
  bool v23; // zf
  unsigned int v24; // r12d
  __int64 v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-2Ch] BYREF
  int v29; // [rsp+48h] [rbp-28h]
  int v30; // [rsp+4Ch] [rbp-24h]
  unsigned int v31; // [rsp+50h] [rbp-20h]
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v33; // [rsp+60h] [rbp-10h]
  unsigned int v36; // [rsp+C0h] [rbp+50h] BYREF

  v30 = 1;
  v36 = 0;
  v29 = 0;
  v27 = 0;
  v32 = 0LL;
  v28 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v8 = *(_DWORD *)a4 & 0xFF00000;
  if ( !v8 )
    return 3221225485LL;
  v9 = a5;
  *a5 = 0;
  result = FindFilterOperatorClose(a3, a4, &v36);
  v12 = result;
  if ( (_DWORD)result )
    return result;
  v13 = (unsigned int *)(a4 + 56);
  v14 = -1073741823;
  v33 = (unsigned int *)(v11 + 56LL * v36);
  v15 = a3 - v36;
  v16 = a3 - 1;
  v31 = v15;
  if ( v8 == 0x100000 || v8 == 3145728 )
  {
    while ( 1 )
    {
      if ( v16 <= 1 )
        goto LABEL_29;
      v36 = 0;
      *v9 = 0;
      if ( (*v13 & 0xFF00000) != 0 )
      {
        result = FindFilterOperatorClose(v16, v13, &v36);
        v22 = v36 + 1;
        if ( (_DWORD)result )
          return result;
        result = FilterEvalStrict((_DWORD)a1, a2, v22, (_DWORD)v13, (__int64)v9);
        v12 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v30 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v13 += 14 * v22;
        v16 -= v22;
        goto LABEL_12;
      }
      result = a1(a2, v13 + 2, &v27, &v28, &v32);
      v12 = result;
      if ( (_DWORD)result != -1073741275 )
        break;
      v12 = 0;
      if ( (*v13 & 0xFFF) == 1 )
      {
        v17 = 0LL;
        v19 = 0LL;
        v18 = 0LL;
        v27 = 0;
        v32 = 0LL;
        v28 = 0;
LABEL_11:
        LODWORD(v25) = v13[10];
        PropertyEval(v17, v18, v19, *v13, v25, *((_QWORD *)v13 + 6), v13[11], v9);
        v13 += 14;
        --v16;
LABEL_12:
        if ( *v9 == (v8 == 3145728) )
        {
          v13 = v33;
          v20 = 1;
          v16 = v31;
          goto LABEL_14;
        }
      }
      else
      {
        v30 = 0;
        v13 += 14;
        --v16;
      }
    }
    if ( (_DWORD)result )
      return result;
    v17 = v27;
    v18 = v32;
    v19 = v28;
    goto LABEL_11;
  }
  if ( v8 != 5242880 )
    return 3221225485LL;
  if ( (*v13 & 0xFF00000) != 0 )
  {
    result = FindFilterOperatorClose(v16, v13, &v36);
    v24 = v36 + 1;
    if ( !(_DWORD)result )
    {
      result = FilterEvalStrict((_DWORD)a1, a2, v24, (_DWORD)v13, (__int64)v9);
      v12 = result;
      if ( !(_DWORD)result )
      {
        v13 += 14 * v24;
        v16 -= v24;
LABEL_45:
        *v9 = *v9 == 0;
LABEL_29:
        v20 = v29;
LABEL_14:
        if ( !v16 )
          return 3221225485LL;
        v21 = *v13 & 0xFF00000;
        if ( v21 == 0x200000 )
        {
          if ( v8 == 0x100000 )
          {
LABEL_17:
            if ( v20 || v30 || v12 )
              return v12;
            return v14;
          }
        }
        else
        {
          if ( v21 == 0x400000 )
          {
            v23 = v8 == 3145728;
          }
          else
          {
            if ( v21 != 6291456 )
              return 3221225485LL;
            v23 = v8 == 5242880;
          }
          if ( v23 )
            goto LABEL_17;
        }
        return 3221225485LL;
      }
    }
  }
  else
  {
    result = a1(a2, (unsigned int *)(a4 + 64), &v27, &v28, &v32);
    v12 = result;
    if ( (_DWORD)result == -1073741275 )
      return v14;
    if ( !(_DWORD)result )
    {
      LODWORD(v26) = *(_DWORD *)(a4 + 96);
      PropertyEval(v27, v32, v28, *v13, v26, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 100), v9);
      --v16;
      v13 = (unsigned int *)(a4 + 112);
      goto LABEL_45;
    }
  }
  return result;
}
