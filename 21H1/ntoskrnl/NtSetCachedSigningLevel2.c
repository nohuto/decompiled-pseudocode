/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x140716790
 * Callers:
 *     NtSetCachedSigningLevel @ 0x140716760 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x14057F828 (RtlUnicodeStringValidateEx.c)
 *     SepCaptureUnicodeStringArray @ 0x140609E30 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        __int16 a1,
        char a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r15
  SIZE_T v7; // rbx
  __int16 v8; // si
  UNICODE_STRING *PoolWithTag; // r14
  char v10; // r12
  char PreviousMode; // r13
  int v12; // ebx
  SIZE_T v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG v18; // edx
  __int64 v19; // rdx
  _KPROCESS *Process; // rdx
  _KPROCESS *v21; // rcx
  char v22; // bl
  PCUNICODE_STRING SourceString[10]; // [rsp+58h] [rbp-50h] BYREF

  v6 = a4;
  v7 = (SIZE_T)a3;
  v8 = a1;
  PoolWithTag = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140C1DA68 )
  {
    v12 = -1073741823;
    goto LABEL_10;
  }
  if ( (a2 & 0x30) != 0 )
    goto LABEL_43;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_57;
  if ( (a1 & 6) == 0 && a2 )
  {
LABEL_43:
    v12 = -1073741584;
    goto LABEL_10;
  }
  if ( (a1 & 3) == 3 )
  {
LABEL_6:
    v12 = -1073741585;
    goto LABEL_10;
  }
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) != 0 )
      goto LABEL_6;
    v8 = a1 | 1;
    if ( (a1 & 4) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v21 = Process;
      if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 1 )
      {
        v12 = -1073741790;
        goto LABEL_10;
      }
      v10 = (__int64)Process[2].Header.WaitListHead.Flink & 0xF;
      v22 = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF;
      if ( !qword_140C1DAA0
        || (LOBYTE(Process) = (__int64)Process[2].Header.WaitListHead.Flink & 0xF,
            LOBYTE(v21) = v22,
            !(unsigned int)qword_140C1DAA0(v21, Process)) )
      {
        v10 = v22;
      }
      v7 = (SIZE_T)a3;
    }
  }
  else if ( (a1 & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (a1 & 2) == 0 )
      goto LABEL_6;
    v10 = 8;
  }
  v14 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v14, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_10;
  }
  if ( PreviousMode == 1 )
  {
    if ( v14 )
    {
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v14 + v7 > 0x7FFFFFFF0000LL || v14 + v7 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v15 = a6;
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
    v15 = a6;
  }
  memmove(PoolWithTag, a3, v14);
  if ( !v15 )
    goto LABEL_40;
  if ( *(_DWORD *)v15 < 0x18u )
  {
    v12 = -1073741580;
    goto LABEL_10;
  }
  if ( !*(_WORD *)(v15 + 8)
    || (LOBYTE(v16) = PreviousMode, v12 = SepCaptureUnicodeStringArray(v15 + 8, 1u, v16, SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v18), v12 >= 0) )
  {
LABEL_40:
    v19 = a4;
    if ( (v8 & 6) == 0 )
    {
LABEL_9:
      LOBYTE(v17) = v10;
      LOBYTE(v16) = a2;
      LOBYTE(v19) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_140C1DA68)(
              v8 & 0x807,
              v19,
              v16,
              v17,
              PoolWithTag,
              a4,
              a5,
              SourceString[0]);
      goto LABEL_10;
    }
    if ( a4 == 1 )
    {
      if ( a5 != *(_QWORD *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_10;
      }
      goto LABEL_9;
    }
LABEL_57:
    v12 = -1073741582;
  }
LABEL_10:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return (unsigned int)v12;
}
