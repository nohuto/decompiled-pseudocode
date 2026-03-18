/*
 * XREFs of PspAllocatePartition @ 0x1407B65E8
 * Callers:
 *     NtCreatePartition @ 0x1409086F0 (NtCreatePartition.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6A2A4 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PspAddPartitionToGlobalList @ 0x1403C650C (PspAddPartitionToGlobalList.c)
 *     MmCreatePartition @ 0x1403C6584 (MmCreatePartition.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ExpPartitionStart @ 0x1407ACC94 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x1407ACF0C (ExpPartitionInitialize.c)
 *     PspCreatePartitionSystemProcess @ 0x1409088D8 (PspCreatePartitionSystemProcess.c)
 */

__int64 __fastcall PspAllocatePartition(
        __int64 a1,
        ACCESS_MASK a2,
        char a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        __int64 a7)
{
  char v8; // r13
  char v9; // si
  int PartitionSystemProcess; // edi
  char *v11; // rbx
  _DWORD *v12; // r9
  __int64 v14; // r8
  _DWORD *v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rax
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-81h]
  PVOID Object; // [rsp+50h] [rbp-51h] BYREF
  ACCESS_MASK v23; // [rsp+58h] [rbp-49h]
  __int64 v24; // [rsp+60h] [rbp-41h] BYREF
  __int64 v25; // [rsp+68h] [rbp-39h]
  _OWORD v26[3]; // [rsp+70h] [rbp-31h] BYREF

  v23 = a2;
  v25 = a7;
  v8 = 0;
  memset(v26, 0, sizeof(v26));
  v24 = 0LL;
  v9 = 0;
  Object = 0LL;
  PartitionSystemProcess = ObCreateObjectEx(a3, PsPartitionType, a1, a3, v21, 128, 0, 0, &Object, 0LL);
  if ( PartitionSystemProcess < 0 )
  {
    v11 = (char *)Object;
    goto LABEL_9;
  }
  v9 = 1;
  v11 = (char *)Object;
  memset(Object, 0, 0x80uLL);
  *((_QWORD *)v11 + 3) = 2LL;
  ObfReferenceObjectWithTag(v11, 0x64726148u);
  *((_QWORD *)v11 + 4) = 1LL;
  *((_QWORD *)v11 + 12) = 0LL;
  if ( a4 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a4 + 24)) <= 1 )
      __fastfail(0xEu);
    v11 = (char *)Object;
    *((_QWORD *)Object + 7) = a4;
  }
  else
  {
    if ( a5 )
      goto LABEL_4;
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
      __fastfail(0xEu);
    v11 = (char *)Object;
    *((_QWORD *)Object + 7) = PspSystemPartition;
  }
  if ( !a5 )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v26, v12);
    PartitionSystemProcess = PspCreatePartitionSystemProcess(v11 + 104, v11 + 112);
    KiUnstackDetachProcess((__int64)v26, 0LL, v14, v15);
    if ( PartitionSystemProcess < 0 )
      goto LABEL_9;
    PartitionSystemProcess = ExpPartitionInitialize((__int64)v11);
    if ( PartitionSystemProcess < 0 )
      goto LABEL_9;
    goto LABEL_5;
  }
LABEL_4:
  v8 = 1;
LABEL_5:
  PartitionSystemProcess = MmCreatePartition(v11, v8);
  if ( PartitionSystemProcess < 0 )
    goto LABEL_9;
  PspAddPartitionToGlobalList((__int64)v11);
  if ( a5 )
  {
    *((_DWORD *)v11 + 30) |= 1u;
    *a6 = v11;
    v11 = 0LL;
    Object = 0LL;
LABEL_8:
    PartitionSystemProcess = 0;
    goto LABEL_9;
  }
  PartitionSystemProcess = ExpPartitionStart(*((_QWORD *)v11 + 2));
  if ( PartitionSystemProcess >= 0 )
  {
    v9 = 0;
    PartitionSystemProcess = ObInsertObjectEx((PADAPTER_OBJECT)v11, 0LL, v23, 0, 0, 0LL, &v24);
    if ( PartitionSystemProcess >= 0 )
    {
      v16 = (_QWORD *)v25;
      v17 = v24;
      *a6 = v11;
      *v16 = v17;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( v11 )
  {
    if ( v9 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v19 = v18 <= 1;
    v20 = v18 - 1;
    if ( v19 )
    {
      if ( v20 )
        __fastfail(0xEu);
      PsDereferencePartition((__int64)Object);
    }
    if ( PartitionSystemProcess < 0 )
      PsDereferencePartition((__int64)Object);
  }
  return (unsigned int)PartitionSystemProcess;
}
