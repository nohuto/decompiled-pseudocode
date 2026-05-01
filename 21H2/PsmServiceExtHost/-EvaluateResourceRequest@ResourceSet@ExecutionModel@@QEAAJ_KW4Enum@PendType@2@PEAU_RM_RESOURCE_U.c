/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180014E10
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180015D90 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016CE0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180002420 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180015080 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180045B58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180045B64 (--_U@YAPEAX_K@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180064B2C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180071E6C (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x180072034 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 */

__int64 ExecutionModel::ResourceSet::EvaluateResourceRequest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        ...)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  bool v7; // zf
  __int64 v10; // r11
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rdi
  _DWORD *v15; // rax
  void *v16; // rbx
  int v17; // edi
  char v18; // bl
  int v19; // eax
  char *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbx
  int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r13
  char v29; // al
  char *v30; // r15
  char *v31; // r14
  __int64 v32; // rbp
  _QWORD *v33; // rax
  int v34; // r12d
  _QWORD *i; // rcx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v39; // rdx
  struct _RM_SYSTEM_MEMORY_METRICS *v40; // r8
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r10
  __int64 v43; // r11
  unsigned __int64 v44; // rax
  int v45; // r8d
  unsigned __int64 v46; // r9
  __int64 v47; // r9
  unsigned __int64 v48; // r9
  int v49; // ebx
  unsigned int *v50; // r11
  unsigned __int64 v51; // rdi
  __int64 v52; // rdx
  int v53; // r11d
  unsigned int *v54; // r10
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  char v57[8]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-50h]
  unsigned __int64 v59; // [rsp+60h] [rbp-48h]
  unsigned int *v60; // [rsp+68h] [rbp-40h]
  __int64 v64; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  char *v66; // [rsp+E0h] [rbp+38h]
  char *v67; // [rsp+E8h] [rbp+40h]
  va_list va1; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v64 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, char *);
  v67 = va_arg(va1, char *);
  v5 = v64;
  v6 = a1 + 1464;
  v7 = *(_DWORD *)(a1 + 1464) == 2;
  v60 = (unsigned int *)(a1 + 1464);
  v10 = a4;
  v11 = *(_QWORD *)(v64 + 8);
  v12 = a1;
  v13 = 1;
  if ( !v7 )
  {
    v18 = 0;
    v17 = 0;
    goto LABEL_10;
  }
  v14 = *(_QWORD *)(a1 + 64);
  v15 = operator new[](0x18uLL);
  v16 = v15;
  if ( v15 )
  {
    *((_QWORD *)v15 + 1) = 0LL;
    *((_WORD *)v15 + 10) = 0;
    *v15 = -1;
    v15[4] = 101;
    *(_OWORD *)v15 = *(_OWORD *)v6;
    *((_QWORD *)v15 + 2) = *(_QWORD *)(v6 + 16);
    v17 = ExecutionModel::BaseResourceSet::RecursiveVisit(
            v14,
            0,
            1,
            (_DWORD)v15,
            0,
            1,
            (__int64)va,
            (__int64)v57,
            v11,
            0LL);
    if ( v17 >= 0 )
      v17 = 0;
    operator delete(v16);
  }
  else
  {
    v17 = -2147024882;
  }
  if ( v17 < 0 )
  {
    v18 = v64;
    goto LABEL_9;
  }
  if ( v57[0] )
  {
    v18 = v64;
    if ( !(_BYTE)v64 )
    {
LABEL_9:
      v10 = a4;
      v12 = a1;
LABEL_10:
      v19 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    if ( a3 != 1 || *(_QWORD *)(v6 + 8) > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    {
      v18 = 0;
      v17 = -2147220992;
      goto LABEL_9;
    }
    v18 = 1;
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v11);
  }
  v10 = a4;
  v19 = 2;
  v12 = a1;
LABEL_11:
  v20 = v66;
  *(_DWORD *)(v5 + 32) = v19;
  *v20 = v18;
  if ( v17 < 0 )
    return (unsigned int)v17;
  v21 = *(_QWORD *)(v12 + 1448);
  if ( v21 == -1LL || a2 == -1 )
  {
    v22 = -1LL;
  }
  else
  {
    v22 = v21 + a2;
    if ( v21 + a2 < v21 )
      return 3489661077LL;
  }
  v23 = *(_QWORD *)(v12 + 1320);
  v24 = *(_QWORD *)(*(_QWORD *)(v12 + 1312) + 64LL);
  if ( a3 == 1 )
  {
    v25 = 1;
  }
  else if ( a3 )
  {
    v25 = 2;
    if ( a3 != 2 )
      v25 = -1;
  }
  else
  {
    v25 = 0;
  }
  v26 = *(_QWORD *)(v12 + 24);
  v27 = *(unsigned int *)(v12 + 1288);
  LODWORD(v64) = *(_DWORD *)(v12 + 1288);
  v28 = *(_QWORD *)(v26 + 128);
  if ( !v22 )
    goto LABEL_18;
  if ( v22 + a5[2] + 1 >= v22 )
  {
    if ( a5[1] < v22 && *(char *)(v12 + 1378) >= 0 )
      goto LABEL_48;
    v39 = *(unsigned int *)(v28 + 516);
    v59 = *(_QWORD *)(v10 + 48);
    if ( (int)RmpEmPriorityCompare(v27, v39) >= 0 )
      v44 = v41;
    else
      v44 = *(_QWORD *)(v43 + 32);
    v58 = v44;
    if ( v42 >= v41 || v42 >= v44 )
    {
      RmpPolicyEnsureMetricsForAcquire(*(struct _RM_PARTITION **)(v5 + 16), v40);
      if ( (int)RmpEmPriorityCompare((unsigned int)v64, *(unsigned int *)(v28 + 516)) < 0 )
      {
        v46 = v22 + a5[2] - a5[4];
        if ( v46 >= v58 )
        {
          if ( v25 == 2 )
            goto LABEL_48;
          v47 = v46 - v58;
LABEL_61:
          RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(v5 + 16), v24 + 144, v23, v47, v45, v13);
          *(_DWORD *)(v5 + 36) = v13;
          v29 = 1;
          v12 = a1;
LABEL_19:
          v30 = v67;
          v31 = v66;
          *v67 = v29;
          if ( *v31 )
          {
            *(_DWORD *)(v24 + 184) = 0;
            *(_DWORD *)(v5 + 36) = 0;
            *v30 = 0;
          }
          else if ( !v29 )
          {
            v32 = *(_QWORD *)(v12 + 64);
            v33 = *(_QWORD **)(v32 + 40);
            v34 = *(_DWORD *)(v12 + 1288);
            for ( i = v33; ; i = (_QWORD *)*i )
            {
              if ( i == (_QWORD *)(v32 + 40) )
              {
                while ( v33 != (_QWORD *)(v32 + 40) )
                {
                  v37 = v33[2];
                  if ( *(_DWORD *)(v37 + 1280) == 1 && *(_DWORD *)(v37 + 1288) < v34 )
                  {
                    v53 = 0;
                    v54 = (unsigned int *)(a1 + 1440);
                    while ( 1 )
                    {
                      if ( *((_QWORD *)v54 + 1) )
                      {
                        v55 = *v54;
                        if ( *(_QWORD *)(v37 + 24LL * (int)v55 + 80) )
                        {
                          v56 = *(_QWORD *)(v32 + 1272);
                          if ( !_bittest64(&v56, v55) )
                            break;
                        }
                      }
                      ++v53;
                      v54 += 6;
                      if ( v53 )
                        goto LABEL_27;
                    }
                    if ( a3 == 1 )
                    {
                      *v30 = 1;
                      return 0LL;
                    }
                    return 2147746304LL;
                  }
LABEL_27:
                  v33 = (_QWORD *)*v33;
                }
                return 0LL;
              }
              v36 = i[2];
              if ( *(_DWORD *)(v36 + 1280) == 1 && *(_DWORD *)(v36 + 1288) < v34 )
                break;
LABEL_24:
              ;
            }
            v49 = 0;
            v50 = v60;
            while ( 1 )
            {
              if ( *((_QWORD *)v50 + 1) )
              {
                v51 = *v50;
                if ( *(_QWORD *)(v36 + 24LL * (int)v51 + 80) )
                {
                  v52 = *(_QWORD *)(v32 + 1272);
                  if ( !_bittest64(&v52, v51) )
                    break;
                }
              }
              ++v49;
              v50 += 6;
              if ( v49 )
                goto LABEL_24;
            }
            if ( a3 == 1 )
            {
              *v31 = 1;
              return 0LL;
            }
            return 2147746304LL;
          }
          return 0LL;
        }
      }
      v48 = v22 + a5[2];
      if ( v48 >= v59 )
      {
        if ( v25 == 2 )
          goto LABEL_48;
        v13 = 2;
        v47 = v48 - v59 + 1;
        goto LABEL_61;
      }
    }
    v12 = a1;
LABEL_18:
    *(_DWORD *)(v5 + 36) = 0;
    v29 = 0;
    *(_DWORD *)(v24 + 184) = 0;
    goto LABEL_19;
  }
  *(_DWORD *)(v24 + 184) = 0;
LABEL_48:
  *v67 = 0;
  return 2147746304LL;
}
