/*
 * XREFs of PiQueryPowerRelations @ 0x14074C564
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     PnpQueryDeviceRelations @ 0x1407470F8 (PnpQueryDeviceRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14074CA04 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiValidatePowerRelations @ 0x14074CA80 (PiValidatePowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14074CBE8 (PiQueryPowerDependencyRelations.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerRelations(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int DeviceRelations; // edi
  _QWORD *v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  _DWORD *v13; // r8
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r15
  char *PoolWithTag; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  int PowerDependencyRelations; // eax
  PADAPTER_OBJECT *v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  DeviceRelations = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    return 3221225865LL;
  if ( !a2 )
  {
    DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 2, 0LL, (__int64)&P);
    if ( DeviceRelations >= 0 )
    {
      v6 = (_QWORD *)(a1 + 192);
      v7 = *(_QWORD **)(a1 + 192);
      while ( v7 != v6 )
      {
        v8 = *v7;
        v9 = v7;
        v7 = (_QWORD *)v8;
        if ( *(_QWORD **)(v8 + 8) != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v8, *(_QWORD *)(v8 + 8) = v10, v11 = v9[3], *(_QWORD **)(v11 + 8) != v9 + 3)
          || (v12 = (_QWORD *)v9[4], (_QWORD *)*v12 != v9 + 3) )
        {
LABEL_26:
          __fastfail(3u);
        }
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        ExFreePoolWithTag(v9, 0x72775044u);
      }
      v13 = P;
      if ( !P || !*(_DWORD *)P )
      {
        DeviceRelations = 0;
        goto LABEL_29;
      }
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_QWORD *)&v13[2 * v14 + 2];
        if ( !v15 || (v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL)) == 0 || (*(_DWORD *)(v16 + 396) & 0x20000) != 0 )
        {
          v25 = *(_QWORD *)&v13[2 * v14 + 2];
          if ( v25 )
          {
            IoAddTriageDumpDataBlock(v25, (PVOID)*(unsigned __int16 *)(v25 + 2));
            v13 = P;
            v26 = *(_QWORD *)(*((_QWORD *)P + v14 + 1) + 8LL);
            if ( v26 )
            {
              IoAddTriageDumpDataBlock(v26, (PVOID)(unsigned int)*(__int16 *)(v26 + 2));
              v13 = P;
              v27 = (_WORD *)(*(_QWORD *)(*((_QWORD *)P + v14 + 1) + 8LL) + 56LL);
              if ( *v27 )
              {
                IoAddTriageDumpDataBlock((ULONG)v27, (PVOID)2);
                v28 = *(_QWORD *)(*((_QWORD *)P + v14 + 1) + 8LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v28 + 64), (PVOID)*(unsigned __int16 *)(v28 + 56));
                v13 = P;
              }
            }
            v29 = *(_QWORD *)&v13[2 * v14 + 2];
            if ( v29 )
              v30 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
            else
              v30 = 0LL;
            if ( v30 )
            {
              if ( v29 )
                v31 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
              else
                v31 = 0LL;
              if ( v29 )
                v32 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
              else
                LODWORD(v32) = 0;
              IoAddTriageDumpDataBlock(v32, (PVOID)0x310);
              if ( *(_WORD *)(v31 + 40) )
              {
                IoAddTriageDumpDataBlock(v31 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v31 + 48), (PVOID)*(unsigned __int16 *)(v31 + 40));
              }
              v13 = P;
              v33 = *((_QWORD *)P + v14 + 1);
              if ( v33 )
                v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
              else
                v34 = 0LL;
              if ( *(_WORD *)(v34 + 56) )
              {
                if ( v33 )
                  v35 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
                else
                  LODWORD(v35) = 0;
                IoAddTriageDumpDataBlock(v35 + 56, (PVOID)2);
                v36 = *((_QWORD *)P + v14 + 1);
                if ( v36 )
                  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
                else
                  v37 = 0LL;
                if ( v36 )
                  v38 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
                else
                  v38 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v38 + 64), (PVOID)*(unsigned __int16 *)(v37 + 56));
                v13 = P;
              }
              v39 = *(_QWORD *)&v13[2 * v14 + 2];
              if ( v39 )
                v40 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
              else
                v40 = 0LL;
              if ( *(_QWORD *)(v40 + 16) )
              {
                v41 = v39 ? *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v41 + 16) + 56LL) )
                {
                  if ( v39 )
                    v42 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
                  else
                    v42 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v42 + 16) + 56, (PVOID)2);
                  v43 = *((_QWORD *)P + v14 + 1);
                  if ( v43 )
                    v44 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
                  else
                    v44 = 0LL;
                  if ( v43 )
                    v45 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
                  else
                    v45 = 0LL;
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v45 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v44 + 16) + 56LL));
                  v13 = P;
                }
              }
            }
          }
          KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)&v13[2 * v14 + 2], 0LL, 0LL);
        }
        if ( *(_QWORD *)(v16 + 16) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72775044u);
          if ( !PoolWithTag )
          {
            DeviceRelations = -1073741670;
            goto LABEL_29;
          }
          PoolWithTag[48] = 0;
          *((_QWORD *)PoolWithTag + 2) = a1 + 160;
          *((_QWORD *)PoolWithTag + 5) = v16 + 160;
          v18 = *(_QWORD **)(a1 + 200);
          if ( (_QWORD *)*v18 != v6 )
            goto LABEL_26;
          *(_QWORD *)PoolWithTag = v6;
          v19 = v16 + 176;
          *((_QWORD *)PoolWithTag + 1) = v18;
          *v18 = PoolWithTag;
          *(_QWORD *)(a1 + 200) = PoolWithTag;
          v20 = PoolWithTag + 24;
          v21 = *(_QWORD **)(v19 + 8);
          if ( *v21 != v19 )
            goto LABEL_26;
          *v20 = v19;
          v20[1] = v21;
          *v21 = v20;
          *(_QWORD *)(v19 + 8) = v20;
          v13 = P;
        }
        if ( ++v14 >= *v13 )
          goto LABEL_29;
      }
    }
    P = 0LL;
  }
LABEL_29:
  PowerDependencyRelations = PiQueryPowerDependencyRelations(a1);
  if ( DeviceRelations >= 0 && PowerDependencyRelations < 0 )
    DeviceRelations = PowerDependencyRelations;
  PiValidatePowerRelations(a1);
  v23 = (PADAPTER_OBJECT *)P;
  if ( P )
  {
    if ( *(_DWORD *)P )
    {
      do
      {
        HalPutDmaAdapter(v23[v2 + 1]);
        v23 = (PADAPTER_OBJECT *)P;
        ++v2;
      }
      while ( v2 < *(_DWORD *)P );
    }
    ExFreePoolWithTag(v23, 0);
  }
  PpDevNodeLockTree(0);
  v24 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v24 - 768) > 1 && (unsigned int)(v24 - 787) > 1 )
    PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(a1 + 32));
  PpDevNodeUnlockTree(0);
  return (unsigned int)DeviceRelations;
}
