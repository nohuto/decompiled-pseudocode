/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1406E88A0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1406E8870 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x1405E3AB8 (RtlUnicodeStringValidateEx.c)
 *     SepCaptureUnicodeStringArray @ 0x1406A0BF0 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        __int64 a1,
        char a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r12
  size_t v7; // rbx
  __int16 v8; // si
  UNICODE_STRING *Pool2; // r15
  char v10; // r13
  char PreviousMode; // r14
  int v12; // ebx
  const UNICODE_STRING *v13; // rbx
  const UNICODE_STRING *v14; // rsi
  int v15; // eax
  _KPROCESS *Process; // rdx
  _KPROCESS *v17; // rcx
  char v18; // bl
  size_t v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG v23; // edx
  __int64 v24; // rdx
  PVOID P; // [rsp+60h] [rbp-68h]
  PCUNICODE_STRING SourceString[12]; // [rsp+68h] [rbp-60h] BYREF

  v6 = a4;
  v7 = (size_t)a3;
  v8 = a1;
  Pool2 = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a1 & 0x2000) != 0 )
  {
    if ( !qword_140C1B990 )
    {
LABEL_3:
      v12 = -1073741822;
      goto LABEL_74;
    }
    if ( !a6 || !a5 )
    {
      v12 = -1073741811;
      goto LABEL_74;
    }
    if ( PreviousMode == 1 )
    {
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) != 1 )
      {
        v12 = -1073741790;
        goto LABEL_74;
      }
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v13 = *(const UNICODE_STRING **)(a6 + 8);
      SourceString[2] = v13;
      v14 = *(const UNICODE_STRING **)(a6 + 16);
      SourceString[3] = v14;
      if ( v13 )
      {
        if ( ((unsigned __int8)v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (const UNICODE_STRING *)((char *)v13 + (_QWORD)v14) > (const UNICODE_STRING *)0x7FFFFFFF0000LL
          || (char *)v13 + (unsigned __int64)v14 < (char *)v14 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      if ( (unsigned __int64)v13 > 0xFFFF )
      {
        v12 = -1073741811;
        goto LABEL_74;
      }
      P = (PVOID)ExAllocatePool2(259LL, v13, 1668499779LL);
      if ( !P )
      {
        v12 = -1073741670;
        goto LABEL_74;
      }
      memmove(P, v14, (size_t)v13);
    }
    else
    {
      v13 = *(const UNICODE_STRING **)(a6 + 8);
      P = *(PVOID *)(a6 + 16);
    }
    LOBYTE(a1) = PreviousMode;
    v15 = ((__int64 (__fastcall *)(__int64, __int64, const UNICODE_STRING *, PVOID))qword_140C1B990)(a1, a5, v13, P);
LABEL_25:
    v12 = v15;
    goto LABEL_74;
  }
  if ( !qword_140C1B8A8 )
    goto LABEL_3;
  if ( (a2 & 0x30) != 0 )
  {
LABEL_29:
    v12 = -1073741584;
    goto LABEL_74;
  }
  if ( a4 - 1 > 0xFFF )
    goto LABEL_73;
  if ( (a1 & 6) == 0 && a2 )
    goto LABEL_29;
  if ( (a1 & 3) == 3 )
  {
LABEL_34:
    v12 = -1073741585;
    goto LABEL_74;
  }
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) != 0 )
      goto LABEL_34;
    v8 = a1 | 1;
    if ( (a1 & 4) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v17 = Process;
      if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 1 )
      {
        v12 = -1073741790;
        goto LABEL_74;
      }
      v10 = (__int64)Process[2].Header.WaitListHead.Flink & 0xF;
      v18 = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF;
      if ( !qword_140C1B8E0
        || (LOBYTE(Process) = (__int64)Process[2].Header.WaitListHead.Flink & 0xF,
            LOBYTE(v17) = v18,
            !(unsigned int)qword_140C1B8E0(v17, Process)) )
      {
        v10 = v18;
      }
      v7 = (size_t)a3;
    }
  }
  else if ( (a1 & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (a1 & 2) == 0 )
      goto LABEL_34;
    v10 = 8;
  }
  v19 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v19, 1668499779LL);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_74;
  }
  if ( PreviousMode == 1 )
  {
    if ( v19 )
    {
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 + v7 > 0x7FFFFFFF0000LL || v19 + v7 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v20 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v20 = a6;
  }
  memmove(Pool2, a3, v19);
  if ( !v20 )
    goto LABEL_68;
  if ( *(_DWORD *)v20 < 0x18u )
  {
    v12 = -1073741580;
    goto LABEL_74;
  }
  if ( !*(_WORD *)(v20 + 8)
    || (LOBYTE(v21) = PreviousMode, v12 = SepCaptureUnicodeStringArray(v20 + 8, 1u, v21, SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v23), v12 >= 0) )
  {
LABEL_68:
    v24 = a4;
    if ( (v8 & 6) == 0 )
    {
LABEL_72:
      LOBYTE(v22) = v10;
      LOBYTE(v21) = a2;
      LOBYTE(v24) = PreviousMode;
      v15 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_140C1B8A8)(
              v8 & 0x807,
              v24,
              v21,
              v22,
              Pool2,
              a4,
              a5,
              SourceString[0]);
      goto LABEL_25;
    }
    if ( a4 == 1 )
    {
      if ( a5 != *(_QWORD *)&Pool2->Length )
      {
        v12 = -1073741581;
        goto LABEL_74;
      }
      goto LABEL_72;
    }
LABEL_73:
    v12 = -1073741582;
  }
LABEL_74:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return (unsigned int)v12;
}
