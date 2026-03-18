/*
 * XREFs of PsQueryProcessCommandLine @ 0x14030EFD0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  _DWORD *v7; // r9
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  int v17; // esi
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  BOOLEAN v21; // [rsp+40h] [rbp-D8h]
  int v22[4]; // [rsp+48h] [rbp-D0h]
  __int64 v23; // [rsp+80h] [rbp-98h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+88h] [rbp-90h]
  __int64 v25; // [rsp+90h] [rbp-88h]
  __int64 v26; // [rsp+98h] [rbp-80h]
  _BYTE v27[48]; // [rsp+A0h] [rbp-78h] BYREF

  memset(v27, 0, sizeof(v27));
  v23 = 0LL;
  RunRef = (PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112);
  v21 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  if ( v21 )
  {
    *(_OWORD *)v22 = 0LL;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27, v7);
    v10 = 0LL;
    v11 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( v11 )
      v10 = *v11;
    if ( v10 )
    {
      v25 = *(unsigned int *)(v10 + 16);
      v16 = *(_QWORD *)(v25 + 64);
      v22[0] = v16;
      v15 = v16 >> 16;
      v14 = HIDWORD(v16);
      *(_QWORD *)&v22[2] = HIDWORD(v16);
      v17 = 0;
    }
    else
    {
      v12 = *(_QWORD *)(BugCheckParameter1 + 1360);
      v26 = v12;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 32) + 112LL;
        if ( v13 >= 0x7FFFFFFF0000LL )
          v13 = 0x7FFFFFFF0000LL;
        v22[0] = *(_DWORD *)v13;
        v14 = *(_QWORD *)(v13 + 8);
        v22[2] = v14;
        LOWORD(v15) = HIWORD(*(_DWORD *)v13);
        LOWORD(v16) = *(_DWORD *)v13;
        v17 = 0;
      }
      else
      {
        v17 = -1073741275;
        v14 = 0LL;
        LOWORD(v15) = 0;
        LOWORD(v16) = 0;
      }
    }
    if ( HIWORD(v22[0]) )
    {
      if ( (v22[2] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = v14 + (unsigned __int16)v15;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    KiUnstackDetachProcess((__int64)v27, 0LL, v8, v9);
    if ( v17 >= 0 )
    {
      if ( !(_WORD)v16
        || (unsigned __int16)v16 > (unsigned __int16)v15
        || (v22[0] & 1) != 0
        || (v22[0] & 0x10000) != 0
        || !v14 )
      {
        v17 = -1073741275;
      }
      else
      {
        v19 = (unsigned __int16)v15 + 16;
        if ( a5 )
          *a5 = v19;
        if ( a3 < v19 )
        {
          v17 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v16;
          *(_WORD *)(a2 + 2) = v15;
          if ( (_WORD)v15 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v17 = MmCopyVirtualMemory(
                  BugCheckParameter1,
                  v22[2],
                  (int)KeGetCurrentThread()->ApcState.Process,
                  (int)a2 + 16,
                  HIWORD(v22[0]),
                  a4,
                  (__int64)&v23);
          if ( v17 >= 0 )
            v17 = 0;
        }
      }
    }
  }
  else
  {
    v17 = -1073741558;
  }
  if ( v21 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v17;
}
