/*
 * XREFs of ObShutdownSystem @ 0x1408DC5F0
 * Callers:
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExEnumHandleTable @ 0x1405E3DF0 (ExEnumHandleTable.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405F1B2C (ObpDeleteSymbolicLinkName.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ObShutdownSystem(int a1)
{
  PADAPTER_OBJECT v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx
  struct _DMA_ADAPTER *v4; // rsi
  struct _DMA_ADAPTER *v5; // r15
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int16 *v9; // r9
  unsigned __int16 *v10; // rdx
  unsigned __int16 *v11; // rdi
  struct _DMA_ADAPTER *v12; // r13
  struct _DMA_ADAPTER *v13; // r11
  struct _DMA_ADAPTER *v14; // r10
  struct _OBJECT_TYPE *v15; // rax
  char v16; // cl
  __int64 v17; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 *v22; // rcx
  struct _DMA_ADAPTER **v23; // rcx
  int v24; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v25; // [rsp+50h] [rbp-28h]
  struct _OBJECT_TYPE *v26; // [rsp+58h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  int v28; // [rsp+C0h] [rbp+48h]
  int v29; // [rsp+C8h] [rbp+50h]
  int v30; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+60h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v30 = 0;
      ExEnumHandleTable(
        PsInitialSystemProcess[1].AffinityPadding[8],
        (__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64))ObpShutdownCloseHandleProcedure,
        (__int64)&v30,
        0LL);
    }
    else
    {
      v1 = ObpTypeObjectType;
      Object = 0LL;
      DestinationString = 0LL;
      v2 = *(_QWORD **)&ObpTypeObjectType->Version;
      while ( v2 != (_QWORD *)v1 )
      {
        v3 = v2 + 10;
        v2 = (_QWORD *)*v2;
        Object = v3;
        ObMakeTemporaryObject(v3);
      }
      RtlInitUnicodeString(&DestinationString, L"DosDevices");
      if ( (int)ObReferenceObjectByName(
                  (unsigned __int64)&DestinationString,
                  64LL,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  (PADAPTER_OBJECT *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      RtlInitUnicodeString(&DestinationString, L"Global");
      if ( (int)ObReferenceObjectByName(
                  (unsigned __int64)&DestinationString,
                  64LL,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  (PADAPTER_OBJECT *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
      if ( (int)ObReferenceObjectByName(
                  (unsigned __int64)&DestinationString,
                  64LL,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  (PADAPTER_OBJECT *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)ObpRootDirectoryObject);
      HalPutDmaAdapter((PADAPTER_OBJECT)ObpDirectoryObjectType);
      HalPutDmaAdapter((PADAPTER_OBJECT)ObpSymbolicLinkObjectType);
      HalPutDmaAdapter(ObpTypeDirectoryObject);
      HalPutDmaAdapter(ObpTypeObjectType);
    }
  }
  else
  {
    v4 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
    v28 = 1;
    v5 = 0LL;
    v6 = 1;
    v7 = 1;
    if ( ObpRootDirectoryObject )
    {
LABEL_15:
      while ( 2 )
      {
        v8 = 0LL;
LABEL_16:
        v29 = v8;
        if ( (unsigned int)v8 < 0x25 )
        {
          v9 = &v4->Version + 4 * v8;
          v10 = *(unsigned __int16 **)v9;
          v11 = v9;
          v25 = v9;
          while ( 1 )
          {
            if ( !v10 )
            {
              v8 = (unsigned int)(v29 + 1);
              goto LABEL_16;
            }
            v12 = (struct _DMA_ADAPTER *)*((_QWORD *)v10 + 1);
            v13 = v5;
            v14 = v5;
            v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v12[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
            v16 = BYTE2(v12[-2].DmaOperations);
            v26 = v15;
            if ( (v16 & 2) != 0 )
            {
              v17 = (__int64)&v12[-3] - ObpInfoMaskToOffset[v16 & 3];
              v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v12[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
            }
            else
            {
              v17 = 0LL;
            }
            if ( v5 )
            {
              if ( v12 == v5 && (v5 = 0LL, v7 > v6) )
              {
                v7 = v6;
                v11 = v9;
                v28 = v6;
              }
              else
              {
                v5 = 0LL;
                v11 = v10;
                if ( v12 != v14 )
                  v5 = v13;
              }
            }
            else if ( v15 == (struct _OBJECT_TYPE *)ObpTypeObjectType )
            {
              v11 = v10;
            }
            else
            {
              if ( v15 == ObpDirectoryObjectType )
              {
                ++v6;
                v4 = (struct _DMA_ADAPTER *)*((_QWORD *)v10 + 1);
                goto LABEL_15;
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&v12[-2], 0LL);
              BYTE3(v12[-2].DmaOperations) &= ~0x10u;
              ExReleasePushLockEx((ULONG_PTR)&v12[-2], 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
              v22 = *(unsigned __int16 **)v11;
              if ( v12[-3].DmaOperations )
              {
                v7 = v28;
                v11 = *(unsigned __int16 **)v11;
              }
              else
              {
                *(_QWORD *)v11 = *(_QWORD *)v22;
                ExFreePoolWithTag(v22, 0);
                if ( (v26->TypeInfo.ObjectTypeFlags & 8) == 0 )
                {
                  LOBYTE(v24) = 0;
                  v26->TypeInfo.SecurityProcedure(
                    v12,
                    DeleteSecurityDescriptor,
                    0LL,
                    0LL,
                    0LL,
                    (void **)&v12[-1].DmaOperations,
                    v26->TypeInfo.PoolType,
                    0LL,
                    v24);
                }
                if ( v26 == ObpSymbolicLinkObjectType )
                {
                  v7 = v6;
                  v28 = v6;
                  ObpDeleteSymbolicLinkName((__int64)v12);
                  v11 = v25;
                }
                else
                {
                  v7 = v28;
                }
                ExFreePoolWithTag(*(PVOID *)(v17 + 16), 0);
                *(_QWORD *)(v17 + 16) = 0LL;
                *(_DWORD *)(v17 + 8) = 0;
                *(_QWORD *)v17 = 0LL;
                HalPutDmaAdapter(v12);
                HalPutDmaAdapter(v4);
              }
              v9 = v25;
            }
            v10 = *(unsigned __int16 **)v11;
          }
        }
        --v6;
        if ( (BYTE2(v4[-2].DmaOperations) & 2) != 0 )
          v23 = (struct _DMA_ADAPTER **)((char *)&v4[-3] - ObpInfoMaskToOffset[BYTE2(v4[-2].DmaOperations) & 3]);
        else
          v23 = 0LL;
        v5 = v4;
        v4 = *v23;
        if ( *v23 )
          continue;
        break;
      }
    }
  }
}
