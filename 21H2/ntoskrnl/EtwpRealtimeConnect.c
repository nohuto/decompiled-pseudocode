/*
 * XREFs of EtwpRealtimeConnect @ 0x1406B88C8
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwpCheckLoggerControlAccess @ 0x140642DDC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     EtwpSynchronizeWithLogger @ 0x1406B8D9C (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x1406B8E24 (EtwpOpenConsumer.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  volatile void *v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  SIZE_T v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned int *v14; // rax
  unsigned int *v15; // rsi
  int v16; // ebx
  void *v17; // rcx
  void *v18; // rcx
  unsigned __int64 v19; // rax
  char v20; // cl
  int inserted; // edi
  __int16 v23; // ax
  PVOID v24; // [rsp+50h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-B0h]
  PADAPTER_OBJECT v28; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+78h] [rbp-A0h]
  volatile void *v30; // [rsp+80h] [rbp-98h]
  unsigned __int64 v31; // [rsp+88h] [rbp-90h]
  unsigned __int64 v32; // [rsp+90h] [rbp-88h]
  volatile void *v33; // [rsp+98h] [rbp-80h]
  __int64 v34; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v35[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-68h]
  __int64 v37; // [rsp+B8h] [rbp-60h]
  int v38; // [rsp+C0h] [rbp-58h]
  int v39; // [rsp+C4h] [rbp-54h]
  __int128 v40; // [rsp+C8h] [rbp-50h]
  unsigned int v41; // [rsp+120h] [rbp+8h]
  unsigned int v42; // [rsp+128h] [rbp+10h]
  PVOID Object; // [rsp+138h] [rbp+20h] BYREF

  v34 = 0LL;
  v35[1] = 0;
  v39 = 0;
  v28 = 0LL;
  DmaAdapter = 0LL;
  v41 = *(_DWORD *)a1;
  Handle = 0LL;
  v33 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v42 = *(_DWORD *)(a1 + 4);
  v29 = *(_QWORD *)(a1 + 48);
  v2 = *(volatile void **)(a1 + 40);
  v30 = v2;
  v3 = *(_QWORD *)(a1 + 56);
  v31 = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v32 = v4;
  ProbeForWrite(v33, (((v42 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v42, 4u);
  v5 = v29;
  if ( v29 >= 0x7FFFFFFF0000LL )
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
  v13 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v12, v11) + 108);
  v14 = EtwpAcquireLoggerContextByLoggerId(v13, v41, 1);
  v15 = v14;
  if ( !v14 )
    return 3221225485LL;
  if ( (v14[3] & 0x100) != 0 )
  {
    v16 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v14);
    if ( v16 >= 0 )
    {
      v16 = EtwpOpenConsumer(&Handle);
      if ( v16 >= 0 )
      {
        v17 = *(void **)(a1 + 24);
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(v17, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        DmaAdapter = (PADAPTER_OBJECT)Object;
        if ( v16 >= 0 )
        {
          v18 = *(void **)(a1 + 32);
          v24 = 0LL;
          v16 = ObReferenceObjectByHandle(v18, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v24, 0LL);
          v28 = (PADAPTER_OBJECT)v24;
          if ( v16 >= 0 )
          {
            v35[0] = 48;
            v36 = 0LL;
            v38 = 64;
            v37 = 0LL;
            v40 = 0LL;
            v16 = ObCreateObjectEx(0, (_DWORD)EtwpRealTimeConnectionObjectType, (unsigned int)v35, 1);
            if ( v16 >= 0 )
            {
              memset(0LL, 0, 0xA0uLL);
              MEMORY[0x58] = v41;
              MEMORY[0x10] = Handle;
              MEMORY[0x18] = KeGetCurrentThread()->ApcState.Process;
              MEMORY[0x30] = Object;
              MEMORY[0x38] = v24;
              MEMORY[0x40] = v29;
              MEMORY[0x48] = v30;
              MEMORY[0x70] = Address;
              MEMORY[0x78] = v42;
              MEMORY[0x88] = v31;
              MEMORY[0x90] = v32;
              MEMORY[0x98] = v13;
              MEMORY[0x60] = v42 >> 12;
              MEMORY[0x68] = v33;
              v19 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
              if ( v19 && ((v23 = *(_WORD *)(v19 + 8), v23 == 332) || v23 == 452) )
                v20 = 16;
              else
                v20 = 0;
              MEMORY[0x5A] = v20 | MEMORY[0x5A] & 0xEF;
              MEMORY[0x28] = a1;
              inserted = ObInsertObjectEx(0LL, 0LL, 0, (__int64)&v34, a1 + 72);
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 176), 0LL);
                *((_QWORD *)v15 + 46) = 0LL;
                ExReleasePushLockEx((ULONG_PTR)(v15 + 176), 0LL);
                EtwpSynchronizeWithLogger(v15, 32LL);
              }
              EtwpReleaseLoggerContext(v15, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v16 = -1073741811;
  }
  EtwpReleaseLoggerContext(v15, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v28 )
    HalPutDmaAdapter(v28);
  return (unsigned int)v16;
}
