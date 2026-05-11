/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C00277CC
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0023ED8 (FilterCreateFilterFactory.c)
 * Callees:
 *     Feature_4145917243__private_IsEnabledDeviceUsage @ 0x1C0003284 (Feature_4145917243__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013D80 (memset.c)
 *     TopologyCountComponents @ 0x1C0025D94 (TopologyCountComponents.c)
 *     TopologyFreeFunctionUnits @ 0x1C0027C20 (TopologyFreeFunctionUnits.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // edi
  __int64 v4; // rsi
  __int64 *v5; // r8
  __int64 v6; // r14
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
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  GUID *PoolWithTag; // rax
  GUID *v25; // rsi
  int v26; // r14d
  size_t v27; // r8
  GUID *v28; // r12
  int *v29; // r15
  unsigned int v30; // r11d
  int *v31; // rdi
  unsigned __int8 *Data4; // rcx
  __int64 v33; // rdx
  _DWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 **v37; // rdi
  __int64 v38; // rax
  unsigned int v39; // r8d
  unsigned int v40; // r9d
  int v41; // eax
  int v42; // eax
  unsigned int v43; // edx
  bool k; // zf
  unsigned int v45; // r10d
  __int64 v46; // r14
  unsigned __int8 *v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  unsigned int v50; // [rsp+40h] [rbp-18h] BYREF
  NTSTATUS v51; // [rsp+44h] [rbp-14h] BYREF
  int v52; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v53[3]; // [rsp+4Ch] [rbp-Ch] BYREF
  unsigned int v56; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v57; // [rsp+B8h] [rbp+60h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 80LL);
  v57 = 0;
  v50 = 0;
  v3 = 0;
  v51 = 0;
  v4 = a2;
  v56 = 0;
  v5 = (__int64 *)*v2;
  v6 = a1;
  v14 = *v2 == (_QWORD)v2;
  v53[0] = 0;
  v52 = 0;
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
    v4 = a2;
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
    TopologyCountComponents(v2, &v51, &v56, (int *)v53, &v52);
    v17 = v56;
    v18 = (unsigned int)(v51 + 1);
    v19 = v53[0];
    v20 = 200LL * v56 + 16 * (v53[0] + v18);
    *(_DWORD *)(v4 + 68) = 168;
    if ( v20 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v20, 0x41627845u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v51 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v6 + 8), PoolWithTag, ExFreePool);
    v26 = v51;
    if ( v51 >= 0 )
    {
      v27 = 168 * v17;
      v28 = &v25[v18];
      *(_QWORD *)(a2 + 56) = v25;
      *(_QWORD *)(a2 + 72) = v28;
      v29 = (int *)v28 + 42 * v17;
      *(_QWORD *)(a2 + 88) = v29;
      memset(v28, 0, v27);
      v30 = v56;
      v31 = &v29[4 * v19];
      if ( v56 )
      {
        Data4 = v28[6].Data4;
        v33 = v56;
        do
        {
          *((_QWORD *)Data4 - 12) = v31;
          v34 = v31 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v34;
          v31 = v34 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 168;
          --v33;
        }
        while ( v33 );
        v26 = v51;
      }
      v35 = 1LL;
      *v25 = KSCATEGORY_AUDIO;
      if ( (v52 & 1) != 0 )
      {
        v35 = 2LL;
        v25[1] = KSCATEGORY_RENDER;
      }
      if ( (v52 & 2) != 0 )
        v25[v35] = KSCATEGORY_CAPTURE;
      v36 = a2;
      *(_DWORD *)(a2 + 48) = v18;
      v37 = (__int64 **)*v2;
      if ( (__int64 *)*v2 == v2 )
      {
LABEL_59:
        if ( v26 >= 0 )
        {
          v39 = v50;
          v40 = 0;
          *(_DWORD *)(v36 + 64) = v57;
          for ( *(_DWORD *)(v36 + 80) = v39; v40 < v39; ++v40 )
          {
            v41 = *v29;
            if ( *v29 != -1 )
            {
              if ( v41 >= 0 )
              {
                v43 = v30;
                for ( k = v30 == 0; ; k = v45 == 0 )
                {
                  v57 = v43;
                  if ( k )
                    break;
                  v45 = v43 - 1;
                  if ( *v29 == *((_DWORD *)&v28[-5] + 42 * v43 - 2) )
                  {
                    v42 = v43 - 1;
                    goto LABEL_70;
                  }
                  --v43;
                }
              }
              else
              {
                v42 = v41 & 0x7FFFFFFF;
LABEL_70:
                *v29 = v42;
                v39 = v50;
              }
            }
            v29 += 4;
          }
          if ( v30 )
          {
            v46 = v56;
            v47 = v28[1].Data4;
            do
            {
              v48 = 2LL * *((unsigned int *)v47 + 13);
              v49 = dword_1C0015390[4 * *((unsigned int *)v47 + 13)];
              if ( v49 )
              {
                *(_DWORD *)v47 = v49;
                *((_QWORD *)v47 + 1) = (&off_1C0015398)[v48];
                *((_DWORD *)v47 + 1) = 72;
              }
              v47 += 168;
              --v46;
            }
            while ( v46 );
            return (unsigned int)v51;
          }
          return (unsigned int)v26;
        }
      }
      else
      {
        while ( v26 >= 0 )
        {
          v14 = (unsigned int)Feature_4145917243__private_IsEnabledDeviceUsage() == 0;
          v38 = *((unsigned int *)v37 + 5);
          if ( v14 || (unsigned int)v38 < 9 )
          {
            v51 = pUnitProcessRtn[v38](a1, (int)v37, (int)v28, (int)v29, (__int64)&v57, (__int64)&v50);
            v26 = v51;
            if ( v51 >= 0 )
              v37 = (__int64 **)*v37;
          }
          else
          {
            v26 = -1073741637;
            v51 = -1073741637;
          }
          if ( v37 == (__int64 **)v2 )
          {
            v30 = v56;
            v36 = a2;
            goto LABEL_59;
          }
        }
      }
      TopologyFreeFunctionUnits(a1);
    }
    else
    {
      ExFreePool(v25);
    }
    return (unsigned int)v26;
  }
LABEL_35:
  while ( 1 )
  {
    v23 = (_QWORD *)*v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( (__int64 *)v23[1] != v2 || (v22 = *v23, *(_QWORD **)(*v23 + 8LL) != v23) )
      __fastfail(3u);
    *v2 = v22;
    *(_QWORD *)(v22 + 8) = v2;
    ExFreePool(v23);
  }
  return (unsigned int)v3;
}
