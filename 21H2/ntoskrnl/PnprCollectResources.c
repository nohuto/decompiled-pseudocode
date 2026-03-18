/*
 * XREFs of PnprCollectResources @ 0x140951DE0
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x140764D6C (PipForAllChildDeviceNodes.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnprCollectResources(_QWORD *a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // eax
  PVOID *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  __int64 v33; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-18h]
  __int128 v35; // [rsp+30h] [rbp-10h] BYREF

  v33 = 0LL;
  LOBYTE(v34) = 0;
  v35 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 36LL, 1366322768LL);
  a1[2] = Pool2;
  if ( !Pool2 )
  {
    v5 = 1023;
LABEL_3:
    v6 = PnprContext;
    v7 = -1073741670;
    v8 = *(_DWORD *)(PnprContext + 33272);
    if ( !v8 )
      v8 = v5;
    *(_DWORD *)(PnprContext + 33272) = v8;
    v9 = *(_DWORD *)(v6 + 33276);
    if ( !v9 )
      v9 = 10;
    goto LABEL_49;
  }
  *(_DWORD *)(Pool2 + 12) = 4;
  v10 = ExAllocatePool2(64LL, 36LL, 1366322768LL);
  a2[2] = v10;
  if ( !v10 )
  {
    v5 = 1035;
    goto LABEL_3;
  }
  *(_DWORD *)(v10 + 12) = 4;
  *(_QWORD *)a1[2] = ExAllocatePool2(64LL, 256LL, 1366322768LL);
  v11 = a1[2];
  if ( !*(_QWORD *)v11 )
  {
    v5 = 1053;
    goto LABEL_3;
  }
  *(_DWORD *)(v11 + 8) = 32;
  v12 = ExAllocatePool2(64LL, 80LL, 1366322768LL);
  a1[3] = v12;
  if ( !v12 )
  {
    v5 = 1071;
    goto LABEL_3;
  }
  v13 = ExAllocatePool2(64LL, 80LL, 1366322768LL);
  a2[3] = v13;
  if ( !v13 )
  {
    v5 = 1082;
    goto LABEL_3;
  }
  *(_DWORD *)a1[3] = 4;
  *(_DWORD *)a2[3] = 4;
  *(_QWORD *)&v35 = PnprAddDeviceResources;
  *((_QWORD *)&v35 + 1) = &v33;
  v15 = *a1;
  v34 = a1;
  LOBYTE(v33) = 1;
  if ( v15 )
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
  else
    v16 = 0LL;
  v7 = PipForAllChildDeviceNodes(v16, v14, (__int64)&v35);
  if ( v7 < 0 )
  {
    v18 = PnprContext;
    v19 = *(_DWORD *)(PnprContext + 33272);
    if ( !v19 )
      v19 = 1103;
    *(_DWORD *)(PnprContext + 33272) = v19;
    v20 = *(_DWORD *)(v18 + 33276);
    if ( !v20 )
      v20 = 1;
    *(_DWORD *)(v18 + 33276) = v20;
    goto LABEL_50;
  }
  v21 = *a2;
  v34 = a2;
  LOBYTE(v33) = 0;
  if ( v21 )
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
  else
    v22 = 0LL;
  v7 = PipForAllChildDeviceNodes(v22, v17, (__int64)&v35);
  if ( v7 >= 0 )
  {
    v24 = *(_DWORD *)(a1[2] + 16LL);
    if ( v24 || *(_DWORD *)(a1[3] + 4LL) )
    {
      v26 = *(_QWORD *)(a2[3] + 8LL);
      if ( (!v26 || *(_QWORD *)(a1[3] + 8LL) <= v26) && v24 <= *(_DWORD *)(a2[2] + 16LL) )
        return (unsigned int)v7;
      v6 = PnprContext;
      v27 = *(_DWORD *)(PnprContext + 33272);
      if ( !v27 )
        v27 = 1135;
      *(_DWORD *)(PnprContext + 33272) = v27;
      v9 = *(_DWORD *)(v6 + 33276);
      if ( !v9 )
        v9 = 4;
    }
    else
    {
      v6 = PnprContext;
      v25 = *(_DWORD *)(PnprContext + 33272);
      if ( !v25 )
        v25 = 1126;
      *(_DWORD *)(PnprContext + 33272) = v25;
      v9 = *(_DWORD *)(v6 + 33276);
      if ( !v9 )
        v9 = 5;
    }
    v7 = -1073741811;
  }
  else
  {
    v6 = PnprContext;
    v23 = *(_DWORD *)(PnprContext + 33272);
    if ( !v23 )
      v23 = 1114;
    *(_DWORD *)(PnprContext + 33272) = v23;
    v9 = *(_DWORD *)(v6 + 33276);
    if ( !v9 )
      v9 = 1;
  }
LABEL_49:
  *(_DWORD *)(v6 + 33276) = v9;
LABEL_50:
  v28 = (PVOID *)a1[2];
  if ( v28 )
  {
    if ( *v28 )
    {
      ExFreePoolWithTag(*v28, 0x51706E50u);
      v28 = (PVOID *)a1[2];
    }
    ExFreePoolWithTag(v28, 0x51706E50u);
    a1[2] = 0LL;
  }
  v29 = (void *)a1[3];
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0x51706E50u);
    a1[3] = 0LL;
  }
  v30 = (void *)a2[2];
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0x51706E50u);
    a2[2] = 0LL;
  }
  v31 = (void *)a2[3];
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0x51706E50u);
    a2[3] = 0LL;
  }
  return (unsigned int)v7;
}
