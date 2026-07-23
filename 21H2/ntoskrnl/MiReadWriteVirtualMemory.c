/*
 * XREFs of MiReadWriteVirtualMemory @ 0x1406E58F0
 * Callers:
 *     NtWriteVirtualMemory @ 0x140611AA0 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x1406E58C0 (NtReadVirtualMemory.c)
 * Callees:
 *     PsIsProcessLoggingEnabled @ 0x1402ABBF0 (PsIsProcessLoggingEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     EtwTiLogReadWriteVm @ 0x140690354 (EtwTiLogReadWriteVm.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        HANDLE Handle,
        size_t a2,
        size_t a3,
        size_t a4,
        unsigned __int64 a5,
        ACCESS_MASK DesiredAccess)
{
  int v7; // r13d
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // al
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  NTSTATUS v14; // edi
  _KPROCESS *Process; // r10
  PVOID v16; // r14
  int v17; // r9d
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  NTSTATUS v21; // eax
  int v22; // eax
  __int64 v23; // r10
  char v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  int v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v7 = a2;
  v9 = 0LL;
  Object[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    if ( a4 + a2 < a2 || a4 + a2 > 0x7FFFFFFF0000LL || a3 + a4 < a3 || a3 + a4 > 0x7FFFFFFF0000LL )
      return 3221225477LL;
    v12 = (_QWORD *)a5;
    if ( a5 )
    {
      v13 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
  }
  else
  {
    v12 = (_QWORD *)a5;
  }
  v26 = 0LL;
  v14 = 0;
  if ( a4 )
  {
    v14 = ObReferenceObjectByHandleWithTag(
            Handle,
            DesiredAccess,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            Object,
            0LL);
    if ( v14 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      Object[1] = Process;
      v16 = Object[0];
      if ( (*((_BYTE *)Object[0] + 992) & 1) == 0 || Process == Object[0] || *((_QWORD *)Object[0] + 175) )
      {
        if ( DesiredAccess == 16 )
        {
          v17 = v28;
          v18 = (int)Process;
          v19 = v7;
          v20 = (int)Object[0];
        }
        else
        {
          v17 = v7;
          v18 = (int)Object[0];
          v19 = v28;
          v20 = (int)Process;
        }
        v21 = MmCopyVirtualMemory(v20, v19, v18, v17, a4, v25, (__int64)&v26);
        v9 = v26;
        v14 = v21;
      }
      else
      {
        v14 = -1073741819;
      }
      LOBYTE(v22) = PsIsProcessLoggingEnabled((__int64)v16, DesiredAccess);
      if ( v22 )
        EtwTiLogReadWriteVm(v14, v23, (__int64)v16, DesiredAccess, v7, v9);
      ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
    }
  }
  if ( v12 )
    *v12 = v9;
  return (unsigned int)v14;
}
