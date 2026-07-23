/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x1408C3260
 * Callers:
 *     NtAlpcQueryInformation @ 0x1405DCFD0 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpDereferenceProcess @ 0x1408C2510 (AlpcpDereferenceProcess.c)
 *     AlpcpLockPortShared @ 0x1408C252C (AlpcpLockPortShared.c)
 *     AlpcpReferenceProcess @ 0x1408C2634 (AlpcpReferenceProcess.c)
 *     AlpcpUnlockPortShared @ 0x1408C2650 (AlpcpUnlockPortShared.c)
 *     AlpcpLockCommunicationInfoShared @ 0x1408C3050 (AlpcpLockCommunicationInfoShared.c)
 *     AlpcpUnlockCommunicationInfoShared @ 0x1408C308C (AlpcpUnlockCommunicationInfoShared.c)
 *     AlpcpGetPortNameInformation @ 0x1408C31A8 (AlpcpGetPortNameInformation.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1408C3818 (AlpcpReferenceMessageByWaitingThread.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  void *v6; // rcx
  NTSTATUS result; // eax
  const void **v8; // r15
  struct _DMA_ADAPTER *v9; // r14
  int PortNameInformation; // edi
  ULONG_PTR v11; // r13
  ULONG_PTR v12; // rax
  _QWORD *v13; // r14
  unsigned __int64 v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rax
  struct _DMA_ADAPTER *v17; // r14
  _DMA_OPERATIONS *DmaOperations; // rcx
  unsigned int v19; // r14d
  bool v20; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  const void **v22; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-60h] BYREF
  void *(__fastcall *AllocateCommonBufferEx)(_DMA_ADAPTER *, _LARGE_INTEGER *, unsigned int, _LARGE_INTEGER *, unsigned __int8, unsigned int); // [rsp+50h] [rbp-58h]
  _DMA_OPERATIONS *v25; // [rsp+58h] [rbp-50h]
  void *v26; // [rsp+60h] [rbp-48h]
  unsigned int v27; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+C0h] [rbp+18h]
  unsigned int *v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  BugCheckParameter2 = 0LL;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(void **)a2;
    v26 = *(void **)a2;
  }
  else
  {
    v6 = *(void **)a2;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(v6, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = 0LL;
    v22 = 0LL;
    v27 = 0;
    v20 = 0;
    AllocateCommonBufferEx = 0LL;
    v9 = (struct _DMA_ADAPTER *)Object;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread(Object, &BugCheckParameter2);
    if ( PortNameInformation == -1073741275 )
    {
      v11 = 0LL;
      PortNameInformation = 0;
      goto LABEL_41;
    }
    if ( PortNameInformation < 0 )
    {
      HalPutDmaAdapter(v9);
      return PortNameInformation;
    }
    v11 = BugCheckParameter2;
    AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
    --*(_WORD *)(v11 - 30);
    if ( (_DMA_OPERATIONS *)v11 != v9[82].DmaOperations
      || (v12 = *(_QWORD *)(v11 + 24), (BugCheckParameter2 = v12) == 0) )
    {
LABEL_41:
      if ( v11 )
        AlpcpUnlockMessage(v11);
      HalPutDmaAdapter(v9);
      v19 = 32;
      if ( v8 )
      {
        v19 = *((unsigned __int16 *)v8 + 1) + 32;
      }
      else if ( PortNameInformation == -1073741820 )
      {
        v19 = v27 + 16;
      }
      if ( v28 < v19 )
        PortNameInformation = -1073741820;
      if ( PortNameInformation >= 0 )
      {
        *(_BYTE *)a2 = v20;
        *(_QWORD *)(a2 + 8) = AllocateCommonBufferEx;
        if ( v8 )
        {
          *(_WORD *)(a2 + 16) = *(_WORD *)v8;
          *(_WORD *)(a2 + 18) = *((_WORD *)v8 + 1);
          *(_QWORD *)(a2 + 24) = a2 + 32;
          memmove((void *)(a2 + 32), v8[1], *((unsigned __int16 *)v8 + 1));
        }
        else
        {
          *(_DWORD *)(a2 + 16) = 0;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
      }
      if ( v29 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
        *v29 = v19;
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return PortNameInformation;
    }
    v13 = *(_QWORD **)(v12 + 16);
    v25 = (_DMA_OPERATIONS *)v13;
    if ( !v13 )
    {
LABEL_40:
      v9 = (struct _DMA_ADAPTER *)Object;
      goto LABEL_41;
    }
    AlpcpLockCommunicationInfoShared((__int64)v13);
    AlpcpUnlockMessage(v11);
    v11 = 0LL;
    v14 = *v13;
    if ( !*v13 )
      goto LABEL_24;
    v14 &= -(__int64)(ObReferenceObjectSafe(*v13) != 0);
    if ( !v14 )
      goto LABEL_24;
    v15 = v13 + 2;
    if ( (((*(_DWORD *)(BugCheckParameter2 + 416) & 6) - 2) & 0xFFFFFFFD) == 0 )
      v15 = v13;
    v16 = *v15;
    v17 = (struct _DMA_ADAPTER *)v16;
    if ( v16 )
    {
      if ( v16 != v14 && !ObReferenceObjectSafe(v16) )
LABEL_24:
        v17 = 0LL;
    }
    AlpcpUnlockCommunicationInfoShared((__int64)v25);
    if ( v17 )
    {
      if ( !v14 )
      {
LABEL_37:
        if ( v17 && v17 != (struct _DMA_ADAPTER *)v14 )
          HalPutDmaAdapter(v17);
        goto LABEL_40;
      }
      AlpcpLockPortShared((__int64)v17);
      DmaOperations = 0LL;
      if ( ((__int64)v17[1].DmaOperations & 1) == 0 )
        DmaOperations = v17[1].DmaOperations;
      v25 = DmaOperations;
      if ( DmaOperations )
        AlpcpReferenceProcess(DmaOperations);
      AlpcpUnlockPortShared((__int64)v17);
      if ( v25 )
      {
        AllocateCommonBufferEx = v25[3].AllocateCommonBufferEx;
        AlpcpDereferenceProcess(v25);
        if ( v28 > 0x10 )
          v27 = v28 - 16;
        PortNameInformation = AlpcpGetPortNameInformation((char *)v14, &v22, &v27);
        v20 = PortNameInformation >= 0;
        v8 = v22;
      }
    }
    if ( v14 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
    goto LABEL_37;
  }
  return result;
}
