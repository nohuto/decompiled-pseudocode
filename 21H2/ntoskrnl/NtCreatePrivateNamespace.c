/*
 * XREFs of NtCreatePrivateNamespace @ 0x1406BC160
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406BC3D0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406BC5AC (ObpCaptureBoundaryDescriptor.c)
 *     ObpRegisterPrivateNamespace @ 0x1406BC888 (ObpRegisterPrivateNamespace.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  int v4; // r14d
  char PreviousMode; // si
  __int64 v7; // rcx
  NTSTATUS result; // eax
  _QWORD *v9; // rdi
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rbx
  PVOID *p_Object; // rcx
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rcx
  NTSTATUS inserted; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h]
  __int64 v33; // [rsp+68h] [rbp-20h] BYREF

  v4 = (int)ObjectAttributes;
  Object = 0LL;
  v33 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)NamespaceHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v9 = P;
    v10 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v10 >= 0 )
    {
      v11 = (unsigned int)(*((_DWORD *)P + 6) + 392);
      if ( v11 < *((_QWORD *)P + 3) )
      {
        v10 = -1073741811;
      }
      else
      {
        p_Object = &Object;
        LOBYTE(p_Object) = PreviousMode;
        v13 = ObCreateObjectEx((_DWORD)p_Object, (_DWORD)ObpDirectoryObjectType, v4, PreviousMode);
        if ( v13 >= 0 )
        {
          v14 = Object;
          memset(Object, 0, (unsigned int)v11);
          v15 = ((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 8) = v15;
          *(_QWORD *)v15 = v15;
          v16 = v9[3];
          *(_QWORD *)(v15 + 24) = v16;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = *((_BYTE *)v9 + 40);
          memmove((void *)(v15 + 48), v9 + 6, v16);
          ExFreePoolWithTag(v9, 0x534E624Fu);
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
              inserted = ObInsertObjectEx((PADAPTER_OBJECT)v14, 0LL, 0, 0LL, (__int64)&v33);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(v20, v19);
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
              if ( inserted < 0 )
              {
                v27 = *(_QWORD *)v15;
                v28 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v28 == v15 )
                {
                  *v28 = v27;
                  *(_QWORD *)(v27 + 8) = v28;
LABEL_32:
                  --CurrentServerSiloGlobals[182];
                  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
LABEL_16:
                  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
                  if ( inserted >= 0 )
                    *NamespaceHandle = (HANDLE)v33;
                  return inserted;
                }
              }
              else
              {
                if ( (v14[42] & 2) == 0 )
                {
                  v23 = Object;
                  *(_QWORD *)(v15 + 16) = Object;
                  v23[40] = v15;
                  goto LABEL_16;
                }
                v29 = *(_QWORD *)v15;
                v30 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v30 == v15 )
                {
                  *v30 = v29;
                  *(_QWORD *)(v29 + 8) = v30;
                  goto LABEL_32;
                }
              }
              __fastfail(3u);
            }
          }
          HalPutDmaAdapter((PADAPTER_OBJECT)v14);
          return inserted;
        }
        v10 = v13;
      }
    }
    ExFreePoolWithTag(v9, 0x534E624Fu);
    return v10;
  }
  return result;
}
