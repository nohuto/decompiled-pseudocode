/*
 * XREFs of NtRemoveIoCompletionEx @ 0x14062CD10
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopVerifierExAllocatePool_2 @ 0x14050139C (IopVerifierExAllocatePool_2.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtRemoveIoCompletionEx(
        HANDLE Handle,
        volatile void *Address,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        BOOLEAN a6)
{
  __int64 v7; // rdi
  __int64 v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *Pool_2; // r14
  int v13; // ebx
  __int64 v15; // rcx
  ULONG v16; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-F0h]
  LARGE_INTEGER v18; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = a3;
  v10 = a5;
  memset(P, 0, sizeof(P));
  v18.QuadPart = 0LL;
  v16 = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return 3221225485LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32 * v7, 8u);
    v15 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( a5 )
    {
      v17 = &v18;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v18 = *(LARGE_INTEGER *)v10;
    }
    v10 = (__int64)v17;
  }
  else if ( !a5 )
  {
    v10 = (__int64)v17;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool_2 = (PLIST_ENTRY *)IopVerifierExAllocatePool_2(0LL, 8 * v7);
    if ( Pool_2 )
      goto LABEL_7;
    LODWORD(v7) = 16;
  }
  Pool_2 = (PLIST_ENTRY *)P;
LABEL_7:
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (__int64)Address,
            Pool_2,
            v7,
            &v16,
            PreviousMode,
            (LARGE_INTEGER *)v10,
            a6);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  if ( Pool_2 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(Pool_2, 0);
  if ( v13 >= 0 )
    *a4 = v16;
  return (unsigned int)v13;
}
