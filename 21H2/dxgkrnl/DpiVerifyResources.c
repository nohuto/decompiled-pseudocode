/*
 * XREFs of DpiVerifyResources @ 0x1C02144DC
 * Callers:
 *     DpMapMemory @ 0x1C0214250 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C01F43C4 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // rbp
  unsigned int v8; // edi
  _QWORD *v9; // r12
  unsigned int v10; // r15d
  unsigned int *v12; // r13
  __int64 v13; // rax
  unsigned int i; // r14d
  unsigned int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  signed __int64 v20; // rax
  __int64 v21; // r9
  __int64 *v22; // rbx
  __int64 *v23; // r8
  signed __int64 v24; // rdx
  signed __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 (__fastcall *v29)(_QWORD, __int64, __int64, _QWORD **, __int64 *); // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+18h]
  char v35; // [rsp+88h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0;
  v9 = a7;
  v10 = a3;
  *a7 = 0LL;
  v12 = *(unsigned int **)(v7 + 1288);
  if ( !v12 )
  {
    v8 = -1073741811;
    v27 = *a2;
LABEL_30:
    v28 = 3LL;
LABEL_43:
    WdLogSingleEntry1(v28, v27);
    return v8;
  }
  v13 = *a2;
  if ( *a2 != 786432 && v13 != 655360 && v13 != 944 && v13 != 960 )
  {
    for ( i = 0; i < *v12; ++i )
    {
      v15 = 0;
      v16 = (__int64)&v12[9 * i + 3];
      if ( *(_DWORD *)(v16 + 4) )
      {
        do
        {
          v17 = v16 + 4 * (v15 + 4LL * v15 + 2);
          if ( a4 == 1 )
          {
            if ( *(_BYTE *)v17 != 1 )
              goto LABEL_23;
            v18 = *(_QWORD *)(v17 + 4);
            v19 = *(unsigned int *)(v17 + 12);
          }
          else
          {
            if ( a4 || ((*(_BYTE *)v17 - 3) & 0xFB) != 0 )
              goto LABEL_23;
            v18 = *(_QWORD *)(v17 + 4);
            v19 = DpiDecodeResourceDescriptorLength((unsigned __int8 *)v17);
            a4 = v35;
          }
          v20 = v18 + v19;
          if ( *a2 >= v18 && *a2 + v34 <= v20 )
          {
            v10 = v34;
            v9 = a7;
            goto LABEL_16;
          }
LABEL_23:
          ++v15;
        }
        while ( v15 < *(_DWORD *)(v16 + 4) );
      }
    }
    v8 = -1073741811;
    v27 = *a2;
    goto LABEL_30;
  }
  if ( *(_BYTE *)(v7 + 1156) != 1 )
  {
    v8 = -1073741811;
    v27 = -1073741811LL;
    v28 = 2LL;
    goto LABEL_43;
  }
  if ( v13 != 786432 )
  {
    v29 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD **, __int64 *))(v7 + 592);
    if ( v29 )
    {
      v30 = *a2;
      v33 = 0LL;
      LODWORD(a7) = a4 != 0;
      if ( v29(*(_QWORD *)(v7 + 568), v30, a3, &a7, &v33) == 1 )
        *a2 = v33;
    }
  }
LABEL_16:
  KeWaitForSingleObject((PVOID)(v7 + 2520), Executive, 0, 0, 0LL);
  v22 = *(__int64 **)(v7 + 2504);
  v23 = v22;
  if ( (__int64 *)*v22 != v22 )
  {
    v24 = *a2;
    while ( 1 )
    {
      v25 = v22[4];
      if ( v24 < v25 + *((unsigned int *)v22 + 10) && v24 + v10 > v25 )
        break;
      v22 = (__int64 *)*v22;
      if ( (__int64 *)*v22 == v23 )
        goto LABEL_21;
    }
    v31 = *((unsigned int *)v22 + 14);
    *a6 = v31;
    if ( v22[4] == *a2
      && *((_DWORD *)v22 + 10) == v10
      && *((_BYTE *)v22 + 45) == a5
      && (!a5 || v22[6] == PsGetCurrentProcess(v31, v24, v23, v21)) )
    {
      v32 = v22[8];
      ++*((_DWORD *)v22 + 6);
      *v9 = v32;
    }
  }
LABEL_21:
  KeReleaseMutex((PRKMUTEX)(v7 + 2520), 0);
  return v8;
}
