/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x1406D7FB0
 * Callers:
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 */

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // r8d
  PADAPTER_OBJECT v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DMA_OPERATIONS *v15; // rbx
  PADAPTER_OBJECT v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  _DMA_OPERATIONS *DmaOperations; // [rsp+30h] [rbp-88h]
  PADAPTER_OBJECT v20[10]; // [rsp+50h] [rbp-68h] BYREF
  char v21; // [rsp+C8h] [rbp+10h]

  memset(v20, 0, 0x48uLL);
  v8 = 0;
  v9 = 0LL;
  v17 = 0LL;
  LODWORD(v10) = *(_DWORD *)(a2 + 40);
  if ( (v10 & 0x80u) != 0LL )
    return v10;
  v10 = *(_QWORD *)(a2 + 136);
  if ( v10 )
  {
    if ( *(int *)(v10 + 36) < 1 )
      return v10;
    v9 = *(PADAPTER_OBJECT *)(v10 + 48);
    v17 = v9;
    v21 = 0;
    goto LABEL_13;
  }
  v11 = *(_QWORD *)(a2 + 24);
  LOBYTE(v10) = *(_DWORD *)(a1 + 416) & 6;
  if ( (_BYTE)v10 != 2 )
    return v10;
  if ( !v11 )
    return v10;
  v12 = *(_DWORD *)(v11 + 416);
  LOBYTE(v10) = v12 & 6;
  if ( (v12 & 6) != 4 )
    return v10;
  if ( (v12 & 0x400) == 0 )
  {
    v9 = *(PADAPTER_OBJECT *)(v11 + 80);
    if ( !v9 )
      return v10;
    v17 = *(PADAPTER_OBJECT *)(v11 + 80);
LABEL_12:
    v21 = 0;
    if ( v8 < 0 )
      return v10;
    goto LABEL_13;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( !v13 )
    return v10;
  LODWORD(v10) = SeCreateClientSecurityEx(v13, (int)v11 + 260, 0, (__int64)v20);
  v8 = v10;
  if ( (int)v10 < 0 )
    goto LABEL_12;
  v9 = v20[2];
  v17 = v20[2];
  v21 = 1;
LABEL_13:
  DmaOperations = v9[1].DmaOperations;
  v18 = *(_QWORD *)&v9[1].Version;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)&v17[3].Version, 1u);
  v15 = v17[3].DmaOperations;
  ExReleaseResourceLite(*(PERESOURCE *)&v17[3].Version);
  KeLeaveCriticalRegion();
  if ( v21 )
    HalPutDmaAdapter(v20[2]);
  *a3 = v18;
  LOBYTE(v10) = (_BYTE)DmaOperations;
  a3[1] = DmaOperations;
  a3[2] = v15;
  *a4 |= 0x8000000u;
  return v10;
}
