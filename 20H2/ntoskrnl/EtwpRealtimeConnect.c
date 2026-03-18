/*
 * XREFs of EtwpRealtimeConnect @ 0x1407121C8
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14066AA50 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x140712724 (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  _DMA_OPERATIONS *v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  SIZE_T v9; // rdx
  __int16 v10; // ax
  __int64 v11; // r12
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  int v14; // ebx
  void *v15; // rcx
  void *v16; // rcx
  PADAPTER_OBJECT v17; // rbx
  PADAPTER_OBJECT v18; // rdx
  unsigned __int64 v19; // rax
  char v20; // cl
  PADAPTER_OBJECT v21; // r14
  int inserted; // edi
  __int16 v24; // ax
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  PVOID v26; // [rsp+50h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-B0h]
  PADAPTER_OBJECT v30; // [rsp+70h] [rbp-A8h]
  struct _DMA_ADAPTER v31; // [rsp+78h] [rbp-A0h]
  _DMA_OPERATIONS *v32; // [rsp+88h] [rbp-90h]
  unsigned __int64 v33; // [rsp+90h] [rbp-88h]
  _DMA_OPERATIONS *v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v36[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-68h]
  __int64 v38; // [rsp+B8h] [rbp-60h]
  int v39; // [rsp+C0h] [rbp-58h]
  int v40; // [rsp+C4h] [rbp-54h]
  __int128 v41; // [rsp+C8h] [rbp-50h]
  unsigned int v42; // [rsp+120h] [rbp+8h]
  unsigned int v43; // [rsp+128h] [rbp+10h]
  PADAPTER_OBJECT v44; // [rsp+130h] [rbp+18h] BYREF
  PVOID v45; // [rsp+138h] [rbp+20h] BYREF

  v35 = 0LL;
  v36[1] = 0;
  v40 = 0;
  v44 = 0LL;
  v30 = 0LL;
  DmaAdapter = 0LL;
  v42 = *(_DWORD *)a1;
  Handle = 0LL;
  v34 = *(_DMA_OPERATIONS **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v43 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)&v31.Version = *(_QWORD *)(a1 + 48);
  v2 = *(_DMA_OPERATIONS **)(a1 + 40);
  v31.DmaOperations = v2;
  v3 = *(_QWORD *)(a1 + 56);
  v32 = (_DMA_OPERATIONS *)v3;
  v4 = *(_QWORD *)(a1 + 64);
  v33 = v4;
  ProbeForWrite(v34, (((v43 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v43, 4u);
  v5 = *(_QWORD *)&v31.Version;
  if ( *(_QWORD *)&v31.Version >= 0x7FFFFFFF0000uLL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v3;
  if ( v3 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v4;
  if ( v4 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v8 && ((v10 = *(_WORD *)(v8 + 8), v10 == 332) || v10 == 452) )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v2, v9, 4u);
  v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v12 = EtwpAcquireLoggerContextByLoggerId(v11, v42, 1);
  v13 = v12;
  if ( !v12 )
    return 3221225485LL;
  if ( (v12[3] & 0x100) != 0 )
  {
    v14 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v12);
    if ( v14 >= 0 )
    {
      v14 = EtwpOpenConsumer(&Handle);
      if ( v14 >= 0 )
      {
        v15 = *(void **)(a1 + 24);
        v45 = 0LL;
        v14 = ObReferenceObjectByHandle(v15, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v45, 0LL);
        DmaAdapter = (PADAPTER_OBJECT)v45;
        if ( v14 >= 0 )
        {
          v16 = *(void **)(a1 + 32);
          v26 = 0LL;
          v14 = ObReferenceObjectByHandle(v16, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v26, 0LL);
          v30 = (PADAPTER_OBJECT)v26;
          if ( v14 >= 0 )
          {
            v36[0] = 48;
            v37 = 0LL;
            v39 = 64;
            v38 = 0LL;
            v41 = 0LL;
            v14 = ObCreateObjectEx(
                    0,
                    EtwpRealTimeConnectionObjectType,
                    (int)v36,
                    1u,
                    (__int64)Object,
                    160,
                    0,
                    0,
                    &v44,
                    0LL);
            if ( v14 >= 0 )
            {
              v17 = v44;
              memset(v44, 0, 0xA0uLL);
              LOWORD(v17[5].DmaOperations) = v42;
              *(_QWORD *)&v17[1].Version = Handle;
              v18 = v44;
              v44[1].DmaOperations = (_DMA_OPERATIONS *)KeGetCurrentThread()->ApcState.Process;
              *(_QWORD *)&v18[3].Version = v45;
              v18[3].DmaOperations = (_DMA_OPERATIONS *)v26;
              v18[4] = v31;
              *(_QWORD *)&v18[7].Version = Address;
              LODWORD(v18[7].DmaOperations) = v43;
              v18[8].DmaOperations = v32;
              *(_QWORD *)&v18[9].Version = v33;
              v18[9].DmaOperations = (_DMA_OPERATIONS *)v11;
              *(_DWORD *)&v18[6].Version = v43 >> 12;
              v18[6].DmaOperations = v34;
              v19 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
              if ( v19 && ((v24 = *(_WORD *)(v19 + 8), v24 == 332) || v24 == 452) )
                v20 = 16;
              else
                v20 = 0;
              v21 = v44;
              BYTE2(v44[5].DmaOperations) = v20 | BYTE2(v44[5].DmaOperations) & 0xEF;
              v21[2].DmaOperations = (_DMA_OPERATIONS *)a1;
              inserted = ObInsertObjectEx(v21, 0LL, 0x400u, 1, 0, (__int64)&v35, (_QWORD *)(a1 + 72));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 176), 0LL);
                *((_QWORD *)v13 + 46) = v21;
                ExReleasePushLockEx((ULONG_PTR)(v13 + 176), 0LL);
                EtwpSynchronizeWithLogger(v13, 32LL);
              }
              EtwpReleaseLoggerContext(v13, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
  EtwpReleaseLoggerContext(v13, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v30 )
    HalPutDmaAdapter(v30);
  return (unsigned int)v14;
}
