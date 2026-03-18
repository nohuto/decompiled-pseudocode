/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405D0710 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     RtlUnicodeStringCopy @ 0x140203DF0 (RtlUnicodeStringCopy.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsIsThreadInSilo @ 0x14023F0B8 (PsIsThreadInSilo.c)
 *     memset @ 0x140411300 (memset.c)
 *     VrpIncrementSiloCount @ 0x1405CFA40 (VrpIncrementSiloCount.c)
 *     PsInsertSiloContext @ 0x1405CFB30 (PsInsertSiloContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x1405CFBAC (CmGetRootKeyObjectForSilo.c)
 *     VrpDereferenceJobContext @ 0x1405CFF08 (VrpDereferenceJobContext.c)
 *     PsMakeSiloContextPermanent @ 0x1405CFF30 (PsMakeSiloContextPermanent.c)
 *     VrpUnlockJobContextExclusive @ 0x1405D04BC (VrpUnlockJobContextExclusive.c)
 *     VrpDestroyNamespaceNode @ 0x1405D0860 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405D09DC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1405D0AB4 (VrpCreateNamespaceNode.c)
 *     CmSetCallbackObjectContext @ 0x1405D2A50 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1405D2C44 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1405D2CA0 (VrpFreeKeyContext.c)
 *     VrpLockJobContextExclusive @ 0x1405D2E8C (VrpLockJobContextExclusive.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1406A0A64 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 *     ObCreateObject @ 0x14070ACF0 (ObCreateObject.c)
 *     VrpInitializeNamespaceNodeList @ 0x140866090 (VrpInitializeNamespaceNodeList.c)
 *     PsRemoveSiloContext @ 0x1409083C0 (PsRemoveSiloContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        _OWORD *a5,
        PVOID Object)
{
  int v6; // r13d
  UNICODE_STRING *v7; // rsi
  struct _DMA_ADAPTER *RootKeyObjectForSilo; // r12
  int JobSilo; // ebx
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // r15
  char IsThreadInSilo; // al
  PVOID v14; // rcx
  __int64 KeyContext; // rax
  __int128 v16; // xmm0
  wchar_t *PoolWithTag; // rax
  __int64 v19; // [rsp+58h] [rbp-10h] BYREF
  char v21; // [rsp+B8h] [rbp+50h]
  __int64 v23; // [rsp+C8h] [rbp+60h] BYREF

  Object = 0LL;
  v6 = 0;
  a5 = 0LL;
  v7 = 0LL;
  RootKeyObjectForSilo = 0LL;
  v23 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObCreateObject(0, VrpJobContextType, 0, 1, 0, 96, 0, 0, (__int64)&a5);
  if ( JobSilo < 0 )
  {
    v10 = a5;
    goto LABEL_24;
  }
  v10 = a5;
  memset(a5, 0, 0x60uLL);
  v10[2] = 0LL;
  JobSilo = VrpInitializeNamespaceNodeList(v10);
  if ( JobSilo < 0 )
    goto LABEL_24;
  JobSilo = VrpIncrementSiloCount();
  if ( JobSilo < 0 )
    goto LABEL_24;
  *((_DWORD *)v10 + 22) = 1;
  VrpLockJobContextExclusive(v10);
  v21 = 1;
  v11 = VrpCreateNamespaceNode(v10, &CmRegistryContainersName, 0LL, &CmRegistryContainersName, 0, -1, &v23);
  v12 = v23;
  JobSilo = v11;
  if ( v11 < 0 )
    goto LABEL_19;
  JobSilo = VrpAddNamespaceNodeToList(v10, v23);
  if ( JobSilo < 0 )
    goto LABEL_19;
  v23 = 0LL;
  VrpUnlockJobContextExclusive(v10);
  v21 = 0;
  JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo < 0 )
    goto LABEL_24;
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo < 0 )
    goto LABEL_24;
  IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL);
  v10 = a5;
  if ( IsThreadInSilo )
  {
    JobSilo = -1073741811;
  }
  else
  {
    v14 = a5;
    *a5 = MEMORY[0x4D8];
    KeyContext = VrpAllocateKeyContext(v14);
    v7 = (UNICODE_STRING *)KeyContext;
    if ( KeyContext )
    {
      v16 = MEMORY[0x4D8];
      v6 = 1;
      *(_WORD *)(KeyContext + 32) = 1;
      *(_OWORD *)KeyContext = v16;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u);
      v7[1].Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        v7[1].Length = 0;
        v7[1].MaximumLength = CmRegistryRootName.Length;
        RtlUnicodeStringCopy(v7 + 1, &CmRegistryRootName);
        v19 = 0LL;
        JobSilo = CmpGetOrCreateContextForSiloNoRef(0LL, &v19);
        if ( JobSilo >= 0 )
        {
          JobSilo = CmpStartSiloRegistryNamespace(v19);
          if ( JobSilo >= 0 )
            JobSilo = 0;
        }
        if ( JobSilo < 0 )
          goto LABEL_24;
        JobSilo = PsInsertSiloContext(0LL, VrpSiloContextSlot, (__int64)v10);
        if ( JobSilo < 0 )
          goto LABEL_24;
        RootKeyObjectForSilo = (struct _DMA_ADAPTER *)CmGetRootKeyObjectForSilo(0LL);
        JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v7, 0LL);
        if ( JobSilo < 0 )
        {
LABEL_37:
          PsRemoveSiloContext(0LL, (unsigned int)VrpSiloContextSlot, 0LL);
          goto LABEL_24;
        }
        PsMakeSiloContextPermanent(0LL, (unsigned int)VrpSiloContextSlot);
        JobSilo = 0;
        v12 = v23;
LABEL_19:
        if ( v12 )
          VrpDestroyNamespaceNode(v10, v12);
        if ( v21 )
          VrpUnlockJobContextExclusive(v10);
        v7 = 0LL;
        if ( JobSilo >= 0 || !v6 )
          goto LABEL_24;
        goto LABEL_37;
      }
    }
    JobSilo = -1073741670;
  }
LABEL_24:
  if ( v10 )
    VrpDereferenceJobContext(v10);
  if ( RootKeyObjectForSilo )
    HalPutDmaAdapter(RootKeyObjectForSilo);
  if ( v7 )
    VrpFreeKeyContext(v7);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
