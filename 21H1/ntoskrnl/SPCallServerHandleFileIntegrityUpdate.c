/*
 * XREFs of SPCallServerHandleFileIntegrityUpdate @ 0x140713C24
 * Callers:
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x1403F5450 (ZwSetCachedSigningLevel.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleFileIntegrityUpdate(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  void *v5; // rsi
  unsigned int *v6; // rdx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r11
  unsigned int *v10; // r10
  signed int v11; // ebx
  void **v12; // rax
  unsigned int *v13; // rax
  unsigned int j; // r9d
  unsigned int v15; // r10d
  void **v16; // r9
  unsigned int v17; // r10d
  unsigned int *v18; // r9
  unsigned int *v19; // rax
  unsigned int m; // r8d
  __int64 v21; // rax
  unsigned int *v22; // r9
  unsigned int v23; // r8d
  _OWORD *v24; // r14
  void *v25; // r15
  NTSTATUS v26; // eax
  struct _DMA_ADAPTER *v27; // r12
  struct _IRP *v28; // r15
  __int64 v29; // r13
  struct _IRP *v30; // r14
  char *v31; // rax
  __int64 v32; // r8
  _DWORD *v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v39; // r15
  unsigned int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // r10d
  unsigned int *v44; // r9
  unsigned int *v45; // rax
  unsigned int *v46; // rax
  unsigned int k; // r9d
  __int64 v48; // r11
  unsigned int *v49; // r10
  __int64 v50; // r11
  unsigned int *v51; // r10
  HANDLE TargetFile; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  __int128 v54; // [rsp+58h] [rbp-18h]
  unsigned int v55; // [rsp+B0h] [rbp+40h]
  unsigned int v56; // [rsp+B8h] [rbp+48h]
  __int64 v57; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v57) = a3;
  v56 = 0;
  v55 = 0;
  v5 = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v7 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v7;
      v10 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_7;
      v7 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_7;
    }
    v15 = *v7;
    v16 = (void **)(v7 + 1);
    if ( v7 + 1 < v7 )
    {
LABEL_7:
      v11 = -1073741675;
    }
    else
    {
      v12 = 0LL;
      if ( v15 )
        v12 = v16;
      v11 = 0;
      if ( v15 != 8 )
        return (unsigned int)-1073741762;
      v5 = *v12;
    }
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( v6 && *(_DWORD *)a1 > 4u )
    {
      v13 = *(unsigned int **)(a1 + 8);
      for ( j = 0; j < 4; ++j )
      {
        v48 = *v13;
        v49 = v13 + 1;
        if ( v13 + 1 < v13 )
          goto LABEL_101;
        v13 = (unsigned int *)((char *)v49 + v48);
        if ( (unsigned int *)((char *)v49 + v48) < v49 )
          goto LABEL_101;
      }
      v43 = *v13;
      v44 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
LABEL_101:
        v11 = -1073741675;
      }
      else
      {
        v45 = 0LL;
        if ( v43 )
          v45 = v44;
        v11 = 0;
        if ( v43 != 4 )
          return (unsigned int)-1073741789;
        v56 = *v45;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v6 && *(_DWORD *)a1 > 5u )
    {
      v46 = *(unsigned int **)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v50 = *v46;
        v51 = v46 + 1;
        if ( v46 + 1 < v46 )
          goto LABEL_114;
        v46 = (unsigned int *)((char *)v51 + v50);
        if ( (unsigned int *)((char *)v51 + v50) < v51 )
          goto LABEL_114;
      }
      v17 = *v46;
      v18 = v46 + 1;
      if ( v46 + 1 < v46 )
      {
LABEL_114:
        v11 = -1073741675;
      }
      else
      {
        v19 = 0LL;
        if ( v17 )
          v19 = v18;
        v11 = 0;
        if ( v17 != 4 )
          return (unsigned int)-1073741789;
        v55 = *v19;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( !v6 || *(_DWORD *)a1 <= 6u )
      return (unsigned int)-1073741811;
    for ( m = 0; m < 6; ++m )
    {
      v21 = *v6;
      v22 = v6 + 1;
      if ( v6 + 1 < v6 )
        return (unsigned int)-1073741675;
      v6 = (unsigned int *)((char *)v22 + v21);
      if ( (unsigned int *)((char *)v22 + v21) < v22 )
        return (unsigned int)-1073741675;
    }
    v23 = *v6;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v24 = 0LL;
    if ( v23 )
      v24 = v6 + 1;
    if ( v23 != 16 )
      return (unsigned int)-1073741811;
    TargetFile = 0LL;
    v25 = 0LL;
    v54 = 0LL;
    if ( !v5 || !v24 )
      return (unsigned int)-1073741811;
    Object = 0LL;
    v26 = ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v27 = (struct _DMA_ADAPTER *)Object;
    v11 = v26;
    if ( v26 < 0 )
    {
LABEL_57:
      if ( TargetFile )
        ZwClose(TargetFile);
      if ( v27 )
        HalPutDmaAdapter(v27);
      if ( v25 )
        ExFreePoolWithTag(v25, 0x20534C53u);
      if ( v11 < 0 )
        return (unsigned int)v11;
      v32 = *(_QWORD *)(a4 + 8);
      if ( !v32 )
      {
        v40 = *(_DWORD *)(a4 + 4);
        v41 = -1;
        v42 = v40 + 8;
        if ( v40 + 8 >= v40 )
          v41 = v40 + 8;
        v11 = v42 < v40 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v41;
        if ( v42 >= v40 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_69;
        }
LABEL_68:
        if ( v11 < 0 )
          return (unsigned int)v11;
LABEL_69:
        v36 = *(_DWORD *)(a4 + 4);
        if ( !v36 )
          return (unsigned int)-1073741762;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v36, 0x20534C53u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        if ( PoolWithTag + 1 >= PoolWithTag )
        {
          v11 = 0;
          if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            return (unsigned int)-1073741789;
          *PoolWithTag = 4;
          PoolWithTag[1] = 0;
          ++*(_DWORD *)a4;
          return (unsigned int)v11;
        }
        return (unsigned int)-1073741675;
      }
      v33 = *(_DWORD **)(a4 + 8);
      v34 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v35 = *v33 + 4;
          if ( *v33 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v33 + v35) < v33 )
            return (unsigned int)-1073741675;
          ++v34;
          v33 = (_DWORD *)((char *)v33 + v35);
          if ( v34 >= *(_DWORD *)a4 )
            goto LABEL_78;
        }
        v11 = -1073741675;
        goto LABEL_68;
      }
LABEL_78:
      if ( v33 + 1 < v33 )
        return (unsigned int)-1073741675;
      v11 = 0;
      if ( (unsigned __int64)(v33 + 2) <= v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v33 = 4;
        v33[1] = 0;
        ++*(_DWORD *)a4;
        goto LABEL_68;
      }
      return (unsigned int)-1073741789;
    }
    LODWORD(v57) = 0;
    v28 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !v28 )
    {
      v11 = -1073741801;
      v25 = 0LL;
      goto LABEL_57;
    }
    v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900F4u, 0LL, 0, v28, 0x248u, (ULONG *)&v57);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v57 < 0x40 )
      {
        v11 = -1073741762;
      }
      else
      {
        v29 = *(_QWORD *)&v28->Type;
        v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900EBu, 0LL, 0, v28, 0x248u, (ULONG *)&v57);
        if ( v11 >= 0 )
        {
          if ( (unsigned int)v57 < 0x40 )
          {
            v11 = -1073741762;
          }
          else
          {
            *((_QWORD *)&v54 + 1) = v28->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v54 = v29;
          }
        }
      }
    }
    ExFreePoolWithTag(v28, 0x20534C53u);
    if ( v11 < 0 )
      goto LABEL_118;
    if ( v54 != *v24 )
    {
      v11 = -1073741762;
      goto LABEL_118;
    }
    if ( v56 )
    {
      *(_QWORD *)&v54 = -1LL;
      *((_QWORD *)&v54 + 1) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
      v31 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
      if ( v31 )
      {
        *(_OWORD *)v31 = 0LL;
        *((_OWORD *)v31 + 1) = 0LL;
        *((_OWORD *)v31 + 2) = 0LL;
        *((_QWORD *)v31 + 6) = 0LL;
        *((_WORD *)v31 + 28) = 0;
        *((_WORD *)v31 + 3) = 24;
        v31[5] = 25;
        qmemcpy(v31 + 8, "$Kernel.Purge.AppxFICache", 25);
        *(_OWORD *)(v31 + 34) = v54;
        *(_QWORD *)(v31 + 50) = 0LL;
        v25 = v31;
        v11 = FsRtlSetKernelEaFile((PFILE_OBJECT)v27, v31, 0x3Au);
        goto LABEL_57;
      }
      goto LABEL_119;
    }
    if ( ObOpenObjectByPointer(v27, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
      ZwSetCachedSigningLevel(2u, v55 - 2 > 1 ? 0 : 6, &TargetFile, 1u, TargetFile);
    LODWORD(v57) = 0;
    v30 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !v30 )
    {
LABEL_119:
      v11 = -1073741801;
      goto LABEL_118;
    }
    v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900F4u, 0LL, 0, v30, 0x248u, (ULONG *)&v57);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v57 < 0x40 )
      {
LABEL_53:
        v11 = -1073741762;
        goto LABEL_54;
      }
      v39 = *(_QWORD *)&v30->Type;
      v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900EBu, 0LL, 0, v30, 0x248u, (ULONG *)&v57);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)v57 < 0x40 )
          goto LABEL_53;
        *((_QWORD *)&v54 + 1) = v30->AssociatedIrp.MasterIrp;
        *(_QWORD *)&v54 = v39;
      }
    }
LABEL_54:
    ExFreePoolWithTag(v30, 0x20534C53u);
    if ( v11 >= 0 )
      goto LABEL_55;
LABEL_118:
    v25 = 0LL;
    goto LABEL_57;
  }
  return (unsigned int)v11;
}
