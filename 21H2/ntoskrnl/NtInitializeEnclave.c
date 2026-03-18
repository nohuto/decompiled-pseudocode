/*
 * XREFs of NtInitializeEnclave @ 0x14097B220
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x14097A120 (MiInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtInitializeEnclave(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        const void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // r13
  PVOID Pool; // rdi
  char PreviousMode; // dl
  __int64 v10; // rcx
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  _DWORD *v14; // r9
  PVOID v15; // rsi
  char v17; // [rsp+40h] [rbp-B8h]
  int v18; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v20; // [rsp+58h] [rbp-A0h]
  ULONG_PTR v21; // [rsp+68h] [rbp-90h]
  _DWORD *v22; // [rsp+70h] [rbp-88h]
  unsigned __int64 v23; // [rsp+78h] [rbp-80h]
  _BYTE v24[48]; // [rsp+88h] [rbp-70h] BYREF

  v5 = a4;
  v23 = a2;
  v21 = BugCheckParameter1;
  v22 = a5;
  memset(v24, 0, sizeof(v24));
  Object = 0LL;
  v18 = 0;
  Pool = 0LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !a4 )
    goto LABEL_12;
  if ( a4 <= 0x1000 )
  {
    Pool = MiAllocatePool(256, a4, 0x44456D4Du);
    v20 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      goto LABEL_17;
    }
    memmove(Pool, a3, v5);
    PreviousMode = v17;
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( BugCheckParameter1 == -1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL,
              0LL);
      if ( v11 < 0 )
        goto LABEL_17;
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v24, v14);
    }
    v11 = MiInitializeEnclave(Process, v23, (__int64)Pool, v5, &v18);
    goto LABEL_17;
  }
  v11 = -1073741820;
LABEL_17:
  v15 = Object;
  if ( Object && BugCheckParameter1 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v24, 0LL);
    ObfDereferenceObjectWithTag(v15, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = v18;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v11;
}
