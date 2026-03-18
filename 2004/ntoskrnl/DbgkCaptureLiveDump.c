/*
 * XREFs of DbgkCaptureLiveDump @ 0x140884C2C
 * Callers:
 *     NtSystemDebugControl @ 0x1407BD0B0 (NtSystemDebugControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x140296BB0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     DbgkpLkmdSnapData @ 0x1404E8FD0 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x1404E9004 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404E903C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x1404E93D4 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404E9438 (DbgkpLkmdSqmIncrementDword.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     DbgkpLkmdFireCallbacks @ 0x140885124 (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x140885664 (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x140885804 (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x140886A2C (DbgkpTriageDumpInitialize.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  REGHANDLE v7; // rsi
  struct _DMA_ADAPTER *v8; // r12
  PEPROCESS v9; // r14
  _DWORD *PoolWithTag; // rdi
  int v11; // eax
  __int64 v12; // r13
  int v13; // r15d
  unsigned int i; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // rcx
  NTSTATUS v19; // eax
  int v20; // ecx
  char v21; // al
  PEPROCESS v22; // rax
  int v23; // eax
  char AccessMode; // [rsp+40h] [rbp-C0h]
  char v26; // [rsp+44h] [rbp-BCh]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-A8h]
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  _OWORD v32[646]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33; // [rsp+28E0h] [rbp+27E0h] BYREF

  v31 = a4;
  v7 = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  v9 = 0LL;
  memset(v32, 0, sizeof(v32));
  PoolWithTag = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  RegHandle = 0LL;
  v30 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_1400100A8, 0LL, 0LL, &RegHandle);
    v7 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  memset(&v32[640], 0, 48);
  v11 = DbgkpTriageDumpInitialize(&v32[640], a2, a3, &v32[643]);
  v12 = 0LL;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_OWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&v32[643])(
            &v32[640],
            *(unsigned int *)(a1 + 4),
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32));
    if ( v13 >= 0 )
    {
      DbgkpLkmdSnapGlobals((__int64)v32);
      LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)RegHandle, 0x704E534Bu);
      if ( PoolWithTag )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 44); PoolWithTag[v15] = -1073741823 )
          v15 = i++;
        PoolWithTag[i] = 1112752980;
      }
      v13 = -1073741790;
      v26 = 1;
      if ( *(_DWORD *)(a1 + 44) )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(a1 + 48);
          v17 = (unsigned int)(v12 + *(_DWORD *)(a1 + 40));
          v33 = 0xC0000001uLL;
          v18 = *(void **)(v16 + 8 * v17);
          Object = 0LL;
          v19 = ObReferenceObjectByHandle(v18, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
          v8 = (struct _DMA_ADAPTER *)Object;
          v20 = v19;
          v21 = v26;
          if ( v20 != -1073741790 )
            v21 = 0;
          v26 = v21;
          if ( v20 >= 0 )
          {
            if ( !v9 )
            {
              v22 = IoThreadToProcess((PETHREAD)Object);
              v9 = v22;
              if ( v22 )
              {
                ObfReferenceObjectWithTag(v22, 0x4C676244u);
                DbgkpLkmdSnapDataEx((__int64)v32);
              }
            }
            v23 = DbgkpLkmdSnapThread((__int64)v32, a1, (__int64)v8, (__int64)&v33);
            if ( !v23 )
              v23 = v33;
            if ( PoolWithTag )
              PoolWithTag[v12] = v23;
            DbgkpLkmdFireCallbacks(v32, 2LL, v8);
            if ( v7 )
              DbgkpLkmdSqmStatus(v7, &v33);
            HalPutDmaAdapter(v8);
            v8 = 0LL;
            if ( (_DWORD)v33 == -1073741670 )
            {
LABEL_32:
              if ( !v26 )
              {
                if ( v9 )
                  DbgkpLkmdFireCallbacks(v32, 1LL, v9);
                LODWORD(v30) = *(_DWORD *)(a1 + 44);
                *((_QWORD *)&v30 + 1) = PoolWithTag;
                DbgkpLkmdSnapData((__int64)v32, (__int64)&v30, 16LL);
                if ( PoolWithTag )
                  DbgkpLkmdSnapData((__int64)v32, (__int64)PoolWithTag, (unsigned int)RegHandle);
                if ( (int)DbgkpLkmdSnapDataEx((__int64)v32) >= 0 )
                  *v29 = &v30;
                v13 = (*((__int64 (__fastcall **)(_OWORD *, __int64))&v32[645] + 1))(&v32[640], v31);
              }
              break;
            }
          }
          else
          {
            if ( PoolWithTag )
              PoolWithTag[v12] = v20;
            if ( v7 )
            {
              LODWORD(v33) = v20;
              DbgkpLkmdSqmStatus(v7, &v33);
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_32;
        }
      }
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x4C676244u);
      if ( v8 )
        HalPutDmaAdapter(v8);
    }
  }
  if ( *(_QWORD *)&v32[642] )
    ExFreePoolWithTag(*(PVOID *)&v32[642], 0x4D574454u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x704E534Bu);
  if ( v7 )
    EtwUnregister(v7);
  return (unsigned int)v13;
}
