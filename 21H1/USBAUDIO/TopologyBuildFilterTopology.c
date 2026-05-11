/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C002742C
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0023B88 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00142C0 (memset.c)
 *     TopologyCountComponents @ 0x1C0025A14 (TopologyCountComponents.c)
 *     TopologyFreeFunctionUnits @ 0x1C002786C (TopologyFreeFunctionUnits.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // edi
  __int64 *v5; // r8
  __int64 v6; // r15
  unsigned int v7; // edx
  unsigned int i; // r9d
  __int64 v9; // r15
  bool v10; // r14
  __int64 *v11; // r10
  __int64 *v12; // rax
  int v13; // r11d
  bool v14; // zf
  unsigned int v15; // eax
  __int64 *j; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  GUID *PoolWithTag; // rax
  GUID *v27; // rdi
  int v28; // r15d
  size_t v29; // r8
  GUID *v30; // r12
  int *v31; // r14
  int *v32; // rsi
  __int64 v33; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 **v38; // rdi
  unsigned int v39; // r8d
  unsigned int v40; // r9d
  int v41; // eax
  int v42; // eax
  int v43; // edx
  bool k; // zf
  int v45; // r10d
  __int64 v46; // r15
  unsigned __int8 *v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  unsigned int v50; // [rsp+40h] [rbp-28h] BYREF
  int v51; // [rsp+44h] [rbp-24h] BYREF
  int v52; // [rsp+48h] [rbp-20h] BYREF
  NTSTATUS v53; // [rsp+4Ch] [rbp-1Ch] BYREF
  __int64 v54; // [rsp+50h] [rbp-18h]
  int v57; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v58; // [rsp+C8h] [rbp+60h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 80LL);
  v57 = 0;
  v58 = 0;
  v3 = 0;
  v52 = 0;
  v50 = 0;
  v5 = (__int64 *)*v2;
  v6 = a1;
  v14 = *v2 == (_QWORD)v2;
  v53 = 0;
  v51 = 0;
  v7 = 0;
  if ( v14 )
  {
    v3 = -1073741438;
  }
  else
  {
    do
    {
      if ( v3 < 0 )
        break;
      for ( i = 0; i < *((_DWORD *)v5 + 8); ++i )
      {
        v9 = v5[7];
        v10 = 0;
        v3 = -1073741275;
        v11 = 0LL;
        v12 = (__int64 *)*v2;
        v13 = *(_DWORD *)(v9 + 12LL * i);
        while ( v12 != v2 && !v10 )
        {
          v14 = *((_DWORD *)v12 + 4) == v13;
          v10 = v14;
          if ( *((_DWORD *)v12 + 4) == v13 )
            v11 = v12;
          else
            v12 = (__int64 *)*v12;
          if ( v14 )
            v3 = 0;
        }
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v9 + 12LL * i + 4) = *((_DWORD *)v11 + 6);
          *(_DWORD *)(v5[7] + 12LL * i + 8) = *((_DWORD *)v11 + 7);
        }
      }
      if ( *((_DWORD *)v5 + 5) <= 1u )
      {
        v15 = *((_DWORD *)v5 + 16);
        if ( v15 != -1 && v15 > v7 )
          v7 = *((_DWORD *)v5 + 16);
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v2 );
    v6 = a1;
  }
  for ( j = (__int64 *)*v2; j != v2; j = (__int64 *)*j )
  {
    if ( v3 < 0 )
      goto LABEL_35;
    if ( *((_DWORD *)j + 5) <= 1u && *((_DWORD *)j + 16) == -1 )
      *((_DWORD *)j + 16) = ++v7;
  }
  if ( v3 >= 0 )
  {
    TopologyCountComponents(v2, &v52, &v50, &v53, &v51);
    v17 = (unsigned int)v53;
    v18 = (unsigned int)(v52 + 1);
    *(_DWORD *)(a2 + 68) = 168;
    v19 = v50;
    v52 = v18;
    v20 = v50;
    v21 = (unsigned int)v18;
    v22 = 200LL * v50 + 16 * (v18 + v17);
    v54 = v50;
    if ( v22 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v22, 0x41627845u);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v53 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v6 + 8), PoolWithTag, ExFreePool);
    v28 = v53;
    if ( v53 >= 0 )
    {
      v29 = 168 * v20;
      v30 = &v27[v21];
      *(_QWORD *)(a2 + 56) = v27;
      *(_QWORD *)(a2 + 72) = v30;
      v31 = (int *)v30 + 42 * v20;
      *(_QWORD *)(a2 + 88) = v31;
      memset(v30, 0, v29);
      v32 = &v31[4 * v17];
      if ( (_DWORD)v19 )
      {
        v33 = v19;
        Data4 = v30[6].Data4;
        do
        {
          *((_QWORD *)Data4 - 12) = v32;
          v35 = v32 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v35;
          v32 = v35 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 168;
          --v33;
        }
        while ( v33 );
        LODWORD(v19) = v50;
      }
      v36 = 1LL;
      *v27 = KSCATEGORY_AUDIO;
      if ( (v51 & 1) != 0 )
      {
        v36 = 2LL;
        v27[1] = KSCATEGORY_RENDER;
      }
      if ( (v51 & 2) != 0 )
        v27[v36] = KSCATEGORY_CAPTURE;
      v37 = a2;
      *(_DWORD *)(a2 + 48) = v52;
      v38 = (__int64 **)*v2;
      if ( (__int64 *)*v2 == v2 )
      {
LABEL_56:
        if ( v28 >= 0 )
        {
          v39 = v58;
          v40 = 0;
          *(_DWORD *)(v37 + 64) = v57;
          for ( *(_DWORD *)(v37 + 80) = v39; v40 < v39; ++v40 )
          {
            v41 = *v31;
            if ( *v31 != -1 )
            {
              if ( v41 >= 0 )
              {
                v43 = v19;
                for ( k = (_DWORD)v19 == 0; ; k = v45 == 0 )
                {
                  v57 = v43;
                  if ( k )
                    break;
                  v45 = v43 - 1;
                  if ( *v31 == *(&v30[5].Data1 + 42 * (unsigned int)(v43 - 1)) )
                  {
                    v42 = v43 - 1;
                    goto LABEL_67;
                  }
                  --v43;
                }
              }
              else
              {
                v42 = v41 & 0x7FFFFFFF;
LABEL_67:
                *v31 = v42;
                v39 = v58;
              }
            }
            v31 += 4;
          }
          if ( (_DWORD)v19 )
          {
            v46 = v54;
            v47 = v30[1].Data4;
            do
            {
              v48 = 2LL * *((unsigned int *)v47 + 13);
              v49 = dword_1C0016390[4 * *((unsigned int *)v47 + 13)];
              if ( v49 )
              {
                *(_DWORD *)v47 = v49;
                *((_QWORD *)v47 + 1) = (&off_1C0016398)[v48];
                *((_DWORD *)v47 + 1) = 72;
              }
              v47 += 168;
              --v46;
            }
            while ( v46 );
            return (unsigned int)v53;
          }
          return (unsigned int)v28;
        }
      }
      else
      {
        while ( v28 >= 0 )
        {
          v53 = pUnitProcessRtn[*((unsigned int *)v38 + 5)](
                  a1,
                  (int)v38,
                  (int)v30,
                  (int)v31,
                  (__int64)&v57,
                  (__int64)&v58);
          v28 = v53;
          if ( v53 >= 0 )
            v38 = (__int64 **)*v38;
          if ( v38 == (__int64 **)v2 )
          {
            v37 = a2;
            goto LABEL_56;
          }
        }
      }
      TopologyFreeFunctionUnits(a1);
    }
    else
    {
      ExFreePool(v27);
    }
    return (unsigned int)v28;
  }
LABEL_35:
  while ( 1 )
  {
    v25 = (_QWORD *)*v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( (__int64 *)v25[1] != v2 || (v24 = *v25, *(_QWORD **)(*v25 + 8LL) != v25) )
      __fastfail(3u);
    *v2 = v24;
    *(_QWORD *)(v24 + 8) = v2;
    ExFreePool(v25);
  }
  return (unsigned int)v3;
}
