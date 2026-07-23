/*
 * XREFs of EmpEvaluateNodeLink @ 0x140373C6C
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140373A28 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140373C6C (EmpEvaluateNodeLink.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     EmpEvaluateNodeLink @ 0x140373C6C (EmpEvaluateNodeLink.c)
 *     EmpFreePool @ 0x140374068 (EmpFreePool.c)
 *     EmpAllocatePool @ 0x14037409C (EmpAllocatePool.c)
 *     EmpEvaluateParseNodeMapping @ 0x1403740DC (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        ULONGLONG a10,
        unsigned int a11)
{
  int v13; // r10d
  int v14; // eax
  __int64 v15; // rsi
  __int64 Pool; // r15
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rsi
  int v28; // edi
  unsigned int v30; // r10d
  int v31; // ecx
  unsigned int ullMultiplicand; // [rsp+78h] [rbp-31h]
  unsigned int v34; // [rsp+80h] [rbp-29h]
  int v35; // [rsp+84h] [rbp-25h]
  ULONGLONG pullResult; // [rsp+88h] [rbp-21h] BYREF
  ULONGLONG v37; // [rsp+90h] [rbp-19h]
  __int64 v38; // [rsp+98h] [rbp-11h]
  int v40; // [rsp+100h] [rbp+57h]
  unsigned int v43; // [rsp+140h] [rbp+97h]

  v40 = a2;
  v37 = a10;
  v13 = a3;
  pullResult = 0LL;
  v14 = *a1;
  v15 = 0LL;
  Pool = 0LL;
  v17 = 1;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)*a1 > 1 )
  {
    if ( v14 != 2 )
      return v17;
    v27 = *((_QWORD *)a1 + 1);
    v28 = EmpEvaluateNodeLink(
            *(_QWORD *)(v27 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v27 + 24),
            *(_DWORD *)(v27 + 16),
            a10,
            a11);
    if ( v28 == 1 )
      return v17;
    if ( *(_BYTE *)v27 == 38 )
    {
      if ( !v28 )
        return 0;
    }
    else if ( v28 == 2 && *(_BYTE *)v27 == 124 )
    {
      return 2;
    }
    v31 = EmpEvaluateNodeLink(
            *(_QWORD *)(v27 + 32),
            v40,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v27 + 48),
            *(_DWORD *)(v27 + 40),
            a10,
            a11);
    if ( v31 == 1 )
      return v17;
    if ( *(_BYTE *)v27 == 38 )
    {
      if ( v28 && v31 )
        return 2;
      v17 = 0;
    }
    if ( *(_BYTE *)v27 != 124 )
      return v17;
    if ( !v28 && !v31 )
      return 0;
    return 2;
  }
  v21 = *((_QWORD *)a1 + 1);
  if ( v14 )
  {
    v15 = *((_QWORD *)a1 + 1);
    if ( !*(_BYTE *)(v21 + 20) )
      return v17;
    v30 = *(_DWORD *)(v21 + 48);
    v23 = *(_DWORD *)(v21 + 40);
    v22 = *(_DWORD *)(v15 + 44);
    v43 = v30;
    v13 = a3;
  }
  else
  {
    v20 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v21 + 16) )
      return v17;
    v22 = *(_DWORD *)(v21 + 60);
    v43 = *(_DWORD *)(v21 + 64);
    v23 = *(_DWORD *)(v21 + 56);
  }
  ullMultiplicand = v22;
  v34 = v23;
  v35 = a1[4];
  if ( v35 && (v38 = *((_QWORD *)a1 + 3)) != 0 || (v38 = a8, v35 = a9, a8) )
  {
    if ( v23 )
    {
      if ( RtlULongLongMult(v23, 8uLL, &pullResult) < 0 )
        return v17;
      Pool = EmpAllocatePool(pullResult);
      if ( !Pool )
        return v17;
    }
    if ( ullMultiplicand )
    {
      if ( RtlULongLongMult(ullMultiplicand, 4uLL, &pullResult) < 0 )
        goto LABEL_25;
      v19 = EmpAllocatePool(pullResult);
      if ( !v19 )
        goto LABEL_25;
    }
    v24 = v43;
    if ( v43 )
    {
      if ( RtlULongLongMult(v43, 8uLL, &pullResult) < 0 || (v18 = EmpAllocatePool(pullResult)) == 0 )
      {
        v26 = a11;
LABEL_23:
        if ( v19 )
          EmpFreePool(v19, a10, v26);
LABEL_25:
        if ( Pool )
          EmpFreePool(Pool, a10, a11);
        return v17;
      }
      v24 = v43;
    }
    if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                            v38,
                            v35,
                            v40,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            Pool,
                            v34,
                            v19,
                            ullMultiplicand,
                            v18,
                            v24) )
    {
      if ( *a1 )
        v25 = EmpEvaluateNodeLink(*(_QWORD *)(v15 + 96), Pool, v34, v19, ullMultiplicand, v18, v43, 0LL, 0, v37, a11);
      else
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned int, _QWORD))(v20 + 16))(
                v18,
                v43,
                Pool,
                v34,
                v19,
                ullMultiplicand,
                *(_QWORD *)(v20 + 32));
      v17 = v25;
    }
    v26 = a11;
    if ( v18 )
      EmpFreePool(v18, a10, a11);
    goto LABEL_23;
  }
  if ( v14 )
    return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v15 + 96), a2, v13, a4, a5, a6, a7, 0LL, 0, a10, a11);
  else
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v20 + 16))(
                           a6,
                           a7,
                           a2,
                           a3,
                           a4,
                           a5,
                           *(_QWORD *)(v20 + 32));
}
