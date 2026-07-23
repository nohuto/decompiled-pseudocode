/*
 * XREFs of PnprCollectResources @ 0x1408AD494
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PipForAllChildDeviceNodes @ 0x1406179F8 (PipForAllChildDeviceNodes.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprCollectResources(__int64 *a1, __int64 *a2)
{
  _OWORD *PoolWithTag; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _OWORD *v11; // rax
  void *v12; // rcx
  PVOID v13; // rax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edx
  unsigned __int64 v28; // rcx
  int v29; // eax
  PVOID *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  __int128 v35; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v36[2]; // [rsp+30h] [rbp-28h] BYREF

  v36[0] = 0LL;
  v35 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x51706E50u);
  a1[2] = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 8) = 0;
    *(_DWORD *)(a1[2] + 12) = 4;
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x51706E50u);
    a2[2] = (__int64)v11;
    if ( !v11 )
    {
      v5 = 1037;
      goto LABEL_3;
    }
    *v11 = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 8) = 0;
    *(_DWORD *)(a2[2] + 12) = 4;
    *(_QWORD *)a1[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x51706E50u);
    v12 = *(void **)a1[2];
    if ( !v12 )
    {
      v5 = 1057;
      goto LABEL_3;
    }
    memset(v12, 0, 0xA0uLL);
    *(_DWORD *)(a1[2] + 8) = 20;
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x51706E50u);
    a1[3] = (__int64)v13;
    if ( !v13 )
    {
      v5 = 1076;
      goto LABEL_3;
    }
    v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x51706E50u);
    a2[3] = (__int64)v14;
    if ( !v14 )
    {
      v5 = 1087;
      goto LABEL_3;
    }
    memset((void *)a1[3], 0, 0x50uLL);
    memset((void *)a2[3], 0, 0x50uLL);
    *(_DWORD *)a1[3] = 4;
    *(_DWORD *)a2[3] = 4;
    *(_QWORD *)&v36[0] = PnprAddDeviceResources;
    *((_QWORD *)&v36[0] + 1) = &v35;
    v16 = *a1;
    *((_QWORD *)&v35 + 1) = a1;
    LOBYTE(v35) = 1;
    if ( v16 )
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
    else
      v17 = 0LL;
    v7 = PipForAllChildDeviceNodes(v17, v15, (__int64)v36);
    if ( v7 < 0 )
    {
      v19 = PnprContext;
      v20 = *(_DWORD *)(PnprContext + 20984);
      if ( !v20 )
        v20 = 1110;
      *(_DWORD *)(PnprContext + 20984) = v20;
      v21 = *(_DWORD *)(v19 + 20988);
      if ( !v21 )
        v21 = 1;
      *(_DWORD *)(v19 + 20988) = v21;
      goto LABEL_48;
    }
    v22 = *a2;
    *((_QWORD *)&v35 + 1) = a2;
    LOBYTE(v35) = 0;
    if ( v22 )
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
    else
      v23 = 0LL;
    v7 = PipForAllChildDeviceNodes(v23, v18, (__int64)v36);
    if ( v7 >= 0 )
    {
      v27 = *(_DWORD *)(a1[2] + 16);
      if ( !v27 && !*(_DWORD *)(a1[3] + 4) )
      {
        v6 = PnprContext;
        v7 = -1073741811;
        v8 = *(_DWORD *)(PnprContext + 20984);
        if ( !v8 )
          v8 = 1133;
        v9 = 5;
        goto LABEL_6;
      }
      v28 = *(_QWORD *)(a2[3] + 8);
      if ( (!v28 || *(_QWORD *)(a1[3] + 8) <= v28) && v27 <= *(_DWORD *)(a2[2] + 16) )
      {
LABEL_48:
        if ( v7 >= 0 )
          return (unsigned int)v7;
        goto LABEL_49;
      }
      v24 = PnprContext;
      v7 = -1073741811;
      v29 = *(_DWORD *)(PnprContext + 20984);
      if ( !v29 )
        v29 = 1142;
      *(_DWORD *)(PnprContext + 20984) = v29;
      v26 = *(_DWORD *)(v24 + 20988);
      if ( !v26 )
        v26 = 4;
    }
    else
    {
      v24 = PnprContext;
      v25 = *(_DWORD *)(PnprContext + 20984);
      if ( !v25 )
        v25 = 1121;
      *(_DWORD *)(PnprContext + 20984) = v25;
      v26 = *(_DWORD *)(v24 + 20988);
      if ( !v26 )
        v26 = 1;
    }
    *(_DWORD *)(v24 + 20988) = v26;
    goto LABEL_48;
  }
  v5 = 1024;
LABEL_3:
  v6 = PnprContext;
  v7 = -1073741670;
  v8 = *(_DWORD *)(PnprContext + 20984);
  if ( !v8 )
    v8 = v5;
  v9 = 10;
LABEL_6:
  *(_DWORD *)(v6 + 20984) = v8;
  v10 = *(_DWORD *)(v6 + 20988);
  if ( !v10 )
    v10 = v9;
  *(_DWORD *)(v6 + 20988) = v10;
LABEL_49:
  v30 = (PVOID *)a1[2];
  if ( v30 )
  {
    if ( *v30 )
    {
      ExFreePoolWithTag(*v30, 0x51706E50u);
      v30 = (PVOID *)a1[2];
    }
    ExFreePoolWithTag(v30, 0x51706E50u);
    a1[2] = 0LL;
  }
  v31 = (void *)a1[3];
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0x51706E50u);
    a1[3] = 0LL;
  }
  v32 = (void *)a2[2];
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0x51706E50u);
    a2[2] = 0LL;
  }
  v33 = (void *)a2[3];
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0x51706E50u);
    a2[3] = 0LL;
  }
  return (unsigned int)v7;
}
