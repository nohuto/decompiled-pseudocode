/*
 * XREFs of NtCreateEnclave @ 0x1408D0720
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1405FF10C (MiValidateZeroBits.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 *     MiCreateEnclave @ 0x1408CF1DC (MiCreateEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char *Src,
        unsigned int a8,
        _DWORD *a9)
{
  PVOID Pool; // r14
  char PreviousMode; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  int Enclave; // ebx
  int v14; // ebx
  char v15; // r9
  __int64 v16; // rcx
  void *Process; // rdi
  char v19; // [rsp+50h] [rbp-C8h]
  _DWORD Size_4[3]; // [rsp+6Ch] [rbp-ACh] BYREF
  unsigned __int64 v23[2]; // [rsp+78h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-90h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp-88h]
  ULONGLONG v26[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v27[48]; // [rsp+A8h] [rbp-70h] BYREF

  v25 = a4;
  v26[1] = (ULONGLONG)a2;
  v26[0] = a3;
  v23[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(v27, 0, sizeof(v27));
  v23[0] = 0LL;
  Pool = 0LL;
  memset(Size_4, 0, sizeof(Size_4));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v11 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( a6 == 1 )
  {
LABEL_16:
    if ( qword_140C4EC80 )
    {
      v14 = 4096;
      v12 = a5;
      goto LABEL_18;
    }
LABEL_14:
    Enclave = -1073741637;
    goto LABEL_47;
  }
  if ( a6 == 2 )
  {
    if ( (MEMORY[0x7FFE036C] & 4) == 0 )
      goto LABEL_14;
    goto LABEL_16;
  }
  if ( (unsigned int)(a6 - 16) > 1 )
    goto LABEL_14;
  v12 = a5;
  if ( a5 )
  {
LABEL_10:
    Enclave = -1073741581;
    goto LABEL_47;
  }
  if ( a8 > 0x24 )
    goto LABEL_12;
  v14 = 0;
LABEL_18:
  if ( (int)MiValidateZeroBits(v26) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_47;
  }
  if ( !v25 )
  {
    Enclave = -1073741582;
    goto LABEL_47;
  }
  if ( v12 > v25 )
    goto LABEL_10;
  v15 = v19;
  if ( v19 == 1 )
  {
    v16 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  v23[0] = *a2;
  if ( a8 )
  {
    if ( v14 && a8 != v14 )
    {
LABEL_12:
      Enclave = -1073741820;
      goto LABEL_47;
    }
    Pool = MiAllocatePool(256, (a8 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    *(_QWORD *)&Size_4[1] = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_47;
    }
    if ( v19 == 1 )
    {
      if ( (unsigned __int64)a8 - 1 > 0xFFFE )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[a8] > 0x7FFFFFFF0000LL || &Src[a8] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else if ( ((unsigned __int8)Src & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    memmove(Pool, Src, a8);
    v15 = v19;
  }
  if ( a1 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                a1,
                8,
                (__int64)PsProcessType,
                v15,
                0x6D566D4Du,
                &BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_47;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27);
  }
  Enclave = MiCreateEnclave((int)Process, v23, v26[0], v25, v12, a6, (__int64)Pool, a8, (__int64)Size_4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v27, 0LL);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_47:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *a2 = v23[0];
  if ( a9 )
    *a9 = Size_4[0];
  return (unsigned int)Enclave;
}
