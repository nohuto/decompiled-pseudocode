/*
 * XREFs of NtCreateEnclave @ 0x1408CF3D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x14063414C (MiValidateZeroBits.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     MiCreateEnclave @ 0x1408CDE8C (MiCreateEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  ULONG v15; // r9d
  __int64 v16; // rcx
  void *Process; // rdi
  _DWORD *v18; // r9
  __int64 v19; // r8
  _DWORD *v20; // r9
  _QWORD *Tag; // [rsp+20h] [rbp-F8h]
  char v23; // [rsp+50h] [rbp-C8h]
  _DWORD Size_4[3]; // [rsp+6Ch] [rbp-ACh] BYREF
  unsigned __int64 v27[2]; // [rsp+78h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-90h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp-88h]
  ULONGLONG v30[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v31[48]; // [rsp+A8h] [rbp-70h] BYREF

  v29 = a4;
  v30[1] = (ULONGLONG)a2;
  v30[0] = a3;
  v27[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(v31, 0, sizeof(v31));
  v27[0] = 0LL;
  Pool = 0LL;
  memset(Size_4, 0, sizeof(Size_4));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = PreviousMode;
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
    if ( qword_140C4EDC0 )
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
  if ( (int)MiValidateZeroBits(v30) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_47;
  }
  if ( !v29 )
  {
    Enclave = -1073741582;
    goto LABEL_47;
  }
  if ( v12 > v29 )
    goto LABEL_10;
  LOBYTE(v15) = v23;
  if ( v23 == 1 )
  {
    v16 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  v27[0] = *a2;
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
    if ( v23 == 1 )
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
    LOBYTE(v15) = v23;
  }
  if ( a1 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    LODWORD(Tag) = 1834380621;
    Enclave = ObpReferenceObjectByHandleWithTag(a1, 8LL, PsProcessType, v15, Tag, &BugCheckParameter1, 0LL, 0LL);
    if ( Enclave < 0 )
      goto LABEL_47;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31, v18);
  }
  Enclave = MiCreateEnclave((int)Process, v27, v30[0], v29, v12, a6, (__int64)Pool, a8, (__int64)Size_4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v31, 0LL, v19, v20);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_47:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *a2 = v27[0];
  if ( a9 )
    *a9 = Size_4[0];
  return (unsigned int)Enclave;
}
