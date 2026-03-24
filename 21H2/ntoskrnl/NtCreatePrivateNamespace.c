/*
 * XREFs of NtCreatePrivateNamespace @ 0x1406E4E80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406E50F0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406E52CC (ObpCaptureBoundaryDescriptor.c)
 *     ObpRegisterPrivateNamespace @ 0x1406E55A8 (ObpRegisterPrivateNamespace.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreatePrivateNamespace(__int64 *a1, __int64 a2, int a3, void *a4)
{
  char PreviousMode; // si
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  unsigned __int64 v11; // rbx
  PVOID *p_Object; // rcx
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rcx
  int inserted; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h]
  __int64 v30; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v30 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObpCaptureBoundaryDescriptor(a4);
  if ( (int)result >= 0 )
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
        v13 = ObCreateObjectEx((_DWORD)p_Object, (_DWORD)ObpDirectoryObjectType, a3, PreviousMode);
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
              inserted = ObInsertObjectEx((PADAPTER_OBJECT)v14, 0LL, 0, 0LL, (__int64)&v30);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(v20, v19);
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
              if ( inserted < 0 )
              {
                v24 = *(_QWORD *)v15;
                v25 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v25 == v15 )
                {
                  *v25 = v24;
                  *(_QWORD *)(v24 + 8) = v25;
LABEL_32:
                  --CurrentServerSiloGlobals[182];
                  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
LABEL_16:
                  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  if ( inserted >= 0 )
                    *a1 = v30;
                  return (unsigned int)inserted;
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
                v26 = *(_QWORD *)v15;
                v27 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v27 == v15 )
                {
                  *v27 = v26;
                  *(_QWORD *)(v26 + 8) = v27;
                  goto LABEL_32;
                }
              }
              __fastfail(3u);
            }
          }
          HalPutDmaAdapter((PADAPTER_OBJECT)v14);
          return (unsigned int)inserted;
        }
        v10 = v13;
      }
    }
    ExFreePoolWithTag(v9, 0x534E624Fu);
    return (unsigned int)v10;
  }
  return result;
}
