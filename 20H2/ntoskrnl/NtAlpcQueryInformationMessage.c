/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x140656E90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1405F1480 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x1405F150C (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     AlpcpQuerySidMessage @ 0x140656D1C (AlpcpQuerySidMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x140657084 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1408C4C2C (AlpcpQueryTokenModifiedIdMessage.c)
 */

__int64 __fastcall NtAlpcQueryInformationMessage(
        HANDLE Handle,
        __int64 a2,
        int a3,
        volatile void *a4,
        SIZE_T Length,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  _DWORD *v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // ebx
  __int64 v15; // r9
  struct _DMA_ADAPTER *v16; // r15
  ULONG_PTR v17; // r14
  int v18; // edi
  int v19; // edi
  int TokenModifiedIdMessage; // eax
  unsigned int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-28h] BYREF

  v23 = 0;
  BugCheckParameter2[0] = 0LL;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(a2, &v22, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v11 = (_DWORD *)a6;
    if ( a6 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( a6 < 0x7FFFFFFF0000LL )
        v12 = a6;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = (_DWORD *)a6;
  }
  v13 = v22;
  if ( !v22 )
  {
    v14 = -1073741811;
    goto LABEL_20;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v16 = (struct _DMA_ADAPTER *)Object;
    v14 = AlpcpLookupMessage((__int64)Object, v13, v23, v15, BugCheckParameter2);
    if ( v14 < 0 )
    {
LABEL_19:
      HalPutDmaAdapter(v16);
      goto LABEL_20;
    }
    v17 = BugCheckParameter2[0];
    if ( !*(_QWORD *)(BugCheckParameter2[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_18;
    }
    if ( a3 )
    {
      v18 = a3 - 1;
      if ( !v18 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v16,
                                   BugCheckParameter2[0],
                                   (_DWORD)a4,
                                   Length,
                                   (__int64)v11);
        goto LABEL_17;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v16,
                                     BugCheckParameter2[0],
                                     (_DWORD)a4,
                                     Length,
                                     (__int64)v11);
LABEL_17:
          v14 = TokenModifiedIdMessage;
LABEL_18:
          AlpcpUnlockMessage(v17);
          goto LABEL_19;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = (*(_DWORD *)(BugCheckParameter2[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_18;
      }
      v14 = -1073741811;
      goto LABEL_18;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((int)v16, BugCheckParameter2[0], (void *)a4, Length, v11);
    goto LABEL_17;
  }
LABEL_20:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
