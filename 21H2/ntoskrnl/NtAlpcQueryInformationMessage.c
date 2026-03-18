/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x14066AA00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpQueryHandleInformationMessage @ 0x14066AC1C (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpQuerySidMessage @ 0x14066B464 (AlpcpQuerySidMessage.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1407B0EB0 (AlpcpCaptureIdMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14080C0F4 (AlpcpQueryTokenModifiedIdMessage.c)
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
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  NTSTATUS v14; // ebx
  int v15; // r9d
  PVOID v16; // r15
  ULONG_PTR v17; // r14
  int v18; // edi
  int v19; // edi
  NTSTATUS TokenModifiedIdMessage; // eax
  int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v25[2]; // [rsp+40h] [rbp-28h] BYREF

  v23 = 0;
  v25[0] = 0LL;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(a2, &v22, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v11 = a6;
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
    v11 = a6;
  }
  v13 = v22;
  if ( !v22 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v16 = Object;
    v14 = AlpcpLookupMessage((_DWORD)Object, v13, v23, v15, (__int64)v25);
    if ( v14 < 0 )
    {
LABEL_18:
      ObfDereferenceObject(v16);
      goto LABEL_19;
    }
    v17 = v25[0];
    if ( !*(_QWORD *)(v25[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_17;
    }
    if ( a3 )
    {
      v18 = a3 - 1;
      if ( !v18 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage((_DWORD)v16, v25[0], (_DWORD)a4, Length, v11);
        goto LABEL_16;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage((_DWORD)v16, v25[0], (_DWORD)a4, Length, v11);
LABEL_16:
          v14 = TokenModifiedIdMessage;
LABEL_17:
          AlpcpUnlockMessage(v17);
          goto LABEL_18;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = (*(_DWORD *)(v25[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((_DWORD)v16, v25[0], (_DWORD)a4, Length, v11);
    goto LABEL_16;
  }
LABEL_19:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
