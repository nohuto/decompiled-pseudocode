/*
 * XREFs of SPCallServerHandleFileIntegrityUpdate @ 0x140723F74
 * Callers:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x1403FB2B0 (ZwSetCachedSigningLevel.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v30; // rdx
  struct _IRP *v31; // r14
  char *v32; // rax
  __int64 v33; // r8
  _DWORD *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v40; // r15
  unsigned int v41; // edx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // r10d
  unsigned int *v45; // r9
  unsigned int *v46; // rax
  unsigned int *v47; // rax
  unsigned int k; // r9d
  __int64 v49; // r11
  unsigned int *v50; // r10
  __int64 v51; // r11
  unsigned int *v52; // r10
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  __int128 v55; // [rsp+58h] [rbp-18h]
  unsigned int v56; // [rsp+B0h] [rbp+40h]
  unsigned int v57; // [rsp+B8h] [rbp+48h]
  __int64 v58; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v58) = a3;
  v57 = 0;
  v56 = 0;
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
        v49 = *v13;
        v50 = v13 + 1;
        if ( v13 + 1 < v13 )
          goto LABEL_101;
        v13 = (unsigned int *)((char *)v50 + v49);
        if ( (unsigned int *)((char *)v50 + v49) < v50 )
          goto LABEL_101;
      }
      v44 = *v13;
      v45 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
LABEL_101:
        v11 = -1073741675;
      }
      else
      {
        v46 = 0LL;
        if ( v44 )
          v46 = v45;
        v11 = 0;
        if ( v44 != 4 )
          return (unsigned int)-1073741789;
        v57 = *v46;
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
      v47 = *(unsigned int **)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v51 = *v47;
        v52 = v47 + 1;
        if ( v47 + 1 < v47 )
          goto LABEL_114;
        v47 = (unsigned int *)((char *)v52 + v51);
        if ( (unsigned int *)((char *)v52 + v51) < v52 )
          goto LABEL_114;
      }
      v17 = *v47;
      v18 = v47 + 1;
      if ( v47 + 1 < v47 )
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
        v56 = *v19;
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
    Handle = 0LL;
    v25 = 0LL;
    v55 = 0LL;
    if ( !v5 || !v24 )
      return (unsigned int)-1073741811;
    Object = 0LL;
    v26 = ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v27 = (struct _DMA_ADAPTER *)Object;
    v11 = v26;
    if ( v26 < 0 )
    {
LABEL_57:
      if ( Handle )
        ZwClose(Handle);
      if ( v27 )
        HalPutDmaAdapter(v27);
      if ( v25 )
        ExFreePoolWithTag(v25, 0x20534C53u);
      if ( v11 < 0 )
        return (unsigned int)v11;
      v33 = *(_QWORD *)(a4 + 8);
      if ( !v33 )
      {
        v41 = *(_DWORD *)(a4 + 4);
        v42 = -1;
        v43 = v41 + 8;
        if ( v41 + 8 >= v41 )
          v42 = v41 + 8;
        v11 = v43 < v41 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v42;
        if ( v43 >= v41 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_69;
        }
LABEL_68:
        if ( v11 < 0 )
          return (unsigned int)v11;
LABEL_69:
        v37 = *(_DWORD *)(a4 + 4);
        if ( !v37 )
          return (unsigned int)-1073741762;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
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
      v34 = *(_DWORD **)(a4 + 8);
      v35 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v36 = *v34 + 4;
          if ( *v34 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v34 + v36) < v34 )
            return (unsigned int)-1073741675;
          ++v35;
          v34 = (_DWORD *)((char *)v34 + v36);
          if ( v35 >= *(_DWORD *)a4 )
            goto LABEL_78;
        }
        v11 = -1073741675;
        goto LABEL_68;
      }
LABEL_78:
      if ( v34 + 1 < v34 )
        return (unsigned int)-1073741675;
      v11 = 0;
      if ( (unsigned __int64)(v34 + 2) <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v34 = 4;
        v34[1] = 0;
        ++*(_DWORD *)a4;
        goto LABEL_68;
      }
      return (unsigned int)-1073741789;
    }
    LODWORD(v58) = 0;
    v28 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !v28 )
    {
      v11 = -1073741801;
      v25 = 0LL;
      goto LABEL_57;
    }
    v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900F4u, 0LL, 0, v28, 0x248u, (ULONG *)&v58);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v58 < 0x40 )
      {
        v11 = -1073741762;
      }
      else
      {
        v29 = *(_QWORD *)&v28->Type;
        v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900EBu, 0LL, 0, v28, 0x248u, (ULONG *)&v58);
        if ( v11 >= 0 )
        {
          if ( (unsigned int)v58 < 0x40 )
          {
            v11 = -1073741762;
          }
          else
          {
            *((_QWORD *)&v55 + 1) = v28->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v55 = v29;
          }
        }
      }
    }
    ExFreePoolWithTag(v28, 0x20534C53u);
    if ( v11 < 0 )
      goto LABEL_118;
    if ( v55 != *v24 )
    {
      v11 = -1073741762;
      goto LABEL_118;
    }
    if ( v57 )
    {
      *(_QWORD *)&v55 = -1LL;
      *((_QWORD *)&v55 + 1) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
      v32 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
      if ( v32 )
      {
        *(_OWORD *)v32 = 0LL;
        *((_OWORD *)v32 + 1) = 0LL;
        *((_OWORD *)v32 + 2) = 0LL;
        *((_QWORD *)v32 + 6) = 0LL;
        *((_WORD *)v32 + 28) = 0;
        *((_WORD *)v32 + 3) = 24;
        v32[5] = 25;
        qmemcpy(v32 + 8, "$Kernel.Purge.AppxFICache", 25);
        *(_OWORD *)(v32 + 34) = v55;
        *(_QWORD *)(v32 + 50) = 0LL;
        v25 = v32;
        v11 = FsRtlSetKernelEaFile((PFILE_OBJECT)v27, v32, 0x3Au);
        goto LABEL_57;
      }
      goto LABEL_119;
    }
    if ( ObOpenObjectByPointer(v27, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &Handle) >= 0 )
    {
      LOBYTE(v30) = v56 - 2 > 1 ? 0 : 6;
      ZwSetCachedSigningLevel(2LL, v30);
    }
    LODWORD(v58) = 0;
    v31 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !v31 )
    {
LABEL_119:
      v11 = -1073741801;
      goto LABEL_118;
    }
    v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900F4u, 0LL, 0, v31, 0x248u, (ULONG *)&v58);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v58 < 0x40 )
      {
LABEL_53:
        v11 = -1073741762;
        goto LABEL_54;
      }
      v40 = *(_QWORD *)&v31->Type;
      v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)v27, 0x900EBu, 0LL, 0, v31, 0x248u, (ULONG *)&v58);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)v58 < 0x40 )
          goto LABEL_53;
        *((_QWORD *)&v55 + 1) = v31->AssociatedIrp.MasterIrp;
        *(_QWORD *)&v55 = v40;
      }
    }
LABEL_54:
    ExFreePoolWithTag(v31, 0x20534C53u);
    if ( v11 >= 0 )
      goto LABEL_55;
LABEL_118:
    v25 = 0LL;
    goto LABEL_57;
  }
  return (unsigned int)v11;
}
