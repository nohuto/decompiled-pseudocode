/*
 * XREFs of EtwpRealtimeConnect @ 0x140617EC8
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x140618424 (EtwpOpenConsumer.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpRealtimeConnect(int *a1)
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
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // ebx
  void *v19; // rcx
  void *v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rdx
  int inserted; // edi
  __int16 v26; // ax
  PVOID v27; // [rsp+50h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-B0h]
  PADAPTER_OBJECT v31; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+78h] [rbp-A0h]
  volatile void *v33; // [rsp+80h] [rbp-98h]
  unsigned __int64 v34; // [rsp+88h] [rbp-90h]
  unsigned __int64 v35; // [rsp+90h] [rbp-88h]
  volatile void *v36; // [rsp+98h] [rbp-80h]
  __int64 v37; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v38[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-68h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  int v41; // [rsp+C0h] [rbp-58h]
  int v42; // [rsp+C4h] [rbp-54h]
  __int128 v43; // [rsp+C8h] [rbp-50h]
  unsigned int v44; // [rsp+120h] [rbp+8h]
  unsigned int v45; // [rsp+128h] [rbp+10h]
  PVOID Object; // [rsp+138h] [rbp+20h] BYREF

  v37 = 0LL;
  v38[1] = 0;
  v42 = 0;
  v31 = 0LL;
  DmaAdapter = 0LL;
  v44 = *a1;
  Handle = 0LL;
  v36 = (volatile void *)*((_QWORD *)a1 + 2);
  Address = (volatile void *)*((_QWORD *)a1 + 1);
  v45 = a1[1];
  v32 = *((_QWORD *)a1 + 6);
  v2 = (volatile void *)*((_QWORD *)a1 + 5);
  v33 = v2;
  v3 = *((_QWORD *)a1 + 7);
  v34 = v3;
  v4 = *((_QWORD *)a1 + 8);
  v35 = v4;
  ProbeForWrite(v36, (((v45 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v45, 4u);
  v5 = v32;
  if ( v32 >= 0x7FFFFFFF0000LL )
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
  LOBYTE(v14) = 1;
  v15 = EtwpAcquireLoggerContextByLoggerId(v13, v44, v14);
  v17 = v15;
  if ( !v15 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v15 + 12) & 0x100) != 0 )
  {
    v18 = EtwpCheckLoggerControlAccess(0x400u);
    if ( v18 >= 0 )
    {
      v18 = EtwpOpenConsumer(&Handle);
      if ( v18 >= 0 )
      {
        v19 = (void *)*((_QWORD *)a1 + 3);
        Object = 0LL;
        v18 = ObReferenceObjectByHandle(v19, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        DmaAdapter = (PADAPTER_OBJECT)Object;
        if ( v18 >= 0 )
        {
          v20 = (void *)*((_QWORD *)a1 + 4);
          v27 = 0LL;
          v18 = ObReferenceObjectByHandle(v20, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v27, 0LL);
          v31 = (PADAPTER_OBJECT)v27;
          if ( v18 >= 0 )
          {
            v38[0] = 48;
            v39 = 0LL;
            v41 = 64;
            v40 = 0LL;
            v43 = 0LL;
            v18 = ObCreateObjectEx(0, (_DWORD)EtwpRealTimeConnectionObjectType, (unsigned int)v38, 1);
            if ( v18 >= 0 )
            {
              memset(0LL, 0, 0xA0uLL);
              MEMORY[0x58] = v44;
              MEMORY[0x10] = Handle;
              MEMORY[0x18] = KeGetCurrentThread()->ApcState.Process;
              MEMORY[0x30] = Object;
              MEMORY[0x38] = v27;
              MEMORY[0x40] = v32;
              MEMORY[0x48] = v33;
              MEMORY[0x70] = Address;
              MEMORY[0x78] = v45;
              MEMORY[0x88] = v34;
              MEMORY[0x90] = v35;
              MEMORY[0x98] = v13;
              MEMORY[0x60] = v45 >> 12;
              MEMORY[0x68] = v36;
              v21 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
              if ( v21 && ((v26 = *(_WORD *)(v21 + 8), v26 == 332) || v26 == 452) )
                v22 = 16;
              else
                v22 = 0;
              MEMORY[0x5A] = v22 | MEMORY[0x5A] & 0xEF;
              MEMORY[0x28] = a1;
              inserted = ObInsertObjectEx(0LL, 0LL, 0, (__int64)&v37, (__int64)(a1 + 18));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx(v17 + 704, 0LL);
                *(_QWORD *)(v17 + 368) = 0LL;
                ExReleasePushLockEx(v17 + 704, 0LL);
                EtwpSynchronizeWithLogger(v17, 32LL);
              }
              LOBYTE(v23) = 1;
              EtwpReleaseLoggerContext(v17, v23);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v18 = -1073741811;
  }
  LOBYTE(v16) = 1;
  EtwpReleaseLoggerContext(v17, v16);
  if ( Handle )
    ZwClose(Handle);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v31 )
    HalPutDmaAdapter(v31);
  return (unsigned int)v18;
}
