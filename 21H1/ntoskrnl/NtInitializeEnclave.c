/*
 * XREFs of NtInitializeEnclave @ 0x1408CF820
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x1408CE640 (MiInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtInitializeEnclave(HANDLE Handle, unsigned __int64 a2, char *a3, unsigned int a4, _DWORD *a5)
{
  size_t v5; // r13
  PVOID Pool; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rcx
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  PVOID v14; // rsi
  KPROCESSOR_MODE v16; // [rsp+40h] [rbp-B8h]
  int v17; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v19; // [rsp+58h] [rbp-A0h]
  HANDLE v20; // [rsp+68h] [rbp-90h]
  _DWORD *v21; // [rsp+70h] [rbp-88h]
  unsigned __int64 v22; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v5 = a4;
  v22 = a2;
  v20 = Handle;
  v21 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  Object = 0LL;
  v17 = 0;
  Pool = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    v10 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !a4 )
    goto LABEL_18;
  if ( a4 <= 0x1000 )
  {
    Pool = MiAllocatePool(256, a4, 0x44456D4Du);
    v19 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      goto LABEL_23;
    }
    if ( v16 == 1 && v5 - 1 > 0xFFFE && (_DWORD)v5 && ((unsigned __int64)&a3[v5] > 0x7FFFFFFF0000LL || &a3[v5] < a3) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(Pool, a3, v5);
    PreviousMode = v16;
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( Handle == (HANDLE)-1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObReferenceObjectByHandleWithTag(
              Handle,
              8u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL);
      if ( v11 < 0 )
        goto LABEL_23;
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    }
    v11 = MiInitializeEnclave(Process, v22, (__int64)Pool, v5, &v17);
    goto LABEL_23;
  }
  v11 = -1073741820;
LABEL_23:
  v14 = Object;
  if ( Object && Handle != (HANDLE)-1LL )
  {
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = v17;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v11;
}
