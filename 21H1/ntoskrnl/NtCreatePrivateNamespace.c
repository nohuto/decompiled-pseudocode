/*
 * XREFs of NtCreatePrivateNamespace @ 0x14067DC90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14067DF00 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRegisterPrivateNamespace @ 0x14067E0DC (ObpRegisterPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14070DD2C (ObpCaptureBoundaryDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS result; // eax
  _QWORD *v10; // rdi
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rcx
  NTSTATUS inserted; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h]
  __int64 v32; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v32 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)NamespaceHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v10 = P;
    v11 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v11 >= 0 )
    {
      v12 = (unsigned int)(*((_DWORD *)P + 6) + 392);
      if ( v12 < *((_QWORD *)P + 3) )
      {
        v11 = -1073741811;
      }
      else
      {
        v13 = ObCreateObjectEx(
                PreviousMode,
                ObpDirectoryObjectType,
                (__int64)ObjectAttributes,
                PreviousMode,
                v29,
                *((_DWORD *)P + 6) + 392,
                0,
                0,
                &Object,
                0LL);
        if ( v13 >= 0 )
        {
          v14 = Object;
          memset(Object, 0, (unsigned int)v12);
          v15 = ((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 8) = v15;
          *(_QWORD *)v15 = v15;
          v16 = v10[3];
          *(_QWORD *)(v15 + 24) = v16;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = *((_BYTE *)v10 + 40);
          memmove((void *)(v15 + 48), v10 + 6, v16);
          ExFreePoolWithTag(v10, 0x534E624Fu);
          v14[37] = 0LL;
          *((_DWORD *)v14 + 85) = -1;
          *((_DWORD *)v14 + 84) = 1;
          if ( (*((_BYTE *)v14 - 22) & 2) != 0 )
            v17 = (__int64)v14 - ObpInfoMaskToOffset[*((_BYTE *)v14 - 22) & 3] - 48;
          else
            v17 = 0LL;
          if ( v17 )
          {
            inserted = -1073741773;
          }
          else
          {
            inserted = ObpRegisterPrivateNamespace(((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( inserted >= 0 )
            {
              ObfReferenceObject(v14);
              inserted = ObInsertObjectEx((PADAPTER_OBJECT)v14, 0LL, DesiredAccess, 0, 0, 0LL, &v32);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
              if ( inserted < 0 )
              {
                v25 = *(_QWORD *)v15;
                v26 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v26 == v15 )
                {
                  *v26 = v25;
                  *(_QWORD *)(v25 + 8) = v26;
LABEL_32:
                  --CurrentServerSiloGlobals[182];
                  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
LABEL_16:
                  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
                  if ( inserted >= 0 )
                    *NamespaceHandle = (HANDLE)v32;
                  return inserted;
                }
              }
              else
              {
                if ( (v14[42] & 2) == 0 )
                {
                  v21 = Object;
                  *(_QWORD *)(v15 + 16) = Object;
                  v21[40] = v15;
                  goto LABEL_16;
                }
                v27 = *(_QWORD *)v15;
                v28 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v28 == v15 )
                {
                  *v28 = v27;
                  *(_QWORD *)(v27 + 8) = v28;
                  goto LABEL_32;
                }
              }
              __fastfail(3u);
            }
          }
          HalPutDmaAdapter((PADAPTER_OBJECT)v14);
          return inserted;
        }
        v11 = v13;
      }
    }
    ExFreePoolWithTag(v10, 0x534E624Fu);
    return v11;
  }
  return result;
}
