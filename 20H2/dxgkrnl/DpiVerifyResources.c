/*
 * XREFs of DpiVerifyResources @ 0x1C01919A4
 * Callers:
 *     DpMapMemory @ 0x1C0191720 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C017536C (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rdi
  signed __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 *v12; // r14
  char v13; // bp
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int *v16; // r13
  unsigned int v17; // r12d
  unsigned __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 *v20; // r8
  signed __int64 v21; // rdx
  signed __int64 v22; // rcx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD, __int64, _QWORD, BOOL *, __int64 *); // rax
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  BOOL v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v33; // [rsp+40h] [rbp-48h]
  __int64 v34; // [rsp+48h] [rbp-40h]
  __int64 v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+A0h] [rbp+18h]
  char v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v34 = *(_QWORD *)(a1 + 64);
  v7 = v34;
  v11 = a3;
  v12 = (__int64 *)a2;
  v13 = 0;
  LOBYTE(a3) = 0;
  *a7 = 0LL;
  v33 = *(unsigned int **)(v7 + 1288);
  if ( !v33 )
  {
LABEL_33:
    v8 = -1073741811;
    v24 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v24 + 24) = *v12;
    WdLogEvent5_WdWarning(v24);
    return v8;
  }
  v14 = *(_QWORD *)a2;
  a1 = 786432LL;
  if ( *(_QWORD *)a2 == 786432LL || v14 == 655360 || v14 == 944 || v14 == 960 )
  {
    if ( *(_BYTE *)(v7 + 1155) != 1 )
    {
      v8 = -1073741811;
      v30 = WdLogNewEntry5_WdError(786432LL, a2);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v30);
      return v8;
    }
    if ( v14 != 786432 )
    {
      v25 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, __int64 *))(v7 + 592);
      if ( v25 )
      {
        v26 = *(_QWORD *)a2;
        v32 = 0LL;
        v31 = a4 != 0;
        v27 = v25(*(_QWORD *)(v7 + 568), v26, v11, &v31, &v32);
        a4 = v37;
        LOBYTE(a3) = 0;
        if ( v27 == 1 )
          *v12 = v32;
      }
    }
    v13 = 1;
  }
  v15 = 0;
  if ( v13 == 1 )
    goto LABEL_20;
  v16 = v33;
  do
  {
    if ( v15 >= *v16 )
      break;
    v17 = 0;
    a1 = 9LL * v15;
    a2 = (__int64)&v16[9 * v15 + 3];
    v35 = a2;
    if ( !*(_DWORD *)(a2 + 4) )
      goto LABEL_18;
    while ( 1 )
    {
      a1 = a2 + 4 * (v17 + 4LL * v17 + 2);
      if ( a4 == 1 )
        break;
      if ( !a4 && ((*(_BYTE *)a1 - 3) & 0xFB) == 0 )
      {
        v9 = *(_QWORD *)(a1 + 4);
        v18 = DpiDecodeResourceDescriptorLength((unsigned __int8 *)a1, a2, a3);
        a2 = v35;
        LOBYTE(a3) = 1;
        a4 = v37;
        v10 = v9 + v18;
      }
LABEL_14:
      if ( (_BYTE)a3 == 1 )
        goto LABEL_15;
LABEL_31:
      if ( ++v17 >= *(_DWORD *)(a2 + 4) )
        goto LABEL_18;
    }
    if ( *(_BYTE *)a1 != 1 )
      goto LABEL_14;
    v9 = *(_QWORD *)(a1 + 4);
    v10 = v9 + *(unsigned int *)(a1 + 12);
LABEL_15:
    a1 = *v12;
    LOBYTE(a3) = 0;
    if ( *v12 < v9 || a1 + v36 > v10 )
      goto LABEL_31;
    v13 = 1;
LABEL_18:
    ++v15;
  }
  while ( v13 != 1 );
  v7 = v34;
  v11 = v36;
LABEL_20:
  if ( !v13 )
    goto LABEL_33;
  KeWaitForSingleObject((PVOID)(v7 + 2520), Executive, 0, 0, 0LL);
  v19 = *(__int64 **)(v7 + 2504);
  v20 = v19;
  if ( (__int64 *)*v19 != v19 )
  {
    v21 = *v12;
    while ( 1 )
    {
      v22 = v19[4];
      if ( v21 < v22 + *((unsigned int *)v19 + 10) && v21 + v11 > v22 )
        break;
      v19 = (__int64 *)*v19;
      if ( (__int64 *)*v19 == v20 )
        goto LABEL_26;
    }
    v28 = *((unsigned int *)v19 + 14);
    *a6 = v28;
    if ( v19[4] == *v12
      && *((_DWORD *)v19 + 10) == v11
      && *((_BYTE *)v19 + 45) == a5
      && (!a5 || v19[6] == PsGetCurrentProcess(v28, v21)) )
    {
      v29 = v19[8];
      ++*((_DWORD *)v19 + 6);
      *a7 = v29;
    }
  }
LABEL_26:
  KeReleaseMutex((PRKMUTEX)(v7 + 2520), 0);
  return v8;
}
