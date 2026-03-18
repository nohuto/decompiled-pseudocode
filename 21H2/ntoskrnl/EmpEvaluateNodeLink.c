/*
 * XREFs of EmpEvaluateNodeLink @ 0x1402DC668
 * Callers:
 *     EmpEvaluateTargetRule @ 0x1402DC420 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1402DC668 (EmpEvaluateNodeLink.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x1402DC668 (EmpEvaluateNodeLink.c)
 *     EmpFreePool @ 0x1402DCA4C (EmpFreePool.c)
 *     EmpAllocatePool @ 0x1402DCA80 (EmpAllocatePool.c)
 *     EmpEvaluateParseNodeMapping @ 0x1402DCAC0 (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
        __int64 a10,
        unsigned int a11)
{
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v20; // r10d
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rsi
  int v29; // edi
  unsigned int v31; // r10d
  int v32; // eax
  unsigned int v34; // [rsp+78h] [rbp-31h]
  unsigned int v35; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned int v36; // [rsp+80h] [rbp-29h]
  int v37; // [rsp+84h] [rbp-25h]
  __int64 v38; // [rsp+88h] [rbp-21h] BYREF
  __int64 v39; // [rsp+90h] [rbp-19h]
  int v41; // [rsp+100h] [rbp+57h]
  unsigned int v44; // [rsp+140h] [rbp+97h]

  v41 = a2;
  v12 = 0LL;
  v38 = a10;
  v13 = 0LL;
  v14 = 0LL;
  v35 = a11;
  v15 = 1;
  v16 = 0LL;
  v17 = *a1;
  v18 = 0LL;
  v20 = a3;
  if ( (unsigned int)*a1 > 1 )
  {
    if ( v17 != 2 )
      return v15;
    v28 = *((_QWORD *)a1 + 1);
    v29 = EmpEvaluateNodeLink(
            *(_QWORD *)(v28 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v28 + 24),
            *(_DWORD *)(v28 + 16),
            a10,
            a11);
    if ( v29 == 1 )
      return v15;
    if ( *(_BYTE *)v28 == 38 )
    {
      if ( !v29 )
        return 0;
    }
    else if ( v29 == 2 && *(_BYTE *)v28 == 124 )
    {
      return 2;
    }
    v32 = EmpEvaluateNodeLink(
            *(_QWORD *)(v28 + 32),
            v41,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v28 + 48),
            *(_DWORD *)(v28 + 40),
            a10,
            a11);
    if ( v32 == 1 )
      return v15;
    if ( *(_BYTE *)v28 == 38 )
    {
      if ( !v29 || !v32 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)v28 != 124 )
        return v15;
      if ( !v29 && !v32 )
        return 0;
    }
    return 2;
  }
  v21 = *((_QWORD *)a1 + 1);
  if ( v17 )
  {
    v12 = *((_QWORD *)a1 + 1);
    if ( !*(_BYTE *)(v21 + 20) )
      return v15;
    v31 = *(_DWORD *)(v21 + 48);
    v23 = *(_DWORD *)(v21 + 40);
    v22 = *(_DWORD *)(v12 + 44);
    v44 = v31;
    v20 = a3;
  }
  else
  {
    v18 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v21 + 16) )
      return v15;
    v22 = *(_DWORD *)(v21 + 60);
    v44 = *(_DWORD *)(v21 + 64);
    v23 = *(_DWORD *)(v21 + 56);
  }
  v34 = v22;
  v24 = a1[4];
  v36 = v23;
  v37 = v24;
  if ( v24 && (v39 = *((_QWORD *)a1 + 3)) != 0 || (v39 = a8, v37 = a9, a8) )
  {
    if ( v23 )
    {
      if ( !is_mul_ok(v23, 8uLL) )
        return v15;
      v13 = EmpAllocatePool(8LL * v23, &v38, &v35);
      if ( !v13 )
        return v15;
    }
    if ( v34 )
    {
      if ( !is_mul_ok(v34, 4uLL) )
        goto LABEL_25;
      v16 = EmpAllocatePool(4LL * v34, &v38, &v35);
      if ( !v16 )
        goto LABEL_25;
    }
    v25 = v44;
    if ( v44 )
    {
      if ( !is_mul_ok(v44, 8uLL) || (v14 = EmpAllocatePool(8LL * v44, &v38, &v35)) == 0 )
      {
        v27 = a11;
LABEL_23:
        if ( v16 )
          EmpFreePool(v16, a10, v27);
LABEL_25:
        if ( v13 )
          EmpFreePool(v13, a10, a11);
        return v15;
      }
      v25 = v44;
    }
    if ( (unsigned __int8)EmpEvaluateParseNodeMapping(v39, v37, v41, a3, a4, a5, a6, a7, v13, v36, v16, v34, v14, v25) )
    {
      if ( *a1 )
        v26 = EmpEvaluateNodeLink(*(_QWORD *)(v12 + 96), v13, v36, v16, v34, v14, v44, 0LL, 0, v38, v35);
      else
        v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned int, _QWORD))(v18 + 16))(
                v14,
                v44,
                v13,
                v36,
                v16,
                v34,
                *(_QWORD *)(v18 + 32));
      v15 = v26;
    }
    v27 = a11;
    if ( v14 )
      EmpFreePool(v14, a10, a11);
    goto LABEL_23;
  }
  if ( v17 )
    return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v12 + 96), a2, v20, a4, a5, a6, a7, 0LL, 0, a10, a11);
  else
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v18 + 16))(
                           a6,
                           a7,
                           a2,
                           a3,
                           a4,
                           a5,
                           *(_QWORD *)(v18 + 32));
}
